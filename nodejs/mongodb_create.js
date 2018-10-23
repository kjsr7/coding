var mdb = require('mongodb').MongoClient;
var url = "mongodb://localhost:27017/mydb";

mdb.connect(url, function(err,db) {
	if (err)
		throw err;
	var dbo = db.db("mydb");
	dbo.createCollection("customers", function(err,res) {
		if(err) throw err;
		console.log("Collection created");
		db.close();
	});
});
