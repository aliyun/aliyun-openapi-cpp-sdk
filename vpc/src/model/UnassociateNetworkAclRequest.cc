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

#include <alibabacloud/vpc/model/UnassociateNetworkAclRequest.h>

using AlibabaCloud::Vpc::Model::UnassociateNetworkAclRequest;

UnassociateNetworkAclRequest::UnassociateNetworkAclRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "UnassociateNetworkAcl")
{
	setMethod(HttpRequest::Method::Post);
}

UnassociateNetworkAclRequest::~UnassociateNetworkAclRequest()
{}

long UnassociateNetworkAclRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnassociateNetworkAclRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnassociateNetworkAclRequest::getClientToken()const
{
	return clientToken_;
}

void UnassociateNetworkAclRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string UnassociateNetworkAclRequest::getRegionId()const
{
	return regionId_;
}

void UnassociateNetworkAclRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UnassociateNetworkAclRequest::getNetworkAclId()const
{
	return networkAclId_;
}

void UnassociateNetworkAclRequest::setNetworkAclId(const std::string& networkAclId)
{
	networkAclId_ = networkAclId;
	setCoreParameter("NetworkAclId", networkAclId);
}

std::vector<UnassociateNetworkAclRequest::Resource> UnassociateNetworkAclRequest::getResource()const
{
	return resource_;
}

void UnassociateNetworkAclRequest::setResource(const std::vector<Resource>& resource)
{
	resource_ = resource;
	for(int dep1 = 0; dep1!= resource.size(); dep1++) {
		auto resourceObj = resource.at(dep1);
		std::string resourceObjStr = "Resource." + std::to_string(dep1);
		setCoreParameter(resourceObjStr + ".ResourceType", resourceObj.resourceType);
		setCoreParameter(resourceObjStr + ".ResourceId", resourceObj.resourceId);
	}
}

std::string UnassociateNetworkAclRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnassociateNetworkAclRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long UnassociateNetworkAclRequest::getOwnerId()const
{
	return ownerId_;
}

void UnassociateNetworkAclRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

