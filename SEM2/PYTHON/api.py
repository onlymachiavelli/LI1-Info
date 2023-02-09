import requests 
import json

async def callApi() :
    response=   await requests.get("https://api.db-ip.com/v2/free/self")
    return response

 

#print the response 
print(callApi().json())
print(callApi().status())
