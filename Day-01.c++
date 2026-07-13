//     Lesson 1: What is C++? And Your First Program


/*
What is C++?
C++ is a programming language—essentially a way for us to give instructions to a computer about what it needs to do. Imagine explaining a cooking recipe to a friend: you would give step-by-step instructions like, "First, chop the onions; then, heat the oil..." Similarly, we provide step-by-step instructions to the computer, and these instructions are written using the C++ language.


C++ is derived from the C language (hence the name C++—implying it is the next version of C). It is a compiled language, meaning the code we write is converted directly into the computer's native language (machine language), which allows it to run very fast.
Real-world applications of C++ include:


Computer games (such as high-performance video games)
Operating systems (a significant portion of Windows is built using C++)
Browsers (the core of Chrome is written in C++)
Banking software and trading systems (where speed is crucial)
*/

/*
Structure of a C++ Program
Every C++ program has a basic structure. Let's write the first program — "Hello World" (this is every programmer's first program; it is something of a tradition).
*/
#include <iostream>
using namespace std;

int main() {
    
    cout << "Hello Word" << endl;

    return 0;
}

/*
Let's understand the meaning of each line:
#include <iostream>


This includes a "header file." Think of `iostream` as a toolbox containing `cout` (a tool to display output) and `cin` (a tool to take input). Without including this, we cannot print anything on the screen.
using namespace std;


In C++, many tools are kept in a group (namespace) named "std." This line tells the compiler, "I will use tools from the `std` group directly; there is no need to write `std::` repeatedly." (We will explain this in detail later.)
int main()

This is the starting point of every C++ program. Whenever you run the program, the computer goes straight into `main()`, and that is where the execution begins. `int` means this function will return an integer (a number).
{ and }


These curly braces define the "body" of the `main()` function—meaning, whatever tasks need to be performed are written between them. Think of it as a box containing your instructions.
cout << "Hello, World!" << endl;


`cout` stands for "console output"—it is used to print something on the screen.
`<<` is an "insertion operator" that indicates what is to be printed.
"Hello, World!" is a string (text) enclosed in double quotes.
`endl` stands for "end line"—it moves the cursor to the next line (like pressing the Enter key).
It is mandatory to place a `;` (semicolon) at the end of the line—this indicates that an instruction has ended there.


return 0;
This indicates that the program finished successfully (without any errors). `0` means "everything went well."

Output:
Hello, World!

About Compilers/Setup
To write code, you need a compiler that converts C++ code into the computer's language. You can use these options:


Online: replit.com or onlinegdb.com (no installation required; it runs directly in the browser)
Local: Code::Blocks, VS Code (with MinGW), or Dev-C++


Since you are a beginner, I suggest using an online compiler initially so you don't have to worry about the setup and can focus solely on coding.
*/

// Practice Questions (Try it yourself first)

/* Write a program similar to "Hello, World!" that prints your name. For example: "Mera naam Rahul hai".
#include <iostream>
using namespace std;

int main() {

     cout << "My Name Is Rohit Kumar" << endl;

     return 0;
}

Write a program that prints two messages on separate lines (Hint: you will need to use `endl` twice).
#include <iostream>
using namespace std;

int main() {

    cout << "Hello" << endl;
    cout << "Word" << endl;

    return 0;
}




 Tell me: what would happen if we removed the `using namespace std;` line? (This is a theoretical question; there is no need to write code.)
You pasted both programs into a single code block—meaning both contain `#include`, `using namespace std;`, and `int main()`. If this were in a single file (as you wrote it), it wouldn't compile because a file cannot have two `main()` functions. You would get an error like this:
`error: redefinition of 'int main()'`
Remember: A single `.cpp` file can have only one `main()` function. If you need to write two separate programs, write them in separate files or delete/comment out the second one before running the code.
Checking the answer to Question 3:
You wrote: "an error will occur" — ✅ That is correct!
However, let's explain *why* the error occurs (in interviews, they ask "why," not just "what"):
`cout` and `endl` are defined within the `std` namespace—their actual names are `std::cout` and `std::endl`. When we write `using namespace std;`, the compiler understands that "if `cout` is written, treat it as `std::cout`." If this line is removed, the compiler won't recognize `cout` and will throw an error:
`error: 'cout' was not declared in this scope`
Fix: You can choose not to write `using namespace std;` and instead write `std::cout` and `std::endl` everywhere:

#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

Important Questions for Exams/Interviews

What is the difference between C++ and C?
What is the role of the `main()` function in a C++ program?
What is the use of `cout` and `cin`?
What is a header file, and why is `iostream` used?
What is the importance of the semicolon (;) in C++?

Common Mistakes (Made by Beginners)

Forgetting the semicolon (;) — this is the most common mistake.
Misspelling `cout` or using `>>` instead of `<<`.
Mismatched curly braces { } (every opening brace requires a corresponding closing brace).
Not enclosing text in quotes — e.g., `cout << Hello;` (double quotes are missing here).


Quick Test (say your answer)

What error would occur in the code below, and why?
#include <iostream>
using namespace std;

int main() {
cout << "Hi there"
return 0;
}
ans => error: expected ';' before 'return'
What happened: A semicolon is missing after `cout << "Hi there"`. The compiler does not consider a statement "complete" until it encounters a `;`. When the compiler doesn't find the `;`, it tries to interpret the next line (`return 0;`) as part of the previous line; that is why the error message says:
error: expected ';' before 'return'
Lesson: Whenever you see "expected ';'" in an error message, understand that a semicolon is missing from the previous line. This is the most common error for beginners, so remembering this error message is very useful.

True/False: We can use cout twice in a single .ccp file.
and => True
We can use `cout` as many times as we want in a single `.cpp` file—there is no limit. As you saw earlier:
cppcout << "hello\n";
cout << "word";
Both these `cout` statements were executing within the same `main()` function, and this is perfectly valid. The only restriction applies to the `main()` function itself—it can be defined only once in a file.
*/



// Note
/*
A small difference between `\n` and `endl`:

`\n` is an "escape character" written inside the string itself; it is slightly faster.
`endl` is a separate keyword that not only ends the line but also "flushes" the output (sends it to the screen immediately).
At a beginner level, there is no practical difference between the two; you can use either.

An important mistake to note:
You cannot paste both programs into the same code block—meaning both contain `#include`, `using namespace std;`, and `int main()`. If all this were in a single file (as you wrote it), it wouldn't compile because a file cannot have two `main()` functions. You would get an error like this:
error: redefinition of 'int main()'
Remember: A single `.cpp` file can have only one `main()` function. If you need to write two separate programs, write them in separate files or delete/comment out the other one before running the code.
*/



