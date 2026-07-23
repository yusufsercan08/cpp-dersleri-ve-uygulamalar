# Copilot Instructions for AI Coding Agents

## Project Overview
This is a C language lessons project, structured for educational purposes. The main entry point is `main.c`. The build artifacts are organized into `bin/Debug` and `obj/Debug` directories. The project uses Code::Blocks project files (`Lessons.cbp`) for build configuration.

## Architecture & Workflow
- **Single-File Focus:** All logic currently resides in `main.c`. There are no additional modules or headers.
- **Build Process:**
  - Use Code::Blocks IDE or compatible build tools to compile. The main output is `Lessons.exe` in `bin/Debug/`.
  - Object files are stored in `obj/Debug/`.
  - No custom build scripts detected; rely on IDE or standard `gcc`/`clang` commands.
- **Debugging:**
  - Debug using Code::Blocks or any C debugger targeting `main.c` and `Lessons.exe`.
- **Testing:**
  - No automated tests or test directories found. Manual testing is performed by running the executable.

## Conventions & Patterns
- **File Naming:**
  - Source: `main.c`
  - Executable: `Lessons.exe`
  - Object: `main.o`
- **No External Dependencies:**
  - Pure C standard library; no third-party libraries or frameworks.
- **No Custom Scripts:**
  - No Makefile, shell scripts, or CI/CD detected.
- **No Header Files:**
  - All code is in a single `.c` file; add headers if modularizing.

## Integration Points
- **IDE Integration:**
  - Project is set up for Code::Blocks (`Lessons.cbp`).
  - If using other editors, ensure build output matches the expected directory structure.

## Example Build Command
```sh
gcc main.c -o bin/Debug/Lessons.exe
```

## Key Files & Directories
- `main.c`: Main source file
- `Lessons.cbp`: Code::Blocks project file
- `bin/Debug/`: Compiled executable output
- `obj/Debug/`: Object files

## Recommendations for AI Agents
- Focus on `main.c` for code changes and improvements.
- Maintain the output structure for compatibility with Code::Blocks.
- If adding new features, consider modularizing with header/source files and updating the project file accordingly.
- Document any new conventions or workflows in this file for future agents.
