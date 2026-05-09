// JSX IN REACT (SIMPLE HINGLISH NOTES)

// 1. JSX KYA HAI?

// * JavaScript + HTML ka mix
// * React me UI likhne ka easy tarika

// Example:
// const el = <h1>Hello</h1>;

// ---

// 2. JSX KYU USE KARTE HAIN?

// * Code readable hota hai
// * HTML jaisa feel aata hai
// * UI likhna easy

// ---

// 3. JSX ACTUALLY KYA HOTA HAI?

// * Browser JSX nahi samajhta
// * Ye convert hota hai JS me (Babel)

// Example:

// <h1>Hello</h1>
// ⬇
// React.createElement("h1", null, "Hello");

// ---

// 4. RULES OF JSX

// 👉 (1) Ek hi parent element
// ❌ return <h1></h1><p></p>;
// ✔ return (
// <> <h1></h1> <p></p>
// </>
// );

// 👉 (2) class nahi, className
// ❌ <div class="box"></div>
// ✔ <div className="box"></div>

// 👉 (3) JS use karna ho → {}
// ✔ <h1>{name}</h1>

// 👉 (4) Tags close karna zaruri
// ✔ <img />
// ✔ <br />

// ---

// 5. JAVASCRIPT IN JSX

// const name = "Arnav";

// <h1>Hello {name}</h1>
// <h2>{2 + 2}</h2>

// ---

// 6. EXPRESSIONS ALLOWED
//    ✔ variables
//    ✔ functions
//    ✔ calculations

// ❌ if/for directly nahi (use ternary/map)

// Example:
// {name ? <h1>Hi</h1> : <h1>Bye</h1>}

// ---

// 7. SHORT TRICK
//    JSX = HTML jaisa code + JS power {}

// ---

// ## END
        