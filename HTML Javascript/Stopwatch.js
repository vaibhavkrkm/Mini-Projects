function Stopwatch()
{
	let startTime, endTime;
	let duration = 0;
	let started = false;

	Object.defineProperty(this, 'duration', {
		get : function(){
			return duration;
		}
	});

	this.start = function(){
		if(!started)
		{		
			// starting the stopwatch
			started = true;
			startTime = new Date();
		}
		else
		{
			throw new Error("Stopwatch is already started!")
		}
	}

	this.stop = function(){
		if(started)
		{
			// stoping the stopwatch
			started = false;
			endTime = new Date();
			duration += (endTime - startTime) / 1000;
		}
		else
		{
			throw new Error("Stopwatch is not started!")
		}
	}

	this.reset = function(){
		// resets the stopwatch duration
		duration = 0;
	}
}