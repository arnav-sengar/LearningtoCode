// this keyword special keyword hai, kyunki jaise ki baaki saare keywords ki value ya nature  same rehta h this ki value ya nature badal jata h is baat se ki aap use kaha youse kar rhe ho

// global scope
console.log(this);
// output: window
// window h pradhan mantri - supreme thing

// function scope
function abcd(){
    console.log(this);
}
abcd();
// output: window

// method scope(ek aisa function jo object ke andar ho..use method bolte h)
let obj = {
    name: "arnav",
    age: 5,
    sayName: function(){
        console.log(this);
        console.log(this.age);
        console.log(this.name);
    }
};
obj.sayName();
// method ke andar this ki value ..object ho jati h...toh we can treat it like an object...jaise ki...console.log(this.name);....ye output dega.....arnav


// event handler
document.querySelector("h1").addEventListener("click",function(){
    console.log(this);
    this.style.color = "red";
});
// event handler mein this hamesha wahi banda hoga jispe EventListener laga h...toh is case mein...h1 will becomes this...so we can write as...this.style.color = "red";

// this ki value
// -------------------------
// global - window
// function - window
// method with es5 fnc - object
// method with es6 arrow fnc - window
// es5 function inside es5 method - window
// arrow function inside es5 method - object
// event handler - element
// class - blank object