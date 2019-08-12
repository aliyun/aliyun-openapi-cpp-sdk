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

#include <alibabacloud/smartag/model/DescribeUserFlowStatisticsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeUserFlowStatisticsRequest;

DescribeUserFlowStatisticsRequest::DescribeUserFlowStatisticsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeUserFlowStatistics")
{}

DescribeUserFlowStatisticsRequest::~DescribeUserFlowStatisticsRequest()
{}

long DescribeUserFlowStatisticsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeUserFlowStatisticsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeUserFlowStatisticsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeUserFlowStatisticsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeUserFlowStatisticsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeUserFlowStatisticsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeUserFlowStatisticsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeUserFlowStatisticsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeUserFlowStatisticsRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeUserFlowStatisticsRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", std::to_string(smartAGId));
}

std::string DescribeUserFlowStatisticsRequest::getStatisticsDate()const
{
	return statisticsDate_;
}

void DescribeUserFlowStatisticsRequest::setStatisticsDate(const std::string& statisticsDate)
{
	statisticsDate_ = statisticsDate;
	setCoreParameter("StatisticsDate", std::to_string(statisticsDate));
}

std::vector<std::string> DescribeUserFlowStatisticsRequest::getUserNames()const
{
	return userNames_;
}

void DescribeUserFlowStatisticsRequest::setUserNames(const std::vector<std::string>& userNames)
{
	userNames_ = userNames;
	for(int i = 0; i!= userNames.size(); i++)
		setCoreParameter("UserNames."+ std::to_string(i), std::to_string(userNames.at(i)));
}

long DescribeUserFlowStatisticsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserFlowStatisticsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

