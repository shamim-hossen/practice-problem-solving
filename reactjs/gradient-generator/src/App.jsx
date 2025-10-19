import React, { useState } from "react";

const App = () => {
    const [num, setNum] = useState(12);
    const [type, setType] = useState("radial");
    return (
        <div className="min-h-screen bg-white-200 py-12">
            <div className="w-9/12 mx-auto">
                <div className="flex justify-between">
                    <h1 className="text-3xl font-bold">
                        🎨Gradient generator - {num} {type}
                    </h1>
                    <div className="flex gap-4">
                        <input
                            value={num}
                            className="border border-slate-300 rounded-lg w-[100px] p-2"
                            placeholder="12"
                            onChange={(e) => setNum(Number(e.target.value))}
                        />
                        <select
                            value={type}
                            name=""
                            id=""
                            className="border border-slate-300 rounded-lg w-[100px] p-2"
                            onChange={(e) => setType(e.target.value)}
                        >
                            <option value="linear">Linear</option>
                            <option value="radial">Radial</option>
                        </select>
                    </div>
                </div>
            </div>
        </div>
    );
};

export default App;
