import { useState } from "react";
import reactLogo from "./assets/react.svg";
import viteLogo from "/vite.svg";
import "./App.css";

function App() {
    const [count, setCount] = useState(0);
    const [show, setShow] = useState(true);

    const increment = () => {
        setCount((prev) => (prev < 5 ? prev + 1 : prev)); //if (count < 5) setCount(count + 1);
    };

    const decrement = () => {
        setCount((prev) => (prev > -5 ? prev - 1 : prev)); //if (count > -5) setCount(count - 1);
    };

    // const reset = () => {
    //     setCount(0);// const reset = () => setCount(0);
    // };

    const handleShow = () => {
        setShow((prev) => !prev); //const toggleShow = () => setShow(!show);
    };

    return (
        <>
            <h1>Counter : {count} </h1>
            <button onClick={decrement}>-</button>
            <button onClick={() => setCount((count) => (count = 0))}>
                reset {/*onClick={() => setCount(0)} */}
            </button>
            <button onClick={increment}>+</button>

            <h1>Toggle text</h1>
            {show && "This is show text"}
            <button onClick={handleShow}>{show ? "Hide" : "Show"}</button>
        </>
    );
}

export default App;
