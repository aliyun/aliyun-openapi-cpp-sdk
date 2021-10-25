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

#include <alibabacloud/emr/model/ListScalingConfigItemV2Request.h>

using AlibabaCloud::Emr::Model::ListScalingConfigItemV2Request;

ListScalingConfigItemV2Request::ListScalingConfigItemV2Request() :
	RpcServiceRequest("emr", "2016-04-08", "ListScalingConfigItemV2")
{
	setMethod(HttpRequest::Method::Post);
}

ListScalingConfigItemV2Request::~ListScalingConfigItemV2Request()
{}

std::string ListScalingConfigItemV2Request::getConfigItemType()const
{
	return configItemType_;
}

void ListScalingConfigItemV2Request::setConfigItemType(const std::string& configItemType)
{
	configItemType_ = configItemType;
	setParameter("ConfigItemType", configItemType);
}

long ListScalingConfigItemV2Request::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListScalingConfigItemV2Request::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListScalingConfigItemV2Request::getPageNumber()const
{
	return pageNumber_;
}

void ListScalingConfigItemV2Request::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListScalingConfigItemV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListScalingConfigItemV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListScalingConfigItemV2Request::getScalingGroupBizId()const
{
	return scalingGroupBizId_;
}

void ListScalingConfigItemV2Request::setScalingGroupBizId(const std::string& scalingGroupBizId)
{
	scalingGroupBizId_ = scalingGroupBizId;
	setParameter("ScalingGroupBizId", scalingGroupBizId);
}

std::string ListScalingConfigItemV2Request::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListScalingConfigItemV2Request::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListScalingConfigItemV2Request::getRegionId()const
{
	return regionId_;
}

void ListScalingConfigItemV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListScalingConfigItemV2Request::getPageSize()const
{
	return pageSize_;
}

void ListScalingConfigItemV2Request::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

