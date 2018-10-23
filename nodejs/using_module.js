const http = require('http');
const dt = require('./module');
const hostname = '127.0.0.1';
const port = 3000;
const server = http.createServer(function (req,res) {
	res.writeHead(200, {'Content-Tyep': 'text/html'});
	res.write("the date and time are currently: "+ dt.myDateTime());
	res.end();
});
server.listen(port, hostname);


