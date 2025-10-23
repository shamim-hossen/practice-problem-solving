import { useState } from "react";
import reactLogo from "./assets/react.svg";
import viteLogo from "/vite.svg";
import "./App.css";

function App() {
    const [count, setCount] = useState(0);

    return (
        <>
            <h1>Counter {count} </h1>

            <button onClick={() => setCount((count) => count - 1)}>-</button>
            <button onClick={() => setCount((count) => (count = 0))}>
                reset
            </button>
            <button onClick={() => setCount((count) => count + 1)}>+</button>
        </>
    );
}

export default App;
