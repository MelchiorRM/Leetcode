import os
import sys

def format_folder_name(number: int, title: str) -> str:
    formatted_number = str(number).zfill(4)
    formatted_title = title.strip().replace(" ", "_")
    return f"{formatted_number}_{formatted_title}"

def create_readme(problem_number: int, title: str) -> str:
    return f"""# {str(problem_number).zfill(4)}. {title}

---

**Solution provided in C++, Python, and Java.**
"""

def update_global_readme(problem_number: int, title: str):
    global_readme_path = "README.md"
    
    # Check if global README exists
    if os.path.exists(global_readme_path):
        with open(global_readme_path, 'r+', encoding='utf-8') as f:
            content = f.read()
            
            # Find the table section or create it
            if "| # | Title |" in content:
                # Table already exists, update it
                table_start = content.index("| # | Title |")
                table_end = content.index("|---|-------|", table_start) + len("|---|-------|")
                new_row = f"| {str(problem_number).zfill(4)} | {title} |\n"
                new_content = content[:table_end] + new_row + content[table_end:]
                f.seek(0)
                f.write(new_content)
            else:
                # If table doesn't exist, create it
                f.seek(0, 2)  # Move to end of file
                f.write("\n\n# Leetcode Progress\n\n| # | Title |\n|---|-------|\n")
                f.write(f"| {str(problem_number).zfill(4)} | {title} |\n")
    else:
        print(f"⚠️ Global README not found at {global_readme_path}. Please make sure it's in the root folder.")

def generate_problem_folder(number: int, title: str):
    folder_name = format_folder_name(number, title)
    
    # Create the folder
    os.makedirs(folder_name)
    print(f"Created folder: {folder_name}")

    # Create the necessary files
    file_names = ["solution.py", "solution.cpp", "solution.java", "README.md"]
    for file in file_names:
        file_path = os.path.join(folder_name, file)
        with open(file_path, 'w', encoding='utf-8') as f:
            if file == "README.md":
                f.write(create_readme(number, title))
        print(f"Created: {file_path}")

    # Update the global README with the new problem
    update_global_readme(number, title)

# ----------- Run it -----------
if __name__ == "__main__":
    if len(sys.argv) < 3:
        print("Usage: python generate_problem.py <problem_number> <problem_title>")
        sys.exit(1)

    number = int(sys.argv[1])
    title = " ".join(sys.argv[2:])
    generate_problem_folder(number, title)