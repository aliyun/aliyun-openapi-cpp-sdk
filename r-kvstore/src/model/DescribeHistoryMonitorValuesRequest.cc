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

#include <alibabacloud/r-kvstore/model/DescribeHistoryMonitorValuesRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeHistoryMonitorValuesRequest;

DescribeHistoryMonitorValuesRequest::DescribeHistoryMonitorValuesRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeHistoryMonitorValues")
{}

DescribeHistoryMonitorValuesRequest::~DescribeHistoryMonitorValuesRequest()
{}

long DescribeHistoryMonitorValuesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeHistoryMonitorValuesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeHistoryMonitorValuesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeHistoryMonitorValuesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeHistoryMonitorValuesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeHistoryMonitorValuesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeHistoryMonitorValuesRequest::getEndTime()const
{
	return endTime_;
}

void DescribeHistoryMonitorValuesRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeHistoryMonitorValuesRequest::getStartTime()const
{
	return startTime_;
}

void DescribeHistoryMonitorValuesRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeHistoryMonitorValuesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeHistoryMonitorValuesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeHistoryMonitorValuesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeHistoryMonitorValuesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeHistoryMonitorValuesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeHistoryMonitorValuesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeHistoryMonitorValuesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeHistoryMonitorValuesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeHistoryMonitorValuesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeHistoryMonitorValuesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeHistoryMonitorValuesRequest::getIntervalForHistory()const
{
	return intervalForHistory_;
}

void DescribeHistoryMonitorValuesRequest::setIntervalForHistory(const std::string& intervalForHistory)
{
	intervalForHistory_ = intervalForHistory;
	setCoreParameter("IntervalForHistory", std::to_string(intervalForHistory));
}

std::string DescribeHistoryMonitorValuesRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeHistoryMonitorValuesRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", std::to_string(nodeId));
}

std::string DescribeHistoryMonitorValuesRequest::getMonitorKeys()const
{
	return monitorKeys_;
}

void DescribeHistoryMonitorValuesRequest::setMonitorKeys(const std::string& monitorKeys)
{
	monitorKeys_ = monitorKeys;
	setCoreParameter("MonitorKeys", std::to_string(monitorKeys));
}

