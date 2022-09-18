function findGreatestCommonDivisor(a,b) {
    if(b == 0) 
        return a;
    else 
        return findGreatestCommonDivisor(b, a % b);
}

function findLeastCommonMultiple(a, b) {
    return (a / findGreatestCommonDivisor(a, b)) * b;
}

console.log(findLeastCommonMultiple(4, 5));
console.log(findLeastCommonMultiple(8, 12));
console.log(findLeastCommonMultiple(30, 65));
console.log(findLeastCommonMultiple(40, 5));