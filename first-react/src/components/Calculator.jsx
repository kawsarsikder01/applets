import React from 'react';
import TemperatureInput from './TemperatureInput';
import BoilingVerdict from './boilingVerdict';
import {convert,toCelcius,toFahrenhite} from './converter';
export default class Calculator extends React.Component{
    state ={
        temperature:'',
        scale:'c'
    }
    handleChange = (e,scale)=>{
        this.setState({
            temperature:e.target.value,
            scale
        });
    }
    render(){
        const{temperature,scale} = this.state;
        const celcius = scale === 'f'?convert(temperature,toCelcius):temperature;
        const fahrenhite = scale === 'c'?convert(temperature,toFahrenhite):temperature
        return (
            <div>
            <TemperatureInput scale={'c'} temperature={celcius} onTemperatureChange={this.handleChange}/>
            <TemperatureInput scale={'f'} temperature={fahrenhite} onTemperatureChange={this.handleChange}/>
            <BoilingVerdict celcius={parseFloat(temperature)} />
            </div>
        );
    }
}