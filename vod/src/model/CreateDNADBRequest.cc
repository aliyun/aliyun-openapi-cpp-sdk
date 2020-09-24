/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/vod/model/CreateDNADBRequest.h>

using AlibabaCloud::Vod::Model::CreateDNADBRequest;

CreateDNADBRequest::CreateDNADBRequest() :
	RpcServiceRequest("vod", "2017-03-21", "CreateDNADB")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDNADBRequest::~CreateDNADBRequest()
{}

long CreateDNADBRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDNADBRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDNADBRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDNADBRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateDNADBRequest::getDBRegion()const
{
	return dBRegion_;
}

void CreateDNADBRequest::setDBRegion(const std::string& dBRegion)
{
	dBRegion_ = dBRegion;
	setParameter("DBRegion", dBRegion);
}

std::string CreateDNADBRequest::getDBDescription()const
{
	return dBDescription_;
}

void CreateDNADBRequest::setDBDescription(const std::string& dBDescription)
{
	dBDescription_ = dBDescription;
	setParameter("DBDescription", dBDescription);
}

std::string CreateDNADBRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDNADBRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CreateDNADBRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDNADBRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDNADBRequest::getDBName()const
{
	return dBName_;
}

void CreateDNADBRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

std::string CreateDNADBRequest::getDBType()const
{
	return dBType_;
}

void CreateDNADBRequest::setDBType(const std::string& dBType)
{
	dBType_ = dBType;
	setParameter("DBType", dBType);
}

