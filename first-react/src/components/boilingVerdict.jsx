export default function BoilingVerdict({celcius = 0}){
if(celcius >= 100){
    return (
        <p>The Water Would Boil.</p>
    )
}else{
    return (
        <p>The Water Would not Boil.</p>
    )
}
}