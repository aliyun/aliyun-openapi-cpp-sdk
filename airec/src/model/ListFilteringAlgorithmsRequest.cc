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

#include <alibabacloud/airec/model/ListFilteringAlgorithmsRequest.h>

using AlibabaCloud::Airec::Model::ListFilteringAlgorithmsRequest;

ListFilteringAlgorithmsRequest::ListFilteringAlgorithmsRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/filtering-algorithms");
	setMethod(HttpRequest::Method::Get);
}

ListFilteringAlgorithmsRequest::~ListFilteringAlgorithmsRequest()
{}

std::string ListFilteringAlgorithmsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListFilteringAlgorithmsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListFilteringAlgorithmsRequest::getSize()const
{
	return size_;
}

void ListFilteringAlgorithmsRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

int ListFilteringAlgorithmsRequest::getPage()const
{
	return page_;
}

void ListFilteringAlgorithmsRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

std::string ListFilteringAlgorithmsRequest::getStatus()const
{
	return status_;
}

void ListFilteringAlgorithmsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

std::string ListFilteringAlgorithmsRequest::getAlgorithmId()const
{
	return algorithmId_;
}

void ListFilteringAlgorithmsRequest::setAlgorithmId(const std::string& algorithmId)
{
	algorithmId_ = algorithmId;
	setParameter("AlgorithmId", algorithmId);
}

