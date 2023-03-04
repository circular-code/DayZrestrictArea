modded class PlayerBase // modded keyword for modding existing class
{
	static int leftBoundary = 0;
	static int rightBoundary = 8320;
	static int bottomBoundary = 0;
	static int topBoundary = 8400;
	
	override void OnScheduledTick(float deltaTime)
	{	
		super.OnScheduledTick(deltaTime);
		PlayerBase player = g_Game.GetPlayer();
	
		if (player)
		{	
			vector pos = player.GetPosition();
			//Print(pos[0]);
			//Print(pos[2]);
			
			// (pos[0] > 2200 && pos[0] < 2300)
			//{
			//	Print("warning: out of bounds. You will be killed if you dont return to the battlefield.");
			//	GetGame().ChatPlayer("killing player soon"); // not working on solo dayz
			//}
			
			//player.SetHealth("","",-1000);
			//Print("killed player");
			
			// pos[0] = player.x;
			// pos[1] = player.z; (height)
			// pos[2] = player.y;
			
			if (pos[0] > rightBoundary)
			{
				pos[0] = rightBoundary;
				player.SetPosition(pos);
			}
			
			if (pos[0] < leftBoundary)
			{
				pos[0] = leftBoundary;
				player.SetPosition(pos);
			}
			
			if (pos[2] > topBoundary)
			{
				pos[2] = topBoundary;
				player.SetPosition(pos);
			}
			
			if (pos[2] < bottomBoundary)
			{
				pos[2] = bottomBoundary;
				player.SetPosition(pos);
			}
		}
	}
	
	//override void OnTick(PlayerBase player, float deltaT)
	//{
		//player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
	//}
	
	//override void OnJumpStart() // overriding existing function
 	//{
  	//	super.OnJumpStart();   // call the original jump function so we don't break stuff
	//	
	//	PlayerBase player = g_Game.GetPlayer();
	//
	//	if (player)
	//	{	
	//		player.SetOrigin("2050 10 2200" );
	//	}
	//}
}