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

#include <alibabacloud/iot/model/ListTaskRequest.h>

using AlibabaCloud::Iot::Model::ListTaskRequest;

ListTaskRequest::ListTaskRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListTask")
{
	setMethod(HttpRequest::Method::Post);
}

ListTaskRequest::~ListTaskRequest()
{}

std::string ListTaskRequest::getJobId()const
{
	return jobId_;
}

void ListTaskRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string ListTaskRequest::getNextToken()const
{
	return nextToken_;
}

void ListTaskRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListTaskRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListTaskRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int ListTaskRequest::getLimit()const
{
	return limit_;
}

void ListTaskRequest::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::string ListTaskRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListTaskRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListTaskRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListTaskRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListTaskRequest::getDevice()const
{
	return device_;
}

void ListTaskRequest::setDevice(const std::string& device)
{
	device_ = device;
	setParameter("Device", device);
}

std::string ListTaskRequest::getStatus()const
{
	return status_;
}

void ListTaskRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

