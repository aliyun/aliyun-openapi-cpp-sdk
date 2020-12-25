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

#include <alibabacloud/emr/model/ListScalingActivityV2Request.h>

using AlibabaCloud::Emr::Model::ListScalingActivityV2Request;

ListScalingActivityV2Request::ListScalingActivityV2Request() :
	RpcServiceRequest("emr", "2016-04-08", "ListScalingActivityV2")
{
	setMethod(HttpRequest::Method::Post);
}

ListScalingActivityV2Request::~ListScalingActivityV2Request()
{}

long ListScalingActivityV2Request::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListScalingActivityV2Request::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListScalingActivityV2Request::getPageCount()const
{
	return pageCount_;
}

void ListScalingActivityV2Request::setPageCount(int pageCount)
{
	pageCount_ = pageCount;
	setParameter("PageCount", std::to_string(pageCount));
}

std::string ListScalingActivityV2Request::getOrderMode()const
{
	return orderMode_;
}

void ListScalingActivityV2Request::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setParameter("OrderMode", orderMode);
}

std::string ListScalingActivityV2Request::getClusterBizId()const
{
	return clusterBizId_;
}

void ListScalingActivityV2Request::setClusterBizId(const std::string& clusterBizId)
{
	clusterBizId_ = clusterBizId;
	setParameter("ClusterBizId", clusterBizId);
}

int ListScalingActivityV2Request::getPageNumber()const
{
	return pageNumber_;
}

void ListScalingActivityV2Request::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListScalingActivityV2Request::getHostGroupName()const
{
	return hostGroupName_;
}

void ListScalingActivityV2Request::setHostGroupName(const std::string& hostGroupName)
{
	hostGroupName_ = hostGroupName;
	setParameter("HostGroupName", hostGroupName);
}

std::string ListScalingActivityV2Request::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListScalingActivityV2Request::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListScalingActivityV2Request::getScalingGroupBizId()const
{
	return scalingGroupBizId_;
}

void ListScalingActivityV2Request::setScalingGroupBizId(const std::string& scalingGroupBizId)
{
	scalingGroupBizId_ = scalingGroupBizId;
	setParameter("ScalingGroupBizId", scalingGroupBizId);
}

std::string ListScalingActivityV2Request::getScalingRuleName()const
{
	return scalingRuleName_;
}

void ListScalingActivityV2Request::setScalingRuleName(const std::string& scalingRuleName)
{
	scalingRuleName_ = scalingRuleName;
	setParameter("ScalingRuleName", scalingRuleName);
}

std::string ListScalingActivityV2Request::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListScalingActivityV2Request::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListScalingActivityV2Request::getRegionId()const
{
	return regionId_;
}

void ListScalingActivityV2Request::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListScalingActivityV2Request::getLimit()const
{
	return limit_;
}

void ListScalingActivityV2Request::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

int ListScalingActivityV2Request::getPageSize()const
{
	return pageSize_;
}

void ListScalingActivityV2Request::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListScalingActivityV2Request::getCurrentSize()const
{
	return currentSize_;
}

void ListScalingActivityV2Request::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setParameter("CurrentSize", std::to_string(currentSize));
}

std::string ListScalingActivityV2Request::getOrderField()const
{
	return orderField_;
}

void ListScalingActivityV2Request::setOrderField(const std::string& orderField)
{
	orderField_ = orderField;
	setParameter("OrderField", orderField);
}

std::string ListScalingActivityV2Request::getHostGroupId()const
{
	return hostGroupId_;
}

void ListScalingActivityV2Request::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setParameter("HostGroupId", hostGroupId);
}

std::string ListScalingActivityV2Request::getStatus()const
{
	return status_;
}

void ListScalingActivityV2Request::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

