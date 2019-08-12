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

#include <alibabacloud/ehpc/model/ListNodesByQueueRequest.h>

using AlibabaCloud::EHPC::Model::ListNodesByQueueRequest;

ListNodesByQueueRequest::ListNodesByQueueRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ListNodesByQueue")
{}

ListNodesByQueueRequest::~ListNodesByQueueRequest()
{}

std::string ListNodesByQueueRequest::getQueueName()const
{
	return queueName_;
}

void ListNodesByQueueRequest::setQueueName(const std::string& queueName)
{
	queueName_ = queueName;
	setCoreParameter("QueueName", queueName);
}

int ListNodesByQueueRequest::getPageSize()const
{
	return pageSize_;
}

void ListNodesByQueueRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListNodesByQueueRequest::getClusterId()const
{
	return clusterId_;
}

void ListNodesByQueueRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

int ListNodesByQueueRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListNodesByQueueRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListNodesByQueueRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListNodesByQueueRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

