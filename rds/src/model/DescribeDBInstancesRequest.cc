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

#include <alibabacloud/rds/model/DescribeDBInstancesRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstancesRequest;

DescribeDBInstancesRequest::DescribeDBInstancesRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstances")
{}

DescribeDBInstancesRequest::~DescribeDBInstancesRequest()
{}

std::string DescribeDBInstancesRequest::getConnectionMode()const
{
	return connectionMode_;
}

void DescribeDBInstancesRequest::setConnectionMode(const std::string& connectionMode)
{
	connectionMode_ = connectionMode;
	setCoreParameter("ConnectionMode", std::to_string(connectionMode));
}

std::string DescribeDBInstancesRequest::getTag4value()const
{
	return tag4value_;
}

void DescribeDBInstancesRequest::setTag4value(const std::string& tag4value)
{
	tag4value_ = tag4value;
	setCoreParameter("Tag4value", std::to_string(tag4value));
}

long DescribeDBInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeDBInstancesRequest::getTag2key()const
{
	return tag2key_;
}

void DescribeDBInstancesRequest::setTag2key(const std::string& tag2key)
{
	tag2key_ = tag2key;
	setCoreParameter("Tag2key", std::to_string(tag2key));
}

std::string DescribeDBInstancesRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeDBInstancesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string DescribeDBInstancesRequest::getSearchKey()const
{
	return searchKey_;
}

void DescribeDBInstancesRequest::setSearchKey(const std::string& searchKey)
{
	searchKey_ = searchKey;
	setCoreParameter("SearchKey", std::to_string(searchKey));
}

std::string DescribeDBInstancesRequest::getTag3key()const
{
	return tag3key_;
}

void DescribeDBInstancesRequest::setTag3key(const std::string& tag3key)
{
	tag3key_ = tag3key;
	setCoreParameter("Tag3key", std::to_string(tag3key));
}

std::string DescribeDBInstancesRequest::getEngineVersion()const
{
	return engineVersion_;
}

void DescribeDBInstancesRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", std::to_string(engineVersion));
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

std::string DescribeDBInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeDBInstancesRequest::getTag1value()const
{
	return tag1value_;
}

void DescribeDBInstancesRequest::setTag1value(const std::string& tag1value)
{
	tag1value_ = tag1value;
	setCoreParameter("Tag1value", std::to_string(tag1value));
}

std::string DescribeDBInstancesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDBInstancesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string DescribeDBInstancesRequest::getExpired()const
{
	return expired_;
}

void DescribeDBInstancesRequest::setExpired(const std::string& expired)
{
	expired_ = expired;
	setCoreParameter("Expired", std::to_string(expired));
}

std::string DescribeDBInstancesRequest::getEngine()const
{
	return engine_;
}

void DescribeDBInstancesRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", std::to_string(engine));
}

std::string DescribeDBInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDBInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
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

std::string DescribeDBInstancesRequest::getDBInstanceStatus()const
{
	return dBInstanceStatus_;
}

void DescribeDBInstancesRequest::setDBInstanceStatus(const std::string& dBInstanceStatus)
{
	dBInstanceStatus_ = dBInstanceStatus;
	setCoreParameter("DBInstanceStatus", std::to_string(dBInstanceStatus));
}

std::string DescribeDBInstancesRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstancesRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string DescribeDBInstancesRequest::getTag3value()const
{
	return tag3value_;
}

void DescribeDBInstancesRequest::setTag3value(const std::string& tag3value)
{
	tag3value_ = tag3value;
	setCoreParameter("Tag3value", std::to_string(tag3value));
}

std::string DescribeDBInstancesRequest::getProxyId()const
{
	return proxyId_;
}

void DescribeDBInstancesRequest::setProxyId(const std::string& proxyId)
{
	proxyId_ = proxyId;
	setCoreParameter("ProxyId", std::to_string(proxyId));
}

std::string DescribeDBInstancesRequest::getTag5key()const
{
	return tag5key_;
}

void DescribeDBInstancesRequest::setTag5key(const std::string& tag5key)
{
	tag5key_ = tag5key;
	setCoreParameter("Tag5key", std::to_string(tag5key));
}

std::string DescribeDBInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeDBInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
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

std::string DescribeDBInstancesRequest::getTag5value()const
{
	return tag5value_;
}

void DescribeDBInstancesRequest::setTag5value(const std::string& tag5value)
{
	tag5value_ = tag5value;
	setCoreParameter("Tag5value", std::to_string(tag5value));
}

std::string DescribeDBInstancesRequest::getDBInstanceType()const
{
	return dBInstanceType_;
}

void DescribeDBInstancesRequest::setDBInstanceType(const std::string& dBInstanceType)
{
	dBInstanceType_ = dBInstanceType;
	setCoreParameter("DBInstanceType", std::to_string(dBInstanceType));
}

std::string DescribeDBInstancesRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void DescribeDBInstancesRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", std::to_string(dBInstanceClass));
}

std::string DescribeDBInstancesRequest::getTags()const
{
	return tags_;
}

void DescribeDBInstancesRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", std::to_string(tags));
}

std::string DescribeDBInstancesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeDBInstancesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", std::to_string(vSwitchId));
}

std::string DescribeDBInstancesRequest::getTag1key()const
{
	return tag1key_;
}

void DescribeDBInstancesRequest::setTag1key(const std::string& tag1key)
{
	tag1key_ = tag1key;
	setCoreParameter("Tag1key", std::to_string(tag1key));
}

std::string DescribeDBInstancesRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeDBInstancesRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

std::string DescribeDBInstancesRequest::getTag2value()const
{
	return tag2value_;
}

void DescribeDBInstancesRequest::setTag2value(const std::string& tag2value)
{
	tag2value_ = tag2value;
	setCoreParameter("Tag2value", std::to_string(tag2value));
}

std::string DescribeDBInstancesRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeDBInstancesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

std::string DescribeDBInstancesRequest::getTag4key()const
{
	return tag4key_;
}

void DescribeDBInstancesRequest::setTag4key(const std::string& tag4key)
{
	tag4key_ = tag4key;
	setCoreParameter("Tag4key", std::to_string(tag4key));
}

std::string DescribeDBInstancesRequest::getPayType()const
{
	return payType_;
}

void DescribeDBInstancesRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", std::to_string(payType));
}

std::string DescribeDBInstancesRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void DescribeDBInstancesRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", std::to_string(instanceNetworkType));
}

