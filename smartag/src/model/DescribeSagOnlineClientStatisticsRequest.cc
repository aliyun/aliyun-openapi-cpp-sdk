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

#include <alibabacloud/smartag/model/DescribeSagOnlineClientStatisticsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagOnlineClientStatisticsRequest;

DescribeSagOnlineClientStatisticsRequest::DescribeSagOnlineClientStatisticsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeSagOnlineClientStatistics")
{}

DescribeSagOnlineClientStatisticsRequest::~DescribeSagOnlineClientStatisticsRequest()
{}

long DescribeSagOnlineClientStatisticsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSagOnlineClientStatisticsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeSagOnlineClientStatisticsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSagOnlineClientStatisticsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeSagOnlineClientStatisticsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSagOnlineClientStatisticsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeSagOnlineClientStatisticsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSagOnlineClientStatisticsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::vector<std::string> DescribeSagOnlineClientStatisticsRequest::getSmartAGIds()const
{
	return smartAGIds_;
}

void DescribeSagOnlineClientStatisticsRequest::setSmartAGIds(const std::vector<std::string>& smartAGIds)
{
	smartAGIds_ = smartAGIds;
	for(int i = 0; i!= smartAGIds.size(); i++)
		setCoreParameter("SmartAGIds."+ std::to_string(i), std::to_string(smartAGIds.at(i)));
}

long DescribeSagOnlineClientStatisticsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSagOnlineClientStatisticsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

