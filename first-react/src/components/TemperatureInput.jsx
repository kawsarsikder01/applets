import React from 'react';

const temperatureScale = {
    c:"Celcius",
    f:"Ferhen"
}
export default class TemperatureInput extends React.Component{
    
    render(){
        // const{temperature} = this.state;
        const{scale,temperature,onTemperatureChange} = this.props;
        return (
            <div>
            <fieldset>
                <legend>Enter Temperature in {temperatureScale[scale]} : </legend>
                <input type="text" value={temperature} onChange={(e)=>onTemperatureChange(e,scale)} />
            </fieldset>
            </div>
        );
    }
}1