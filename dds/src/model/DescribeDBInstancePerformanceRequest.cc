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

#include <alibabacloud/dds/model/DescribeDBInstancePerformanceRequest.h>

using AlibabaCloud::Dds::Model::DescribeDBInstancePerformanceRequest;

DescribeDBInstancePerformanceRequest::DescribeDBInstancePerformanceRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeDBInstancePerformance")
{}

DescribeDBInstancePerformanceRequest::~DescribeDBInstancePerformanceRequest()
{}

long DescribeDBInstancePerformanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstancePerformanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeDBInstancePerformanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstancePerformanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeDBInstancePerformanceRequest::getRoleId()const
{
	return roleId_;
}

void DescribeDBInstancePerformanceRequest::setRoleId(const std::string& roleId)
{
	roleId_ = roleId;
	setCoreParameter("RoleId", std::to_string(roleId));
}

std::string DescribeDBInstancePerformanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBInstancePerformanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeDBInstancePerformanceRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDBInstancePerformanceRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeDBInstancePerformanceRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDBInstancePerformanceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeDBInstancePerformanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstancePerformanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDBInstancePerformanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstancePerformanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeDBInstancePerformanceRequest::getReplicaSetRole()const
{
	return replicaSetRole_;
}

void DescribeDBInstancePerformanceRequest::setReplicaSetRole(const std::string& replicaSetRole)
{
	replicaSetRole_ = replicaSetRole;
	setCoreParameter("ReplicaSetRole", std::to_string(replicaSetRole));
}

std::string DescribeDBInstancePerformanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDBInstancePerformanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeDBInstancePerformanceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDBInstancePerformanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeDBInstancePerformanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstancePerformanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string DescribeDBInstancePerformanceRequest::getNodeId()const
{
	return nodeId_;
}

void DescribeDBInstancePerformanceRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", std::to_string(nodeId));
}

std::string DescribeDBInstancePerformanceRequest::getKey()const
{
	return key_;
}

void DescribeDBInstancePerformanceRequest::setKey(const std::string& key)
{
	key_ = key;
	setCoreParameter("Key", std::to_string(key));
}

