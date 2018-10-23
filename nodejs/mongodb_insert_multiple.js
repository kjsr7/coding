var MongoClient  = require('mongodb').MongoClient
var url = "mongodb://localhost:27017/";
MongoCient.connect(url, function(err,db) {
	if(err)
		throw err;
	var dbo = db.db("mydb");
	var 

});
