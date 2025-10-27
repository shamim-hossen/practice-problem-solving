import { useState } from "react";
import reactLogo from "./assets/react.svg";
import viteLogo from "/vite.svg";
import "./App.css";

function App() {
    const [count, setCount] = useState(0);

    const increment = () => {
        setCount((prev) => (prev < 5 ? prev + 1 : prev));
    };

    const decrement = () => {
        setCount((prev) => (prev > -5 ? prev - 1 : prev));
    };

    // const reset = () => {
    //     setCount(0);
    // };

    return (
        <>
            <h1>Counter {count} </h1>

            <button onClick={decrement}>-</button>
            <button onClick={() => setCount((count) => (count = 0))}>
                reset
            </button>
            <button onClick={increment}>+</button>
        </>
    );
}

export default App;
