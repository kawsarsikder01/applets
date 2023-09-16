
export default function Logo()
{
    return (
        <div>
            <div className="logoimage">
                <img src="../../images/react-logo.png" height={200} width={200} alt="" />
            </div>
            <div className="play">
                <button type="button">Colorize</button>
                <button type="button">Reset</button>
            </div>
        </div>
    )
}