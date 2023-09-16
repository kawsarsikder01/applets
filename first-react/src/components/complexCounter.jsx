import { useReducer } from "react";
const intialState = {
    counter : 0,
};
const reducer=(state,action)=>{
    switch(action.type){
        case 'increment':
            return {counter:state.counter+1};
            break;
        case 'decrement':
            return {counter:state.counter-1};
            break;
        default:
            return state;
    }
}
export default function ComplexCounter(){


   const [count,dispatch] = useReducer(reducer,intialState);
    return (
        <div>
            <div> Count - {count.counter}</div>
            <button type="button" onClick={()=>dispatch({type:'increment'})}>Increment</button>
            <button type="button" onClick={()=>dispatch({type:'decrement'})}>Decrement</button>
        </div>
    );
}