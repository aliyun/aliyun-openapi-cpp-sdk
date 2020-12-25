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

long ListScalingConfigItemV2Request::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListScalingConfigItemV2Request::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListScalingConfigItemV2Request::getPageCount()const
{
	return pageCount_;
}

void ListScalingConfigItemV2Request::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setParameter("PageCount", std::to_string(pageCount));
}

std::string ListScalingConfigItemV2Request::getOrderMode()const
{
	return orderMode_;
}

void ListScalingConfigItemV2Request::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setParameter("OrderMode", orderMode);
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

int ListScalingConfigItemV2Request::getLimit()const
{
	return limit_;
}

void ListScalingConfigItemV2Request::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
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

int ListScalingConfigItemV2Request::getCurrentSize()const
{
	return currentSize_;
}

void ListScalingConfigItemV2Request::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setParameter("CurrentSize", std::to_string(currentSize));
}

std::string ListScalingConfigItemV2Request::getOrderField()const
{
	return orderField_;
}

void ListScalingConfigItemV2Request::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setParameter("OrderField", orderField);
}

std::string ListScalingConfigItemV2Request::getConfigItemType()const
{
	return configItemType_;
}

void ListScalingConfigItemV2Request::setConfigItemType(const std::string& configItemType)
{
	configItemType_ = configItemType;
	setParameter("ConfigItemType", configItemType);
}

