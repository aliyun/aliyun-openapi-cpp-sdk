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

#include <alibabacloud/elasticsearch/model/ListInstanceRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListInstanceRequest;

ListInstanceRequest::ListInstanceRequest() :
	RoaServiceRequest("elasticsearch", "2017-06-13")
{}

ListInstanceRequest::~ListInstanceRequest()
{}

std::string ListInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string ListInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void ListInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

int ListInstanceRequest::getSize()const
{
	return size_;
}

void ListInstanceRequest::setSize(int size)
{
	size_ = size;
	setCoreParameter("Size", std::to_string(size));
}

std::string ListInstanceRequest::getEsVersion()const
{
	return esVersion_;
}

void ListInstanceRequest::setEsVersion(const std::string& esVersion)
{
	esVersion_ = esVersion;
	setCoreParameter("EsVersion", esVersion);
}

std::string ListInstanceRequest::getDescription()const
{
	return description_;
}

void ListInstanceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

int ListInstanceRequest::getPage()const
{
	return page_;
}

void ListInstanceRequest::setPage(int page)
{
	page_ = page;
	setCoreParameter("Page", std::to_string(page));
}

std::string ListInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void ListInstanceRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

