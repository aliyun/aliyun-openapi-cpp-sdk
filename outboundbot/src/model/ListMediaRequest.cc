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

#include <alibabacloud/outboundbot/model/ListMediaRequest.h>

using AlibabaCloud::OutboundBot::Model::ListMediaRequest;

ListMediaRequest::ListMediaRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "ListMedia")
{
	setMethod(HttpRequest::Method::Post);
}

ListMediaRequest::~ListMediaRequest()
{}

int ListMediaRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListMediaRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListMediaRequest::getInstanceId()const
{
	return instanceId_;
}

void ListMediaRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListMediaRequest::getPageSize()const
{
	return pageSize_;
}

void ListMediaRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListMediaRequest::getNamePrefix()const
{
	return namePrefix_;
}

void ListMediaRequest::setNamePrefix(const std::string& namePrefix)
{
	namePrefix_ = namePrefix;
	setParameter("NamePrefix", namePrefix);
}

