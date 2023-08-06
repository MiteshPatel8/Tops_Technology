var arr = [2,3,5,3,6,7];
function cal(a){
   set = new Set(a);
   let uniqarr = [...set];
   console.log(uniqarr);
   let obj = {};
   var counts = uniqarr.map(v => obj[v] = arr.filter(m => m === v).length);
   counts.forEach( count => obj[uniqarr[0]] = count);
   return obj;
}

console.log(cal(arr))


