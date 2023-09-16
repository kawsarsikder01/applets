import Counter from './Counter';
import HoverCounter from './HoverCounter';
import themeContext from '../../contexts/themeContexts';


export default function Content(){
    return (
        <div>
            <h1>this is a Content</h1>
          
          <Counter render={(count,incrementCount) =>(
                    <themeContext.Consumer>
                        {({theme,switchTheme}) =>(
                            <HoverCounter
                             count={count}
                              incrementCount={incrementCount}
                              switchTheme={switchTheme}
                               theme={theme} />
                        ) }
                    </themeContext.Consumer>
                )}/>
        </div>
    );
}