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

#include <alibabacloud/ecs/model/DescribeInstanceTypesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceTypesRequest;

DescribeInstanceTypesRequest::DescribeInstanceTypesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceTypes")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstanceTypesRequest::~DescribeInstanceTypesRequest()
{}

long DescribeInstanceTypesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceTypesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstanceTypesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceTypesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceTypesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceTypesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeInstanceTypesRequest::getInstanceTypeFamily()const
{
	return instanceTypeFamily_;
}

void DescribeInstanceTypesRequest::setInstanceTypeFamily(const std::string& instanceTypeFamily)
{
	instanceTypeFamily_ = instanceTypeFamily;
	setParameter("InstanceTypeFamily", instanceTypeFamily);
}

long DescribeInstanceTypesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceTypesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

