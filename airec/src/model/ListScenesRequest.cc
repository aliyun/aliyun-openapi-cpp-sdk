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

#include <alibabacloud/airec/model/ListScenesRequest.h>

using AlibabaCloud::Airec::Model::ListScenesRequest;

ListScenesRequest::ListScenesRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/scenes");
	setMethod(HttpRequest::Method::Get);
}

ListScenesRequest::~ListScenesRequest()
{}

std::string ListScenesRequest::getInstanceId()const
{
	return instanceId_;
}

void ListScenesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListScenesRequest::getSize()const
{
	return size_;
}

void ListScenesRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string ListScenesRequest::getSceneId()const
{
	return sceneId_;
}

void ListScenesRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", sceneId);
}

int ListScenesRequest::getPage()const
{
	return page_;
}

void ListScenesRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

std::string ListScenesRequest::getStatus()const
{
	return status_;
}

void ListScenesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

