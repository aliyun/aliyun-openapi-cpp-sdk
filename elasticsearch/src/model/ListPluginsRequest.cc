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

#include <alibabacloud/elasticsearch/model/ListPluginsRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListPluginsRequest;

ListPluginsRequest::ListPluginsRequest() :
	RoaServiceRequest("elasticsearch", "2017-06-13")
{}

ListPluginsRequest::~ListPluginsRequest()
{}

std::string ListPluginsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListPluginsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

int ListPluginsRequest::getSize()const
{
	return size_;
}

void ListPluginsRequest::setSize(int size)
{
	size_ = size;
	setCoreParameter("Size", std::to_string(size));
}

std::string ListPluginsRequest::getName()const
{
	return name_;
}

void ListPluginsRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ListPluginsRequest::getPage()const
{
	return page_;
}

void ListPluginsRequest::setPage(const std::string& page)
{
	page_ = page;
	setCoreParameter("Page", page);
}

std::string ListPluginsRequest::getSource()const
{
	return source_;
}

void ListPluginsRequest::setSource(const std::string& source)
{
	source_ = source;
	setCoreParameter("Source", source);
}

