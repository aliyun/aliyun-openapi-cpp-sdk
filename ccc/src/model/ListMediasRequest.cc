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

#include <alibabacloud/ccc/model/ListMediasRequest.h>

using AlibabaCloud::CCC::Model::ListMediasRequest;

ListMediasRequest::ListMediasRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListMedias")
{
	setMethod(HttpRequest::Method::Post);
}

ListMediasRequest::~ListMediasRequest()
{}

int ListMediasRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListMediasRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListMediasRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListMediasRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListMediasRequest::getInstanceId()const
{
	return instanceId_;
}

void ListMediasRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListMediasRequest::getPageSize()const
{
	return pageSize_;
}

void ListMediasRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListMediasRequest::getNamePrefix()const
{
	return namePrefix_;
}

void ListMediasRequest::setNamePrefix(const std::string& namePrefix)
{
	namePrefix_ = namePrefix;
	setParameter("NamePrefix", namePrefix);
}

