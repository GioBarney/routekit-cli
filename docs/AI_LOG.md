# AI Log - RouteKit CLI

Requirement: 10+ entries, at least 3 where the AI was wrong and I caught and fixed it.

Add an entry the same day it happens. Mark wrong-AI entries with **AI WRONG** in the title.

Progress: 8 / 10 entries, 1 / 3 AI-wrong entries (entry 5 was a confusing AI explanation, not counted as wrong)

---

## Entry template (copy this for each entry)

### Entry N - YYYY-MM-DD - short title

- **Tool:** Claude / ChatGPT / Gemini
- **What I was working on:**
- **What I asked:**
- **What the AI gave me:**
- **Was it right?** Yes / Partly / No
- **If wrong, how I caught it:**
- **What I did with it:** (used as is, changed it, threw it out, and why)
- **What I learned:**

---

## Entries

### Entry 1 - 2026-11-12 - AI WRONG: said my proposal was not written yet

- **Tool:** Claude
- **What I was working on:** Planning how to start the project.
- **What I asked:** How I should go about the project and whether it had the info on it.
- **What the AI gave me:** A summary of the requirements and a plan. It said my proposal was "only a skeleton with no essay text yet" and that I was behind.
- **Was it right?** Partly. The requirements were right, but the proposal status was wrong. I had already submitted it and my instructor had approved it.
- **If wrong, how I caught it:** I knew I had turned it in. I sent the AI my submitted PDF and the instructor's feedback.
- **What I did with it:** Kept the build plan, ignored the "write the proposal" step. The AI corrected itself after reading the PDF.
- **What I learned:** 

### Entry 2 - 2026-11-12 - Linking my PC folder to the GitHub repo

- **Tool:** Claude
- **What I was working on:** Project setup. I had a folder on my PC and a new GitHub repo with the same files, but they were not connected.
- **What I asked:** To be walked through linking them with git commands.
- **What the AI gave me:** Seven commands with a reason for each: git init -b main, git remote add origin, git fetch origin, git reset origin/main, git branch --set-upstream-to=origin/main, git status.
- **Was it right?** Yes. git status showed "up to date with origin/main" and "working tree clean".
- **If wrong, how I caught it:** n/a
- **What I did with it:** Ran each command myself in PowerShell and pasted the output back to be checked.
- **What I learned:** how to add, commit, and push through the terminal to github

### Entry 3 - 2026-11-12 - Choosing a GUI library

- **Tool:** Claude
- **What I was working on:** My instructor challenged us to add a GUI.
- **What I asked:** How to add a GUI to a C++ program.
- **What the AI gave me:** Three options (raylib + raygui, Dear ImGui, Qt) with setup difficulty for each. It recommended raylib + raygui, and building the core logic first with the terminal menu, then putting the GUI on top.
- **Was it right?** Not verified yet. I have not installed raylib.
- **If wrong, how I caught it:** n/a so far
- **What I did with it:** Chose raylib + raygui and the "core first" order.
- **What I learned:** There is various ways to add gui to a program

### Entry 4 - 2026-11-12 - Compile error: main.cpp not found

- **Tool:** Claude
- **What I was working on:** Compiling the menu skeleton.
- **What I asked:** Why "g++ main.cpp -o ./main" said "No such file or directory".
- **What the AI gave me:** I was in the project folder but main.cpp is inside src, so the command needed the path: g++ -Wall src/main.cpp -o routekit. The second error (main.exe not recognized) only happened because the compile failed.
- **Was it right?** Yes.
- **If wrong, how I caught it:** n/a
- **What I did with it:** Used the path in the compile command.
- **What I learned:** That i tend to overlook things frequently.

### Entry 5 - 2026-11-12 - AI explanation confused me (inRange example)

- **Tool:** Claude
- **What I was working on:** Making getChoice work for any menu size instead of only 1-4.
- **What I asked:** Whether the AI was suggesting a switch case for this, and then whether it wanted me to write an inRange bool function and use it in getChoice.
- **What the AI gave me:** A review list that put "the range is locked to 1-4" right next to "main needs a switch", and then an example function called inRange to show how parameters work.
- **Was it right?** The idea (pass low and high as parameters) was right, but the explanation was misleading. It made me think I had to write a separate inRange function.
- **If wrong, how I caught it:** I asked before writing anything because it did not make sense to me. The AI said the example had muddied things and that the only change was adding two parameters to getChoice.
- **What I did with it:** Did not write inRange. Changed getChoice to getChoice(int low, int high).
- **What I learned:** How to be a bit more thoughtful on using parameters to keep my code more flexible so i dont have to keep changing things around later on.

### Entry 6 - 2026-11-12 - My idea to pass choice into getChoice

- **Tool:** Claude
- **What I was working on:** getChoice. I did not want a second choice variable inside the function when main already had one.
- **What I asked:** To check my version, where I passed choice in as a parameter: getChoice(int choice, int low, int high).
- **What the AI gave me:** It said passing by value makes a copy anyway, so there were still two variables, and that I was passing an uninitialized value (the compiler warned "'choice' is used uninitialized"). It said to use a local variable and let return carry the value back.
- **Was it right?** Yes. The -Wall warning went away after the change.
- **If wrong, how I caught it:** n/a
- **What I did with it:** Removed the parameter and declared choice inside getChoice.
- **What I learned:** Ai is always 1 step ahead....

### Entry 7 - 2026-11-12 - Loop ended after one pass (== !4)

- **Tool:** Claude
- **What I was working on:** The main do-while loop that repeats the menu until Quit.
- **What I asked:** Why my loop with while(choice == !4) was not working.
- **What the AI gave me:** !4 is evaluated first and becomes 0, so the condition was really choice == 0, which is never true. "Not equal" is the single operator !=.
- **Was it right?** Yes. Changing it to != fixed the loop.
- **If wrong, how I caught it:** n/a
- **What I did with it:** Changed the condition to choice != 4.
- **What I learned:** I had the right idea but wrong implementation. i forgot how conditions worked slightly teehee.

### Entry 8 - 2026-11-13 - Typing a letter caused an endless loop

- **Tool:** Claude
- **What I was working on:** Input validation in getChoice.
- **What I asked:** Why typing "a" at the menu made it keep printing the prompt and "Invalid input!" forever.
- **What the AI gave me:** cin goes into a fail state when it cannot read a number, leaves the bad text in the input, and skips every read after that. The fix is cin.clear() and then cin.ignore(1000, '\n'), in that order, checked with cin.fail(). It showed an example using an age variable, not my code.
- **Was it right?** Yes. Tested with 5, a, abc and 2.
- **If wrong, how I caught it:** n/a
- **What I did with it:** Wrote the check into getChoice myself. I used else if so a letter does not print both error messages, and set choice = 0 after a failed read so the loop repeats. The AI pointed out that 0 would break if a menu ever used the range 0-5.
- **What I learned:** how to use cin.fail and when to use it.
