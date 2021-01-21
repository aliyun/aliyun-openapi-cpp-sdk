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

#include <alibabacloud/ecs/model/DescribeImageComponentsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeImageComponentsRequest;

DescribeImageComponentsRequest::DescribeImageComponentsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeImageComponents")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeImageComponentsRequest::~DescribeImageComponentsRequest()
{}

long DescribeImageComponentsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeImageComponentsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> DescribeImageComponentsRequest::getImageComponentId()const
{
	return imageComponentId_;
}

void DescribeImageComponentsRequest::setImageComponentId(const std::vector<std::string>& imageComponentId)
{
	imageComponentId_ = imageComponentId;
	for(int dep1 = 0; dep1!= imageComponentId.size(); dep1++) {
		setParameter("ImageComponentId."+ std::to_string(dep1), imageComponentId.at(dep1));
	}
}

std::string DescribeImageComponentsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeImageComponentsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeImageComponentsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeImageComponentsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeImageComponentsRequest::getNextToken()const
{
	return nextToken_;
}

void DescribeImageComponentsRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::vector<DescribeImageComponentsRequest::Tag> DescribeImageComponentsRequest::getTag()const
{
	return tag_;
}

void DescribeImageComponentsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::string DescribeImageComponentsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeImageComponentsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeImageComponentsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeImageComponentsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeImageComponentsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeImageComponentsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeImageComponentsRequest::getName()const
{
	return name_;
}

void DescribeImageComponentsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int DescribeImageComponentsRequest::getMaxResults()const
{
	return maxResults_;
}

void DescribeImageComponentsRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

