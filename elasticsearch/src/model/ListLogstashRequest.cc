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

#include <alibabacloud/elasticsearch/model/ListLogstashRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListLogstashRequest;

ListLogstashRequest::ListLogstashRequest() :
	RoaServiceRequest("elasticsearch", "2017-06-13")
{
	setResourcePath("/openapi/logstashes");
	setMethod(HttpRequest::Method::Get);
}

ListLogstashRequest::~ListLogstashRequest()
{}

std::string ListLogstashRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListLogstashRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListLogstashRequest::getInstanceId()const
{
	return instanceId_;
}

void ListLogstashRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListLogstashRequest::getSize()const
{
	return size_;
}

void ListLogstashRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string ListLogstashRequest::getDescription()const
{
	return description_;
}

void ListLogstashRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

int ListLogstashRequest::getPage()const
{
	return page_;
}

void ListLogstashRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

std::string ListLogstashRequest::getOwnerId()const
{
	return ownerId_;
}

void ListLogstashRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ListLogstashRequest::getVersion()const
{
	return version_;
}

void ListLogstashRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

