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

#include <alibabacloud/vod/model/GetCDNStatisSumRequest.h>

using AlibabaCloud::Vod::Model::GetCDNStatisSumRequest;

GetCDNStatisSumRequest::GetCDNStatisSumRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetCDNStatisSum")
{}

GetCDNStatisSumRequest::~GetCDNStatisSumRequest()
{}

std::string GetCDNStatisSumRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetCDNStatisSumRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetCDNStatisSumRequest::getStartStatisTime()const
{
	return startStatisTime_;
}

void GetCDNStatisSumRequest::setStartStatisTime(const std::string& startStatisTime)
{
	startStatisTime_ = startStatisTime;
	setParameter("StartStatisTime", startStatisTime);
}

std::string GetCDNStatisSumRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetCDNStatisSumRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetCDNStatisSumRequest::getLevel()const
{
	return level_;
}

void GetCDNStatisSumRequest::setLevel(const std::string& level)
{
	level_ = level;
	setParameter("Level", level);
}

std::string GetCDNStatisSumRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetCDNStatisSumRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string GetCDNStatisSumRequest::getOwnerId()const
{
	return ownerId_;
}

void GetCDNStatisSumRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string GetCDNStatisSumRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetCDNStatisSumRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetCDNStatisSumRequest::getEndStatisTime()const
{
	return endStatisTime_;
}

void GetCDNStatisSumRequest::setEndStatisTime(const std::string& endStatisTime)
{
	endStatisTime_ = endStatisTime;
	setParameter("EndStatisTime", endStatisTime);
}

