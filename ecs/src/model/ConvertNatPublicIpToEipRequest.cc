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

#include <alibabacloud/ecs/model/ConvertNatPublicIpToEipRequest.h>

using AlibabaCloud::Ecs::Model::ConvertNatPublicIpToEipRequest;

ConvertNatPublicIpToEipRequest::ConvertNatPublicIpToEipRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ConvertNatPublicIpToEip")
{
	setMethod(HttpRequest::Method::Post);
}

ConvertNatPublicIpToEipRequest::~ConvertNatPublicIpToEipRequest()
{}

long ConvertNatPublicIpToEipRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ConvertNatPublicIpToEipRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ConvertNatPublicIpToEipRequest::getRegionId()const
{
	return regionId_;
}

void ConvertNatPublicIpToEipRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ConvertNatPublicIpToEipRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ConvertNatPublicIpToEipRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ConvertNatPublicIpToEipRequest::getOwnerId()const
{
	return ownerId_;
}

void ConvertNatPublicIpToEipRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ConvertNatPublicIpToEipRequest::getInstanceId()const
{
	return instanceId_;
}

void ConvertNatPublicIpToEipRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

