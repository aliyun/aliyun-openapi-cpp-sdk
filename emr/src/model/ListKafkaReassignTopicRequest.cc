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

#include <alibabacloud/emr/model/ListKafkaReassignTopicRequest.h>

using AlibabaCloud::Emr::Model::ListKafkaReassignTopicRequest;

ListKafkaReassignTopicRequest::ListKafkaReassignTopicRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListKafkaReassignTopic")
{}

ListKafkaReassignTopicRequest::~ListKafkaReassignTopicRequest()
{}

long ListKafkaReassignTopicRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListKafkaReassignTopicRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListKafkaReassignTopicRequest::getRegionId()const
{
	return regionId_;
}

void ListKafkaReassignTopicRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListKafkaReassignTopicRequest::getReassignId()const
{
	return reassignId_;
}

void ListKafkaReassignTopicRequest::setReassignId(const std::string& reassignId)
{
	reassignId_ = reassignId;
	setCoreParameter("ReassignId", reassignId);
}

int ListKafkaReassignTopicRequest::getPageSize()const
{
	return pageSize_;
}

void ListKafkaReassignTopicRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int ListKafkaReassignTopicRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListKafkaReassignTopicRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListKafkaReassignTopicRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListKafkaReassignTopicRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

