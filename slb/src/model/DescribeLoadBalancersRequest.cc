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
{
	setMethod(HttpRequest::Method::Post);
}

DescribeLoadBalancersRequest::~DescribeLoadBalancersRequest()
{}

std::string DescribeLoadBalancersRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeLoadBalancersRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long DescribeLoadBalancersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeLoadBalancersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool DescribeLoadBalancersRequest::getSupportPrivateLink()const
{
	return supportPrivateLink_;
}

void DescribeLoadBalancersRequest::setSupportPrivateLink(bool supportPrivateLink)
{
	supportPrivateLink_ = supportPrivateLink;
	setCoreParameter("SupportPrivateLink", supportPrivateLink ? "true" : "false");
}

std::string DescribeLoadBalancersRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeLoadBalancersRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setCoreParameter("NetworkType", networkType);
}

std::string DescribeLoadBalancersRequest::getAddressIPVersion()const
{
	return addressIPVersion_;
}

void DescribeLoadBalancersRequest::setAddressIPVersion(const std::string& addressIPVersion)
{
	addressIPVersion_ = addressIPVersion;
	setCoreParameter("AddressIPVersion", addressIPVersion);
}

std::string DescribeLoadBalancersRequest::getMasterZoneId()const
{
	return masterZoneId_;
}

void DescribeLoadBalancersRequest::setMasterZoneId(const std::string& masterZoneId)
{
	masterZoneId_ = masterZoneId;
	setCoreParameter("MasterZoneId", masterZoneId);
}

int DescribeLoadBalancersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLoadBalancersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeLoadBalancersRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeLoadBalancersRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeLoadBalancersRequest::getLoadBalancerName()const
{
	return loadBalancerName_;
}

void DescribeLoadBalancersRequest::setLoadBalancerName(const std::string& loadBalancerName)
{
	loadBalancerName_ = loadBalancerName;
	setCoreParameter("LoadBalancerName", loadBalancerName);
}

std::string DescribeLoadBalancersRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLoadBalancersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeLoadBalancersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLoadBalancersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeLoadBalancersRequest::getAddressType()const
{
	return addressType_;
}

void DescribeLoadBalancersRequest::setAddressType(const std::string& addressType)
{
	addressType_ = addressType;
	setCoreParameter("AddressType", addressType);
}

std::string DescribeLoadBalancersRequest::getSlaveZoneId()const
{
	return slaveZoneId_;
}

void DescribeLoadBalancersRequest::setSlaveZoneId(const std::string& slaveZoneId)
{
	slaveZoneId_ = slaveZoneId;
	setCoreParameter("SlaveZoneId", slaveZoneId);
}

std::vector<DescribeLoadBalancersRequest::Tag> DescribeLoadBalancersRequest::getTag()const
{
	return tag_;
}

void DescribeLoadBalancersRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1);
		setCoreParameter(tagObjStr + ".Value", tagObj.value);
		setCoreParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string DescribeLoadBalancersRequest::getFuzzy()const
{
	return fuzzy_;
}

void DescribeLoadBalancersRequest::setFuzzy(const std::string& fuzzy)
{
	fuzzy_ = fuzzy;
	setCoreParameter("Fuzzy", fuzzy);
}

std::string DescribeLoadBalancersRequest::getAddress()const
{
	return address_;
}

void DescribeLoadBalancersRequest::setAddress(const std::string& address)
{
	address_ = address;
	setCoreParameter("Address", address);
}

std::string DescribeLoadBalancersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLoadBalancersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeLoadBalancersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeLoadBalancersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeLoadBalancersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLoadBalancersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLoadBalancersRequest::getServerId()const
{
	return serverId_;
}

void DescribeLoadBalancersRequest::setServerId(const std::string& serverId)
{
	serverId_ = serverId;
	setCoreParameter("ServerId", serverId);
}

std::string DescribeLoadBalancersRequest::getLoadBalancerStatus()const
{
	return loadBalancerStatus_;
}

void DescribeLoadBalancersRequest::setLoadBalancerStatus(const std::string& loadBalancerStatus)
{
	loadBalancerStatus_ = loadBalancerStatus;
	setCoreParameter("LoadBalancerStatus", loadBalancerStatus);
}

std::string DescribeLoadBalancersRequest::getTags()const
{
	return tags_;
}

void DescribeLoadBalancersRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

std::string DescribeLoadBalancersRequest::getServerIntranetAddress()const
{
	return serverIntranetAddress_;
}

void DescribeLoadBalancersRequest::setServerIntranetAddress(const std::string& serverIntranetAddress)
{
	serverIntranetAddress_ = serverIntranetAddress;
	setCoreParameter("ServerIntranetAddress", serverIntranetAddress);
}

std::string DescribeLoadBalancersRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeLoadBalancersRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string DescribeLoadBalancersRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void DescribeLoadBalancersRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", loadBalancerId);
}

std::string DescribeLoadBalancersRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void DescribeLoadBalancersRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", internetChargeType);
}

std::string DescribeLoadBalancersRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeLoadBalancersRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string DescribeLoadBalancersRequest::getPayType()const
{
	return payType_;
}

void DescribeLoadBalancersRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

