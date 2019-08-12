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

#include <alibabacloud/dds/model/DescribeParameterModificationHistoryRequest.h>

using AlibabaCloud::Dds::Model::DescribeParameterModificationHistoryRequest;

DescribeParameterModificationHistoryRequest::DescribeParameterModificationHistoryRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeParameterModificationHistory")
{}

DescribeParameterModificationHistoryRequest::~DescribeParameterModificationHistoryRequest()
{}

long DescribeParameterModificationHistoryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeParameterModificationHistoryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeParameterModificationHistoryRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeParameterModificationHistoryRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeParameterModificationHistoryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeParameterModificationHistoryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeParameterModificationHistoryRequest::getRegionId()const
{
	return regionId_;
}

void DescribeParameterModificationHistoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeParameterModificationHistoryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeParameterModificationHistoryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeParameterModificationHistoryRequest::getEndTime()const
{
	return endTime_;
}

void DescribeParameterModificationHistoryRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeParameterModificationHistoryRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeParameterModificationHistoryRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeParameterModificationHistoryRequest::getStartTime()const
{
	return startTime_;
}

void DescribeParameterModificationHistoryRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeParameterModificationHistoryRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeParameterModificationHistoryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeParameterModificationHistoryRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeParameterModificationHistoryRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

std::string DescribeParameterModificationHistoryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeParameterModificationHistoryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

