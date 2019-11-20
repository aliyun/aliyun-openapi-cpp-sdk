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

#include <alibabacloud/ecs/model/DescribeLimitationRequest.h>

using AlibabaCloud::Ecs::Model::DescribeLimitationRequest;

DescribeLimitationRequest::DescribeLimitationRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeLimitation")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeLimitationRequest::~DescribeLimitationRequest()
{}

std::string DescribeLimitationRequest::getLimitation()const
{
	return limitation_;
}

void DescribeLimitationRequest::setLimitation(const std::string& limitation)
{
	limitation_ = limitation;
	setCoreParameter("Limitation", limitation);
}

long DescribeLimitationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeLimitationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeLimitationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLimitationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeLimitationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeLimitationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeLimitationRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLimitationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

