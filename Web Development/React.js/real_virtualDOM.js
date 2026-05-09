// REAL DOM vs VIRTUAL DOM

// 1. REAL DOM

// * Browser ka actual DOM (HTML tree)
// * Direct update hota hai
// * Slow hota hai (har change pe re-render)

// Example:
// document.getElementById("root").innerText = "Hello";

// Problem:

// * Har change → pura UI re-render ho sakta hai
// * Performance down

// ---

// 2. VIRTUAL DOM (React)

// * Real DOM ka lightweight copy (JS object)
// * Direct browser pe kaam nahi karta
// * React isko use karta hai

// ---

// 3. WORKING (IMPORTANT)
//    Step 1: Virtual DOM create hota hai
//    Step 2: Change aata hai (state/props)
//    Step 3: Naya Virtual DOM banta hai
//    Step 4: Diffing (old vs new compare)
//    Step 5: Sirf changed part Real DOM me update

// ---

// 4. DIFFING

// * React compare karta hai old vs new Virtual DOM
// * Efficient update karta hai
// * Is process ko reconciliation bhi bolte hain

// ---

// 5. WHY VIRTUAL DOM FAST HAI?

// * Direct DOM manipulation avoid karta hai
// * Sirf required changes karta hai
// * Batch updates karta hai

// ---

// 6. KEY DIFFERENCE

// REAL DOM:

// * Slow
// * Direct update
// * Full re-render possible

// VIRTUAL DOM:

// * Fast
// * Smart update
// * Partial re-render

// ---

// 7. SHORT TRICK
//    Real DOM → direct maar, slow
//    Virtual DOM → compare karke smart update
