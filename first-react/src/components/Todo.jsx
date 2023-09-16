import { useState } from "react";

function Todo(){
    const [todo,setTodo] = useState('');
    const [warning,setWarning] = useState(null);
   const handelInput = (e)=>{
        const inputValue = e.target.value;
        const updateWarning = inputValue.
        includes('.js')
        ?'You need javascript skill to complete the task.Do you have it?':null;
        setTodo(inputValue);
        setWarning(updateWarning);
    }
return (
    <div>
        <p>{todo}</p>
        <p>
            <textarea name="todo" value={todo} onChange={handelInput}></textarea>
        </p>
        <hr />
        <h2>{warning || 'Good Choice'}</h2>
    </div>
)
}
export default Todo;