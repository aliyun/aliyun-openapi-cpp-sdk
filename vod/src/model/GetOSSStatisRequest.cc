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

#include <alibabacloud/vod/model/GetOSSStatisRequest.h>

using AlibabaCloud::Vod::Model::GetOSSStatisRequest;

GetOSSStatisRequest::GetOSSStatisRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetOSSStatis")
{}

GetOSSStatisRequest::~GetOSSStatisRequest()
{}

std::string GetOSSStatisRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetOSSStatisRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetOSSStatisRequest::getStartStatisTime()const
{
	return startStatisTime_;
}

void GetOSSStatisRequest::setStartStatisTime(const std::string& startStatisTime)
{
	startStatisTime_ = startStatisTime;
	setParameter("StartStatisTime", startStatisTime);
}

std::string GetOSSStatisRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetOSSStatisRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetOSSStatisRequest::getLevel()const
{
	return level_;
}

void GetOSSStatisRequest::setLevel(const std::string& level)
{
	level_ = level;
	setParameter("Level", level);
}

std::string GetOSSStatisRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetOSSStatisRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string GetOSSStatisRequest::getOwnerId()const
{
	return ownerId_;
}

void GetOSSStatisRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string GetOSSStatisRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetOSSStatisRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetOSSStatisRequest::getEndStatisTime()const
{
	return endStatisTime_;
}

void GetOSSStatisRequest::setEndStatisTime(const std::string& endStatisTime)
{
	endStatisTime_ = endStatisTime;
	setParameter("EndStatisTime", endStatisTime);
}

