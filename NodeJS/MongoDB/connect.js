var MongoClient = require('mongodb').MongoClient;

MongoClient.connect('mongodb://abz:us9sa0s9da@dharma.mongohq.com:10009/Node', function(err, db) {
  	if(err) throw err;
  	console.log("Connected to Database");

  	//simple json record
  	var document = { name: "Big Bang Theory"};
  
		db.collection('Shows').insert(document, function(err, records) {
			if (err) throw err;
			console.log("Record added as "+records[0]._id);
	});
});