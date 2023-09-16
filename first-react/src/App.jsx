import LayoutComponentOne from "./components/LayoutComponent";
import LayoutComponentTwo from "./components/LayoutComponentTwo";
import Logo from "./components/Logo";
import './assets/css/global.css';
import { BrowserRouter as Router ,Route } from "react-router-dom";
import Home from "./components/Home";
import About from "./components/About";
import Service from "./components/Service";



export default function App(){
    
       return (
        
          <Router>
            <Route exact path="/" Component={Home}/>
            <Route exact path="/about" Component={About}/>
            <Route exact path="/service" Component={Service}/>
          </Router>
   
       );
  }

































// import { useReducer } from "react";
//  export const counterContext = React.createContext();
// const intialState = 0;
// const reducer=(state,action)=>{
//     switch(action){
//         case 'increment':
//             return state+1;
//             break;
//         case 'decrement':
//             return state-1;
//             break;
//         default:
//             return state;
//     }
// }
//  export default function App(){
//   const[count,dispatch] = useReducer(reducer,intialState);
//     return (
//       <div className="App">
//          <div>Count : {count}</div>
//          <counterContext.Provider value={{countDispatch: dispatch}}>
//               <ComponentA/>
//          </counterContext.Provider>
//       </div>
//     )
// }



// state = {
//   theme : 'dark'
//  }
//  switchTheme = ()=>{
//   this.setState(({theme})=>{
//     if(theme === 'dark'){
//       return {
//         theme : 'light'
//       }
//     }else{
//       return {
//         theme :'dark'
//       }
//     }
//   })
//  }
  
//  render(){
//   const {theme}=this.state;
//   return  <div className='app'>
//   <Counter render={(count,incrementCount)=>(<ClickCounter count={count} incrementCount={incrementCount} />)}  /> 
//   <themeContext.Provider value={{theme:theme,switchTheme:this.switchTheme}} ><Section /></themeContext.Provider>
//   </div>;
//  }