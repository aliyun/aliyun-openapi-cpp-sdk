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
{}

DescribeImageSupportInstanceTypesRequest::~DescribeImageSupportInstanceTypesRequest()
{}

std::string DescribeImageSupportInstanceTypesRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeImageSupportInstanceTypesRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeImageSupportInstanceTypesRequest::getActionType()const
{
	return actionType_;
}

void DescribeImageSupportInstanceTypesRequest::setActionType(const std::string& actionType)
{
	actionType_ = actionType;
	setCoreParameter("ActionType", actionType);
}

std::vector<DescribeImageSupportInstanceTypesRequest::Filter> DescribeImageSupportInstanceTypesRequest::getFilter()const
{
	return filter_;
}

void DescribeImageSupportInstanceTypesRequest::setFilter(const std::vector<Filter>& filter)
{
	filter_ = filter;
	int i = 0;
	for(int i = 0; i!= filter.size(); i++)	{
		auto obj = filter.at(i);
		std::string str ="Filter."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

bool DescribeImageSupportInstanceTypesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeImageSupportInstanceTypesRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

std::string DescribeImageSupportInstanceTypesRequest::getImageId()const
{
	return imageId_;
}

void DescribeImageSupportInstanceTypesRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string DescribeImageSupportInstanceTypesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeImageSupportInstanceTypesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeImageSupportInstanceTypesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeImageSupportInstanceTypesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeImageSupportInstanceTypesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeImageSupportInstanceTypesRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

