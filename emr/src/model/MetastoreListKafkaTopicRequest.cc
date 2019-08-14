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

#include <alibabacloud/emr/model/MetastoreListKafkaTopicRequest.h>

using AlibabaCloud::Emr::Model::MetastoreListKafkaTopicRequest;

MetastoreListKafkaTopicRequest::MetastoreListKafkaTopicRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreListKafkaTopic")
{}

MetastoreListKafkaTopicRequest::~MetastoreListKafkaTopicRequest()
{}

long MetastoreListKafkaTopicRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreListKafkaTopicRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool MetastoreListKafkaTopicRequest::getActiveOnly()const
{
	return activeOnly_;
}

void MetastoreListKafkaTopicRequest::setActiveOnly(bool activeOnly)
{
	activeOnly_ = activeOnly;
	setCoreParameter("ActiveOnly", activeOnly ? "true" : "false");
}

std::string MetastoreListKafkaTopicRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreListKafkaTopicRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int MetastoreListKafkaTopicRequest::getPageSize()const
{
	return pageSize_;
}

void MetastoreListKafkaTopicRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string MetastoreListKafkaTopicRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void MetastoreListKafkaTopicRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setCoreParameter("DataSourceId", dataSourceId);
}

std::string MetastoreListKafkaTopicRequest::getTopicName()const
{
	return topicName_;
}

void MetastoreListKafkaTopicRequest::setTopicName(const std::string& topicName)
{
	topicName_ = topicName;
	setCoreParameter("TopicName", topicName);
}

std::string MetastoreListKafkaTopicRequest::getClusterId()const
{
	return clusterId_;
}

void MetastoreListKafkaTopicRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int MetastoreListKafkaTopicRequest::getPageNumber()const
{
	return pageNumber_;
}

void MetastoreListKafkaTopicRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string MetastoreListKafkaTopicRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreListKafkaTopicRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

