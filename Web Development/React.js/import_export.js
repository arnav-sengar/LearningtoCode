// IMPORT & EXPORT IN REACT (SIMPLE HINGLISH NOTES)

// ---

// 1. BASIC IDEA

// ---

// Ek file se dusri file mein cheez bhejna = export
// Dusri file mein use karna = import

// ---

// 2. DEFAULT EXPORT

// ---

// Jab file mein sirf 1 main cheez ho

// Example:
// function Header() {
// return <h1>Hello</h1>;
// }
// export default Header;

// Import:
// import Header from "./Header";

// Points:

// * {} nahi lagta
// * naam change kar sakte ho

// ---

// 3. NAMED EXPORT

// ---

// Jab multiple cheeze export karni ho

// Example:
// export const add = (a,b) => a+b;
// export const sub = (a,b) => a-b;

// Import:
// import { add, sub } from "./utils";

// Points:

// * {} zaruri hai
// * naam same hona chahiye

// ---

// 4. DONO SAATH ME

// ---

// Example:
// export const name = "Arnav";

// function App() {
// return <h1>Hello</h1>;
// }
// export default App;

// Import:
// import App, { name } from "./file";

// ---

// 5. COMMON MISTAKES

// ---

// Wrong:
// import add from "./utils";

// Correct:
// import { add } from "./utils";

// Wrong:
// import { Header } from "./Header";

// Correct:
// import Header from "./Header";

// ---

// 6. SHORT TRICK

// ---

// Default → ek cheez → no {}
// Named → multiple → {}

// ---

// ## END
