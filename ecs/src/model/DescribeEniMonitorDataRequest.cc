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

#include <alibabacloud/ecs/model/DescribeEniMonitorDataRequest.h>

using AlibabaCloud::Ecs::Model::DescribeEniMonitorDataRequest;

DescribeEniMonitorDataRequest::DescribeEniMonitorDataRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeEniMonitorData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEniMonitorDataRequest::~DescribeEniMonitorDataRequest()
{}

long DescribeEniMonitorDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeEniMonitorDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeEniMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeEniMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeEniMonitorDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeEniMonitorDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeEniMonitorDataRequest::getPeriod()const
{
	return period_;
}

void DescribeEniMonitorDataRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string DescribeEniMonitorDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeEniMonitorDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeEniMonitorDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeEniMonitorDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeEniMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeEniMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeEniMonitorDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeEniMonitorDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeEniMonitorDataRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeEniMonitorDataRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeEniMonitorDataRequest::getEniId()const
{
	return eniId_;
}

void DescribeEniMonitorDataRequest::setEniId(const std::string& eniId)
{
	eniId_ = eniId;
	setCoreParameter("EniId", eniId);
}

