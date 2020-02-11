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

#include <alibabacloud/ecs/model/CreateNetworkInterfaceRequest.h>

using AlibabaCloud::Ecs::Model::CreateNetworkInterfaceRequest;

CreateNetworkInterfaceRequest::CreateNetworkInterfaceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateNetworkInterface")
{
	setMethod(HttpRequest::Method::Post);
}

CreateNetworkInterfaceRequest::~CreateNetworkInterfaceRequest()
{}

long CreateNetworkInterfaceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateNetworkInterfaceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateNetworkInterfaceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateNetworkInterfaceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateNetworkInterfaceRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateNetworkInterfaceRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string CreateNetworkInterfaceRequest::getDescription()const
{
	return description_;
}

void CreateNetworkInterfaceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

int CreateNetworkInterfaceRequest::getSecondaryPrivateIpAddressCount()const
{
	return secondaryPrivateIpAddressCount_;
}

void CreateNetworkInterfaceRequest::setSecondaryPrivateIpAddressCount(int secondaryPrivateIpAddressCount)
{
	secondaryPrivateIpAddressCount_ = secondaryPrivateIpAddressCount;
	setParameter("SecondaryPrivateIpAddressCount", std::to_string(secondaryPrivateIpAddressCount));
}

std::string CreateNetworkInterfaceRequest::getBusinessType()const
{
	return businessType_;
}

void CreateNetworkInterfaceRequest::setBusinessType(const std::string& businessType)
{
	businessType_ = businessType;
	setParameter("BusinessType", businessType);
}

std::string CreateNetworkInterfaceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateNetworkInterfaceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateNetworkInterfaceRequest::getRegionId()const
{
	return regionId_;
}

void CreateNetworkInterfaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<CreateNetworkInterfaceRequest::Tag> CreateNetworkInterfaceRequest::getTag()const
{
	return tag_;
}

void CreateNetworkInterfaceRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::string CreateNetworkInterfaceRequest::getNetworkInterfaceName()const
{
	return networkInterfaceName_;
}

void CreateNetworkInterfaceRequest::setNetworkInterfaceName(const std::string& networkInterfaceName)
{
	networkInterfaceName_ = networkInterfaceName;
	setParameter("NetworkInterfaceName", networkInterfaceName);
}

bool CreateNetworkInterfaceRequest::getVisible()const
{
	return visible_;
}

void CreateNetworkInterfaceRequest::setVisible(bool visible)
{
	visible_ = visible;
	setParameter("Visible", visible ? "true" : "false");
}

std::string CreateNetworkInterfaceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateNetworkInterfaceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateNetworkInterfaceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateNetworkInterfaceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateNetworkInterfaceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateNetworkInterfaceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> CreateNetworkInterfaceRequest::getSecurityGroupIds()const
{
	return securityGroupIds_;
}

void CreateNetworkInterfaceRequest::setSecurityGroupIds(const std::vector<std::string>& securityGroupIds)
{
	securityGroupIds_ = securityGroupIds;
	for(int dep1 = 0; dep1!= securityGroupIds.size(); dep1++) {
		setParameter("SecurityGroupIds."+ std::to_string(dep1), securityGroupIds.at(dep1));
	}
}

std::string CreateNetworkInterfaceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateNetworkInterfaceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::vector<std::string> CreateNetworkInterfaceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CreateNetworkInterfaceRequest::setPrivateIpAddress(const std::vector<std::string>& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	for(int dep1 = 0; dep1!= privateIpAddress.size(); dep1++) {
		setParameter("PrivateIpAddress."+ std::to_string(dep1), privateIpAddress.at(dep1));
	}
}

std::string CreateNetworkInterfaceRequest::getPrimaryIpAddress()const
{
	return primaryIpAddress_;
}

void CreateNetworkInterfaceRequest::setPrimaryIpAddress(const std::string& primaryIpAddress)
{
	primaryIpAddress_ = primaryIpAddress;
	setParameter("PrimaryIpAddress", primaryIpAddress);
}

