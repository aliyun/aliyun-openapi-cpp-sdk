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

#include <alibabacloud/elasticsearch/model/ListKibanaPluginsRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListKibanaPluginsRequest;

ListKibanaPluginsRequest::ListKibanaPluginsRequest() :
	RoaServiceRequest("elasticsearch", "2017-06-13")
{
	setResourcePath("/openapi/instances/[InstanceId]/kibana-plugins");
	setMethod(HttpRequest::Method::Get);
}

ListKibanaPluginsRequest::~ListKibanaPluginsRequest()
{}

std::string ListKibanaPluginsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListKibanaPluginsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListKibanaPluginsRequest::getSize()const
{
	return size_;
}

void ListKibanaPluginsRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string ListKibanaPluginsRequest::getPage()const
{
	return page_;
}

void ListKibanaPluginsRequest::setPage(const std::string& page)
{
	page_ = page;
	setParameter("Page", page);
}

