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

#include <alibabacloud/ecs/model/DescribeInstanceVncPasswdRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceVncPasswdRequest;

DescribeInstanceVncPasswdRequest::DescribeInstanceVncPasswdRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceVncPasswd")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstanceVncPasswdRequest::~DescribeInstanceVncPasswdRequest()
{}

long DescribeInstanceVncPasswdRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceVncPasswdRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstanceVncPasswdRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceVncPasswdRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeInstanceVncPasswdRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceVncPasswdRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceVncPasswdRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceVncPasswdRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeInstanceVncPasswdRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceVncPasswdRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeInstanceVncPasswdRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceVncPasswdRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

