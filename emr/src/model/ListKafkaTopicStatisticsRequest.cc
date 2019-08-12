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

#include <alibabacloud/emr/model/ListKafkaTopicStatisticsRequest.h>

using AlibabaCloud::Emr::Model::ListKafkaTopicStatisticsRequest;

ListKafkaTopicStatisticsRequest::ListKafkaTopicStatisticsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListKafkaTopicStatistics")
{}

ListKafkaTopicStatisticsRequest::~ListKafkaTopicStatisticsRequest()
{}

long ListKafkaTopicStatisticsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListKafkaTopicStatisticsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool ListKafkaTopicStatisticsRequest::getActiveOnly()const
{
	return activeOnly_;
}

void ListKafkaTopicStatisticsRequest::setActiveOnly(bool activeOnly)
{
	activeOnly_ = activeOnly;
	setCoreParameter("ActiveOnly", activeOnly ? "true" : "false");
}

std::string ListKafkaTopicStatisticsRequest::getRegionId()const
{
	return regionId_;
}

void ListKafkaTopicStatisticsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListKafkaTopicStatisticsRequest::getPageSize()const
{
	return pageSize_;
}

void ListKafkaTopicStatisticsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListKafkaTopicStatisticsRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListKafkaTopicStatisticsRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setCoreParameter("DataSourceId", dataSourceId);
}

std::string ListKafkaTopicStatisticsRequest::getTopicName()const
{
	return topicName_;
}

void ListKafkaTopicStatisticsRequest::setTopicName(const std::string& topicName)
{
	topicName_ = topicName;
	setCoreParameter("TopicName", topicName);
}

std::string ListKafkaTopicStatisticsRequest::getClusterId()const
{
	return clusterId_;
}

void ListKafkaTopicStatisticsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int ListKafkaTopicStatisticsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListKafkaTopicStatisticsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListKafkaTopicStatisticsRequest::getFuzzyTopicName()const
{
	return fuzzyTopicName_;
}

void ListKafkaTopicStatisticsRequest::setFuzzyTopicName(const std::string& fuzzyTopicName)
{
	fuzzyTopicName_ = fuzzyTopicName;
	setCoreParameter("FuzzyTopicName", fuzzyTopicName);
}

std::string ListKafkaTopicStatisticsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListKafkaTopicStatisticsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

