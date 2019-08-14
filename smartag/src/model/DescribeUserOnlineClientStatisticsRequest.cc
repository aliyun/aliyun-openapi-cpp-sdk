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

#include <alibabacloud/smartag/model/DescribeUserOnlineClientStatisticsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeUserOnlineClientStatisticsRequest;

DescribeUserOnlineClientStatisticsRequest::DescribeUserOnlineClientStatisticsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeUserOnlineClientStatistics")
{}

DescribeUserOnlineClientStatisticsRequest::~DescribeUserOnlineClientStatisticsRequest()
{}

long DescribeUserOnlineClientStatisticsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeUserOnlineClientStatisticsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeUserOnlineClientStatisticsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeUserOnlineClientStatisticsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeUserOnlineClientStatisticsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeUserOnlineClientStatisticsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeUserOnlineClientStatisticsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeUserOnlineClientStatisticsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeUserOnlineClientStatisticsRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeUserOnlineClientStatisticsRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

std::vector<std::string> DescribeUserOnlineClientStatisticsRequest::getUserNames()const
{
	return userNames_;
}

void DescribeUserOnlineClientStatisticsRequest::setUserNames(const std::vector<std::string>& userNames)
{
	userNames_ = userNames;
	for(int i = 0; i!= userNames.size(); i++)
		setCoreParameter("UserNames."+ std::to_string(i), userNames.at(i));
}

long DescribeUserOnlineClientStatisticsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserOnlineClientStatisticsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

