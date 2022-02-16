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

#include <alibabacloud/emr/model/ListScalingGroupV2Request.h>

using AlibabaCloud::Emr::Model::ListScalingGroupV2Request;

ListScalingGroupV2Request::ListScalingGroupV2Request() :
	RpcServiceRequest("emr", "2016-04-08", "ListScalingGroupV2")
{
	setMethod(HttpRequest::Method::Post);
}

ListScalingGroupV2Request::~ListScalingGroupV2Request()
{}

long ListScalingGroupV2Request::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListScalingGroupV2Request::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListScalingGroupV2Request::getPageCount()const
{
	return pageCount_;
}

void ListScalingGroupV2Request::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setParameter("PageCount", std::to_string(pageCount));
}

std::string ListScalingGroupV2Request::getOrderMode()const
{
	return orderMode_;
}

void ListScalingGroupV2Request::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setParameter("OrderMode", orderMode);
}

std::string ListScalingGroupV2Request::getClusterBizId()const
{
	return clusterBizId_;
}

void ListScalingGroupV2Request::setClusterBizId(const std::string& clusterBizId)
{
	clusterBizId_ = clusterBizId;
	setParameter("ClusterBizId", clusterBizId);
}

int ListScalingGroupV2Request::getPageNumber()const
{
	return pageNumber_;
}

void ListScalingGroupV2Request::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListScalingGroupV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListScalingGroupV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListScalingGroupV2Request::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListScalingGroupV2Request::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListScalingGroupV2Request::getRegionId()const
{
	return regionId_;
}

void ListScalingGroupV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListScalingGroupV2Request::getLimit()const
{
	return limit_;
}

void ListScalingGroupV2Request::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

int ListScalingGroupV2Request::getPageSize()const
{
	return pageSize_;
}

void ListScalingGroupV2Request::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListScalingGroupV2Request::getCurrentSize()const
{
	return currentSize_;
}

void ListScalingGroupV2Request::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setParameter("CurrentSize", std::to_string(currentSize));
}

std::string ListScalingGroupV2Request::getOrderField()const
{
	return orderField_;
}

void ListScalingGroupV2Request::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setParameter("OrderField", orderField);
}

