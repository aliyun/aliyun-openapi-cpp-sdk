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

#include <alibabacloud/emr/model/ListUserStatisticsRequest.h>

using AlibabaCloud::Emr::Model::ListUserStatisticsRequest;

ListUserStatisticsRequest::ListUserStatisticsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListUserStatistics")
{}

ListUserStatisticsRequest::~ListUserStatisticsRequest()
{}

long ListUserStatisticsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListUserStatisticsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListUserStatisticsRequest::getRegionId()const
{
	return regionId_;
}

void ListUserStatisticsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ListUserStatisticsRequest::getOrderMode()const
{
	return orderMode_;
}

void ListUserStatisticsRequest::setOrderMode(const std::string& orderMode)
{
	orderMode_ = orderMode;
	setCoreParameter("OrderMode", std::to_string(orderMode));
}

int ListUserStatisticsRequest::getPageSize()const
{
	return pageSize_;
}

void ListUserStatisticsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListUserStatisticsRequest::getOrderFieldName()const
{
	return orderFieldName_;
}

void ListUserStatisticsRequest::setOrderFieldName(const std::string& orderFieldName)
{
	orderFieldName_ = orderFieldName;
	setCoreParameter("OrderFieldName", std::to_string(orderFieldName));
}

int ListUserStatisticsRequest::getCurrentSize()const
{
	return currentSize_;
}

void ListUserStatisticsRequest::setCurrentSize(int currentSize)
{
	currentSize_ = currentSize;
	setCoreParameter("CurrentSize", currentSize);
}

std::string ListUserStatisticsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListUserStatisticsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

