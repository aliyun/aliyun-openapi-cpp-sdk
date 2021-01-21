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

#include <alibabacloud/ecs/model/DescribeImagePipelinesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeImagePipelinesRequest;

DescribeImagePipelinesRequest::DescribeImagePipelinesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeImagePipelines")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeImagePipelinesRequest::~DescribeImagePipelinesRequest()
{}

std::vector<std::string> DescribeImagePipelinesRequest::getImagePipelineId()const
{
	return imagePipelineId_;
}

void DescribeImagePipelinesRequest::setImagePipelineId(const std::vector<std::string>& imagePipelineId)
{
	imagePipelineId_ = imagePipelineId;
	for(int dep1 = 0; dep1!= imagePipelineId.size(); dep1++) {
		setParameter("ImagePipelineId."+ std::to_string(dep1), imagePipelineId.at(dep1));
	}
}

long DescribeImagePipelinesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeImagePipelinesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeImagePipelinesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeImagePipelinesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeImagePipelinesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeImagePipelinesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeImagePipelinesRequest::getNextToken()const
{
	return nextToken_;
}

void DescribeImagePipelinesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::vector<DescribeImagePipelinesRequest::Tag> DescribeImagePipelinesRequest::getTag()const
{
	return tag_;
}

void DescribeImagePipelinesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Key", tagObj.key);
		setParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::string DescribeImagePipelinesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeImagePipelinesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeImagePipelinesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeImagePipelinesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeImagePipelinesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeImagePipelinesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeImagePipelinesRequest::getName()const
{
	return name_;
}

void DescribeImagePipelinesRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int DescribeImagePipelinesRequest::getMaxResults()const
{
	return maxResults_;
}

void DescribeImagePipelinesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

