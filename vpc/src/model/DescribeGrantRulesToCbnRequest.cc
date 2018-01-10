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

#include <alibabacloud/vpc/model/DescribeGrantRulesToCbnRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeGrantRulesToCbnRequest::DescribeGrantRulesToCbnRequest() :
	VpcRequest("DescribeGrantRulesToCbn")
{}

DescribeGrantRulesToCbnRequest::~DescribeGrantRulesToCbnRequest()
{}

long DescribeGrantRulesToCbnRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeGrantRulesToCbnRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeGrantRulesToCbnRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeGrantRulesToCbnRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeGrantRulesToCbnRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeGrantRulesToCbnRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeGrantRulesToCbnRequest::getRegionId()const
{
	return regionId_;
}

void DescribeGrantRulesToCbnRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeGrantRulesToCbnRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeGrantRulesToCbnRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeGrantRulesToCbnRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeGrantRulesToCbnRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeGrantRulesToCbnRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeGrantRulesToCbnRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

long DescribeGrantRulesToCbnRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeGrantRulesToCbnRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

