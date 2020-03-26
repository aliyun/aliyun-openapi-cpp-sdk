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

#include <alibabacloud/vpc/model/AssociateNetworkAclRequest.h>

using AlibabaCloud::Vpc::Model::AssociateNetworkAclRequest;

AssociateNetworkAclRequest::AssociateNetworkAclRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "AssociateNetworkAcl")
{
	setMethod(HttpRequest::Method::Post);
}

AssociateNetworkAclRequest::~AssociateNetworkAclRequest()
{}

long AssociateNetworkAclRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AssociateNetworkAclRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AssociateNetworkAclRequest::getClientToken()const
{
	return clientToken_;
}

void AssociateNetworkAclRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string AssociateNetworkAclRequest::getRegionId()const
{
	return regionId_;
}

void AssociateNetworkAclRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AssociateNetworkAclRequest::getNetworkAclId()const
{
	return networkAclId_;
}

void AssociateNetworkAclRequest::setNetworkAclId(const std::string& networkAclId)
{
	networkAclId_ = networkAclId;
	setParameter("NetworkAclId", networkAclId);
}

std::vector<AssociateNetworkAclRequest::Resource> AssociateNetworkAclRequest::getResource()const
{
	return resource_;
}

void AssociateNetworkAclRequest::setResource(const std::vector<Resource>& resource)
{
	resource_ = resource;
	for(int dep1 = 0; dep1!= resource.size(); dep1++) {
		auto resourceObj = resource.at(dep1);
		std::string resourceObjStr = "Resource." + std::to_string(dep1 + 1);
		setParameter(resourceObjStr + ".ResourceType", resourceObj.resourceType);
		setParameter(resourceObjStr + ".ResourceId", resourceObj.resourceId);
	}
}

std::string AssociateNetworkAclRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AssociateNetworkAclRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long AssociateNetworkAclRequest::getOwnerId()const
{
	return ownerId_;
}

void AssociateNetworkAclRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

