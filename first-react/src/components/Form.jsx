import React from 'react';


export default class Form extends React.Component {
    state = {
        title:'JavaScript'
    }
    handleChange = (e)=>{
        console.log(e.target.value)
       this.setState({
        title:e.target.value,
       })
    }
    render(){
        const{title} = this.state;
        return (
            <div>
                <form>
                <input type="text" placeholder='Enter Title' value={title} onChange={this.handleChange} />
                    <textarea name="" ></textarea>
                </form>
            </div>
        )
    }
}