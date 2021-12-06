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

#include <alibabacloud/ecs/model/DescribeImageSupportInstanceTypesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeImageSupportInstanceTypesRequest;

DescribeImageSupportInstanceTypesRequest::DescribeImageSupportInstanceTypesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeImageSupportInstanceTypes")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeImageSupportInstanceTypesRequest::~DescribeImageSupportInstanceTypesRequest()
{}

std::string DescribeImageSupportInstanceTypesRequest::getActionType()const
{
	return actionType_;
}

void DescribeImageSupportInstanceTypesRequest::setActionType(const std::string& actionType)
{
	actionType_ = actionType;
	setParameter("ActionType", actionType);
}

long DescribeImageSupportInstanceTypesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeImageSupportInstanceTypesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeImageSupportInstanceTypesRequest::getImageId()const
{
	return imageId_;
}

void DescribeImageSupportInstanceTypesRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string DescribeImageSupportInstanceTypesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeImageSupportInstanceTypesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeImageSupportInstanceTypesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeImageSupportInstanceTypesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeImageSupportInstanceTypesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeImageSupportInstanceTypesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<DescribeImageSupportInstanceTypesRequest::Filter> DescribeImageSupportInstanceTypesRequest::getFilter()const
{
	return filter_;
}

void DescribeImageSupportInstanceTypesRequest::setFilter(const std::vector<Filter>& filter)
{
	filter_ = filter;
	for(int dep1 = 0; dep1!= filter.size(); dep1++) {
		auto filterObj = filter.at(dep1);
		std::string filterObjStr = "Filter." + std::to_string(dep1 + 1);
		setParameter(filterObjStr + ".Value", filterObj.value);
		setParameter(filterObjStr + ".Key", filterObj.key);
	}
}

