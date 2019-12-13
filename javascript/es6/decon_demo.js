function test({a, b, c}) {
    return a + b + c;
}

console.log(test({a:1, b:2, c:3}));

var total = [[1, 2],[3, 4]].map(function ([a,b]) {
    return a + b;
});

console.log(total);
