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

#include <alibabacloud/dds/model/DescribeDBInstancesRequest.h>

using AlibabaCloud::Dds::Model::DescribeDBInstancesRequest;

DescribeDBInstancesRequest::DescribeDBInstancesRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeDBInstances")
{}

DescribeDBInstancesRequest::~DescribeDBInstancesRequest()
{}

long DescribeDBInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeDBInstancesRequest::getEngineVersion()const
{
	return engineVersion_;
}

void DescribeDBInstancesRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", engineVersion);
}

std::string DescribeDBInstancesRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeDBInstancesRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setCoreParameter("NetworkType", networkType);
}

int DescribeDBInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDBInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeDBInstancesRequest::getReplicationFactor()const
{
	return replicationFactor_;
}

void DescribeDBInstancesRequest::setReplicationFactor(const std::string& replicationFactor)
{
	replicationFactor_ = replicationFactor;
	setCoreParameter("ReplicationFactor", replicationFactor);
}

std::string DescribeDBInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBInstancesRequest::getExpired()const
{
	return expired_;
}

void DescribeDBInstancesRequest::setExpired(const std::string& expired)
{
	expired_ = expired;
	setCoreParameter("Expired", expired);
}

std::string DescribeDBInstancesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDBInstancesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDBInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDBInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeDBInstancesRequest::getEngine()const
{
	return engine_;
}

void DescribeDBInstancesRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", engine);
}

int DescribeDBInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDBInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeDBInstancesRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstancesRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeDBInstancesRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void DescribeDBInstancesRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setCoreParameter("DBInstanceDescription", dBInstanceDescription);
}

std::string DescribeDBInstancesRequest::getDBInstanceStatus()const
{
	return dBInstanceStatus_;
}

void DescribeDBInstancesRequest::setDBInstanceStatus(const std::string& dBInstanceStatus)
{
	dBInstanceStatus_ = dBInstanceStatus;
	setCoreParameter("DBInstanceStatus", dBInstanceStatus);
}

std::vector<DescribeDBInstancesRequest::Tag> DescribeDBInstancesRequest::getTag()const
{
	return tag_;
}

void DescribeDBInstancesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

std::string DescribeDBInstancesRequest::getExpireTime()const
{
	return expireTime_;
}

void DescribeDBInstancesRequest::setExpireTime(const std::string& expireTime)
{
	expireTime_ = expireTime;
	setCoreParameter("ExpireTime", expireTime);
}

std::string DescribeDBInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeDBInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDBInstancesRequest::getDBInstanceType()const
{
	return dBInstanceType_;
}

void DescribeDBInstancesRequest::setDBInstanceType(const std::string& dBInstanceType)
{
	dBInstanceType_ = dBInstanceType;
	setCoreParameter("DBInstanceType", dBInstanceType);
}

std::string DescribeDBInstancesRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void DescribeDBInstancesRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", dBInstanceClass);
}

std::string DescribeDBInstancesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeDBInstancesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string DescribeDBInstancesRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeDBInstancesRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string DescribeDBInstancesRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeDBInstancesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string DescribeDBInstancesRequest::getChargeType()const
{
	return chargeType_;
}

void DescribeDBInstancesRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setCoreParameter("ChargeType", chargeType);
}

