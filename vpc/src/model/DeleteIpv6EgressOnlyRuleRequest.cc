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

#include <alibabacloud/vpc/model/DeleteIpv6EgressOnlyRuleRequest.h>

using AlibabaCloud::Vpc::Model::DeleteIpv6EgressOnlyRuleRequest;

DeleteIpv6EgressOnlyRuleRequest::DeleteIpv6EgressOnlyRuleRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteIpv6EgressOnlyRule")
{}

DeleteIpv6EgressOnlyRuleRequest::~DeleteIpv6EgressOnlyRuleRequest()
{}

long DeleteIpv6EgressOnlyRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteIpv6EgressOnlyRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteIpv6EgressOnlyRuleRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteIpv6EgressOnlyRuleRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DeleteIpv6EgressOnlyRuleRequest::getIpv6EgressOnlyRuleId()const
{
	return ipv6EgressOnlyRuleId_;
}

void DeleteIpv6EgressOnlyRuleRequest::setIpv6EgressOnlyRuleId(const std::string& ipv6EgressOnlyRuleId)
{
	ipv6EgressOnlyRuleId_ = ipv6EgressOnlyRuleId;
	setCoreParameter("Ipv6EgressOnlyRuleId", ipv6EgressOnlyRuleId);
}

std::string DeleteIpv6EgressOnlyRuleRequest::getRegionId()const
{
	return regionId_;
}

void DeleteIpv6EgressOnlyRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteIpv6EgressOnlyRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteIpv6EgressOnlyRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteIpv6EgressOnlyRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteIpv6EgressOnlyRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteIpv6EgressOnlyRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteIpv6EgressOnlyRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

