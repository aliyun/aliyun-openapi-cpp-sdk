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

#include <alibabacloud/r-kvstore/model/DescribeInstancesRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeInstancesRequest;

DescribeInstancesRequest::DescribeInstancesRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeInstances")
{}

DescribeInstancesRequest::~DescribeInstancesRequest()
{}

long DescribeInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstancesRequest::getInstanceStatus()const
{
	return instanceStatus_;
}

void DescribeInstancesRequest::setInstanceStatus(const std::string& instanceStatus)
{
	instanceStatus_ = instanceStatus;
	setCoreParameter("InstanceStatus", instanceStatus);
}

std::string DescribeInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeInstancesRequest::getSearchKey()const
{
	return searchKey_;
}

void DescribeInstancesRequest::setSearchKey(const std::string& searchKey)
{
	searchKey_ = searchKey;
	setCoreParameter("SearchKey", searchKey);
}

std::string DescribeInstancesRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeInstancesRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setCoreParameter("NetworkType", networkType);
}

std::string DescribeInstancesRequest::getEngineVersion()const
{
	return engineVersion_;
}

void DescribeInstancesRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", engineVersion);
}

long DescribeInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeInstancesRequest::getInstanceClass()const
{
	return instanceClass_;
}

void DescribeInstancesRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setCoreParameter("InstanceClass", instanceClass);
}

int DescribeInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeInstancesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeInstancesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string DescribeInstancesRequest::getExpired()const
{
	return expired_;
}

void DescribeInstancesRequest::setExpired(const std::string& expired)
{
	expired_ = expired;
	setCoreParameter("Expired", expired);
}

std::string DescribeInstancesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeInstancesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeInstancesRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DescribeInstancesRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", instanceIds);
}

std::string DescribeInstancesRequest::getArchitectureType()const
{
	return architectureType_;
}

void DescribeInstancesRequest::setArchitectureType(const std::string& architectureType)
{
	architectureType_ = architectureType;
	setCoreParameter("ArchitectureType", architectureType);
}

std::string DescribeInstancesRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeInstancesRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

int DescribeInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInstancesRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeInstancesRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string DescribeInstancesRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeInstancesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string DescribeInstancesRequest::getChargeType()const
{
	return chargeType_;
}

void DescribeInstancesRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setCoreParameter("ChargeType", chargeType);
}

std::vector<DescribeInstancesRequest::Tag> DescribeInstancesRequest::getTag()const
{
	return tag_;
}

void DescribeInstancesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

