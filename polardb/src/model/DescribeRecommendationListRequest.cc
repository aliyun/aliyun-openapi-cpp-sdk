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

#include <alibabacloud/polardb/model/DescribeRecommendationListRequest.h>

using AlibabaCloud::Polardb::Model::DescribeRecommendationListRequest;

DescribeRecommendationListRequest::DescribeRecommendationListRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeRecommendationList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRecommendationListRequest::~DescribeRecommendationListRequest()
{}

long DescribeRecommendationListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRecommendationListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRecommendationListRequest::getReleaseType()const
{
	return releaseType_;
}

void DescribeRecommendationListRequest::setReleaseType(const std::string& releaseType)
{
	releaseType_ = releaseType;
	setParameter("ReleaseType", releaseType);
}

std::string DescribeRecommendationListRequest::getChannel()const
{
	return channel_;
}

void DescribeRecommendationListRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setParameter("Channel", channel);
}

std::string DescribeRecommendationListRequest::getType()const
{
	return type_;
}

void DescribeRecommendationListRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeRecommendationListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRecommendationListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRecommendationListRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeRecommendationListRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeRecommendationListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRecommendationListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeRecommendationListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRecommendationListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeRecommendationListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRecommendationListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRecommendationListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRecommendationListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeRecommendationListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRecommendationListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

