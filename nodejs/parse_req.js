const http = require('http');
const port = 3000
const url = require('url');
const hostname = '127.0.0.1'
const server = http.createServer((req,res) => {
res.writeHead(200, {'Content-Type': 'text/HTML'});
var q = url.parse(req.url, true).query;
var txt = q.year + " " + q.month;
res.end(txt);
});
server.listen(port,hostname);
