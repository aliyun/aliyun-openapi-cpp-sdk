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

#include <alibabacloud/ecs/model/DescribeNetworkInterfacesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeNetworkInterfacesRequest;

DescribeNetworkInterfacesRequest::DescribeNetworkInterfacesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeNetworkInterfaces")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeNetworkInterfacesRequest::~DescribeNetworkInterfacesRequest()
{}

long DescribeNetworkInterfacesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeNetworkInterfacesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool DescribeNetworkInterfacesRequest::getServiceManaged()const
{
	return serviceManaged_;
}

void DescribeNetworkInterfacesRequest::setServiceManaged(bool serviceManaged)
{
	serviceManaged_ = serviceManaged;
	setParameter("ServiceManaged", serviceManaged ? "true" : "false");
}

std::string DescribeNetworkInterfacesRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void DescribeNetworkInterfacesRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string DescribeNetworkInterfacesRequest::getType()const
{
	return type_;
}

void DescribeNetworkInterfacesRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

int DescribeNetworkInterfacesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeNetworkInterfacesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeNetworkInterfacesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeNetworkInterfacesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeNetworkInterfacesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeNetworkInterfacesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeNetworkInterfacesRequest::getNextToken()const
{
	return nextToken_;
}

void DescribeNetworkInterfacesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

int DescribeNetworkInterfacesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeNetworkInterfacesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeNetworkInterfacesRequest::Tag> DescribeNetworkInterfacesRequest::getTag()const
{
	return tag_;
}

void DescribeNetworkInterfacesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::string DescribeNetworkInterfacesRequest::getNetworkInterfaceName()const
{
	return networkInterfaceName_;
}

void DescribeNetworkInterfacesRequest::setNetworkInterfaceName(const std::string& networkInterfaceName)
{
	networkInterfaceName_ = networkInterfaceName;
	setParameter("NetworkInterfaceName", networkInterfaceName);
}

std::string DescribeNetworkInterfacesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeNetworkInterfacesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeNetworkInterfacesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeNetworkInterfacesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeNetworkInterfacesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeNetworkInterfacesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeNetworkInterfacesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeNetworkInterfacesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::vector<std::string> DescribeNetworkInterfacesRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void DescribeNetworkInterfacesRequest::setPrivateIpAddress(const std::vector<std::string>& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	for(int dep1 = 0; dep1!= privateIpAddress.size(); dep1++) {
		setParameter("PrivateIpAddress."+ std::to_string(dep1), privateIpAddress.at(dep1));
	}
}

std::string DescribeNetworkInterfacesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeNetworkInterfacesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeNetworkInterfacesRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeNetworkInterfacesRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string DescribeNetworkInterfacesRequest::getPrimaryIpAddress()const
{
	return primaryIpAddress_;
}

void DescribeNetworkInterfacesRequest::setPrimaryIpAddress(const std::string& primaryIpAddress)
{
	primaryIpAddress_ = primaryIpAddress;
	setParameter("PrimaryIpAddress", primaryIpAddress);
}

int DescribeNetworkInterfacesRequest::getMaxResults()const
{
	return maxResults_;
}

void DescribeNetworkInterfacesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::vector<std::string> DescribeNetworkInterfacesRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void DescribeNetworkInterfacesRequest::setNetworkInterfaceId(const std::vector<std::string>& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	for(int dep1 = 0; dep1!= networkInterfaceId.size(); dep1++) {
		setParameter("NetworkInterfaceId."+ std::to_string(dep1), networkInterfaceId.at(dep1));
	}
}

