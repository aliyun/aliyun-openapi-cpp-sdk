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

#include <alibabacloud/slb/model/DescribeVServerGroupsRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeVServerGroupsRequest::DescribeVServerGroupsRequest() :
	SlbRequest("DescribeVServerGroups")
{}

DescribeVServerGroupsRequest::~DescribeVServerGroupsRequest()
{}

std::string DescribeVServerGroupsRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeVServerGroupsRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DescribeVServerGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVServerGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeVServerGroupsRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void DescribeVServerGroupsRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string DescribeVServerGroupsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVServerGroupsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVServerGroupsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVServerGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeVServerGroupsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVServerGroupsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeVServerGroupsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVServerGroupsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVServerGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVServerGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeVServerGroupsRequest::getTags()const
{
	return tags_;
}

void DescribeVServerGroupsRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

