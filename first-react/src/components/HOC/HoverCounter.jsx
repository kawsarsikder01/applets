import React from 'react';


export default class HoverCounter extends React.Component{
    render(){
        const{count,incrementCount,theme,switchTheme} = this.props;
            const style = theme ==='dark'? {backgroundColor:'#000000',color:'#fff'}:null;

        return (
            <div>
                <h1 type='button' style={style} onMouseOver={incrementCount}>Hoverd {count} times</h1>
                <button type='button' onClick={switchTheme}>change theme</button>
            </div>
        );
    }
}