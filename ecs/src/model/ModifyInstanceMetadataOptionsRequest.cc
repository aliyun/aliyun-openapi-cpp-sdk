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

#include <alibabacloud/ecs/model/ModifyInstanceMetadataOptionsRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceMetadataOptionsRequest;

ModifyInstanceMetadataOptionsRequest::ModifyInstanceMetadataOptionsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceMetadataOptions")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyInstanceMetadataOptionsRequest::~ModifyInstanceMetadataOptionsRequest()
{}

long ModifyInstanceMetadataOptionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceMetadataOptionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ModifyInstanceMetadataOptionsRequest::getHttpPutResponseHopLimit()const
{
	return httpPutResponseHopLimit_;
}

void ModifyInstanceMetadataOptionsRequest::setHttpPutResponseHopLimit(int httpPutResponseHopLimit)
{
	httpPutResponseHopLimit_ = httpPutResponseHopLimit;
	setParameter("HttpPutResponseHopLimit", std::to_string(httpPutResponseHopLimit));
}

std::string ModifyInstanceMetadataOptionsRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceMetadataOptionsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyInstanceMetadataOptionsRequest::getHttpEndpoint()const
{
	return httpEndpoint_;
}

void ModifyInstanceMetadataOptionsRequest::setHttpEndpoint(const std::string& httpEndpoint)
{
	httpEndpoint_ = httpEndpoint;
	setParameter("HttpEndpoint", httpEndpoint);
}

std::string ModifyInstanceMetadataOptionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceMetadataOptionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ModifyInstanceMetadataOptionsRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceMetadataOptionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyInstanceMetadataOptionsRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceMetadataOptionsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyInstanceMetadataOptionsRequest::getHttpTokens()const
{
	return httpTokens_;
}

void ModifyInstanceMetadataOptionsRequest::setHttpTokens(const std::string& httpTokens)
{
	httpTokens_ = httpTokens;
	setParameter("HttpTokens", httpTokens);
}

