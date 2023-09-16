import React from 'react';


class Clock extends React.Component{
    constructor(props){
        super(props);
        this.state = {date : new Date(),locale : "bn-BD"};
    }
    handleClick = ()=>{
      const{locale} = this.state;
      if(locale === 'bn-BD'){
        this.setState({
          locale:'en-US'
        })
      }else{
        this.setState({
          locale:'bn-BD'
        })
      }
    }
    componentDidMount(){
        setInterval(()=>{
            this.setState({
                date : new Date(),
            });
        },1000);
    }
    render(){
      const{date,locale} = this.state;
      return(
       <div>
            <h1 className='heading'>
            <span className='text'> {date.toLocaleTimeString(locale)}</span>
          </h1>
          <button onClick={this.handleClick}>Click Here</button>
       </div>
     );
    }
  }
  export default Clock;