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

#include <alibabacloud/slb/model/DescribeLoadBalancersRequest.h>

using AlibabaCloud::Slb::Model::DescribeLoadBalancersRequest;

DescribeLoadBalancersRequest::DescribeLoadBalancersRequest() :
	RpcServiceRequest("slb", "2014-05-15", "DescribeLoadBalancers")
{}

DescribeLoadBalancersRequest::~DescribeLoadBalancersRequest()
{}

std::string DescribeLoadBalancersRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeLoadBalancersRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", std::to_string(access_key_id));
}

long DescribeLoadBalancersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeLoadBalancersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeLoadBalancersRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeLoadBalancersRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setCoreParameter("NetworkType", std::to_string(networkType));
}

std::string DescribeLoadBalancersRequest::getAddressIPVersion()const
{
	return addressIPVersion_;
}

void DescribeLoadBalancersRequest::setAddressIPVersion(const std::string& addressIPVersion)
{
	addressIPVersion_ = addressIPVersion;
	setCoreParameter("AddressIPVersion", std::to_string(addressIPVersion));
}

std::string DescribeLoadBalancersRequest::getMasterZoneId()const
{
	return masterZoneId_;
}

void DescribeLoadBalancersRequest::setMasterZoneId(const std::string& masterZoneId)
{
	masterZoneId_ = masterZoneId;
	setCoreParameter("MasterZoneId", std::to_string(masterZoneId));
}

int DescribeLoadBalancersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLoadBalancersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeLoadBalancersRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeLoadBalancersRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string DescribeLoadBalancersRequest::getLoadBalancerName()const
{
	return loadBalancerName_;
}

void DescribeLoadBalancersRequest::setLoadBalancerName(const std::string& loadBalancerName)
{
	loadBalancerName_ = loadBalancerName;
	setCoreParameter("LoadBalancerName", std::to_string(loadBalancerName));
}

std::string DescribeLoadBalancersRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLoadBalancersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int DescribeLoadBalancersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLoadBalancersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeLoadBalancersRequest::getAddressType()const
{
	return addressType_;
}

void DescribeLoadBalancersRequest::setAddressType(const std::string& addressType)
{
	addressType_ = addressType;
	setCoreParameter("AddressType", std::to_string(addressType));
}

std::string DescribeLoadBalancersRequest::getSlaveZoneId()const
{
	return slaveZoneId_;
}

void DescribeLoadBalancersRequest::setSlaveZoneId(const std::string& slaveZoneId)
{
	slaveZoneId_ = slaveZoneId;
	setCoreParameter("SlaveZoneId", std::to_string(slaveZoneId));
}

std::vector<DescribeLoadBalancersRequest::Tag> DescribeLoadBalancersRequest::getTag()const
{
	return tag_;
}

void DescribeLoadBalancersRequest::setTag(const std::vector<Tag>& tag)
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

std::string DescribeLoadBalancersRequest::getFuzzy()const
{
	return fuzzy_;
}

void DescribeLoadBalancersRequest::setFuzzy(const std::string& fuzzy)
{
	fuzzy_ = fuzzy;
	setCoreParameter("Fuzzy", std::to_string(fuzzy));
}

std::string DescribeLoadBalancersRequest::getAddress()const
{
	return address_;
}

void DescribeLoadBalancersRequest::setAddress(const std::string& address)
{
	address_ = address;
	setCoreParameter("Address", std::to_string(address));
}

std::string DescribeLoadBalancersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLoadBalancersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeLoadBalancersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeLoadBalancersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long DescribeLoadBalancersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLoadBalancersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeLoadBalancersRequest::getServerId()const
{
	return serverId_;
}

void DescribeLoadBalancersRequest::setServerId(const std::string& serverId)
{
	serverId_ = serverId;
	setCoreParameter("ServerId", std::to_string(serverId));
}

std::string DescribeLoadBalancersRequest::getLoadBalancerStatus()const
{
	return loadBalancerStatus_;
}

void DescribeLoadBalancersRequest::setLoadBalancerStatus(const std::string& loadBalancerStatus)
{
	loadBalancerStatus_ = loadBalancerStatus;
	setCoreParameter("LoadBalancerStatus", std::to_string(loadBalancerStatus));
}

std::string DescribeLoadBalancersRequest::getTags()const
{
	return tags_;
}

void DescribeLoadBalancersRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", std::to_string(tags));
}

std::string DescribeLoadBalancersRequest::getServerIntranetAddress()const
{
	return serverIntranetAddress_;
}

void DescribeLoadBalancersRequest::setServerIntranetAddress(const std::string& serverIntranetAddress)
{
	serverIntranetAddress_ = serverIntranetAddress;
	setCoreParameter("ServerIntranetAddress", std::to_string(serverIntranetAddress));
}

std::string DescribeLoadBalancersRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeLoadBalancersRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", std::to_string(vSwitchId));
}

std::string DescribeLoadBalancersRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void DescribeLoadBalancersRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", std::to_string(loadBalancerId));
}

std::string DescribeLoadBalancersRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void DescribeLoadBalancersRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", std::to_string(internetChargeType));
}

std::string DescribeLoadBalancersRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeLoadBalancersRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

std::string DescribeLoadBalancersRequest::getPayType()const
{
	return payType_;
}

void DescribeLoadBalancersRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", std::to_string(payType));
}

