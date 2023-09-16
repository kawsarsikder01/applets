import { useReducer } from "react";
const intialState = 0;
const reducer=(state,action)=>{
    switch(action){
        case 'increment':
            return state+1;
            break;
        case 'decrement':
            return state-1;
            break;
        default:
            return state;
    }
}
export default function CounterThree(){


   const [count,dispatch] = useReducer(reducer,intialState);
   const [count2,dispatch2] = useReducer(reducer,intialState);
    return (
        <div>
           <div>
           <div> Count - {count}</div>
            <button type="button" onClick={()=>dispatch('increment')}>Increment</button>
            <button type="button" onClick={()=>dispatch('decrement')}>Decrement</button>
           </div>
           <div>
           <div> Count - {count2}</div>
            <button type="button" onClick={()=>dispatch2('increment')}>Increment2</button>
            <button type="button" onClick={()=>dispatch2('decrement')}>Decrement2</button>
           </div>
        </div>
    );
}