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

#include <alibabacloud/emr/model/ListKafkaReassignRequest.h>

using AlibabaCloud::Emr::Model::ListKafkaReassignRequest;

ListKafkaReassignRequest::ListKafkaReassignRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListKafkaReassign")
{}

ListKafkaReassignRequest::~ListKafkaReassignRequest()
{}

long ListKafkaReassignRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListKafkaReassignRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListKafkaReassignRequest::getTopicId()const
{
	return topicId_;
}

void ListKafkaReassignRequest::setTopicId(const std::string& topicId)
{
	topicId_ = topicId;
	setCoreParameter("TopicId", topicId);
}

std::string ListKafkaReassignRequest::getRegionId()const
{
	return regionId_;
}

void ListKafkaReassignRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ListKafkaReassignRequest::getPageSize()const
{
	return pageSize_;
}

void ListKafkaReassignRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListKafkaReassignRequest::getClusterId()const
{
	return clusterId_;
}

void ListKafkaReassignRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int ListKafkaReassignRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListKafkaReassignRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListKafkaReassignRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListKafkaReassignRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

