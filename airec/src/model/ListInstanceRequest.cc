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

#include <alibabacloud/airec/model/ListInstanceRequest.h>

using AlibabaCloud::Airec::Model::ListInstanceRequest;

ListInstanceRequest::ListInstanceRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances");
	setMethod(HttpRequest::Method::Get);
}

ListInstanceRequest::~ListInstanceRequest()
{}

std::string ListInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void ListInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListInstanceRequest::getSize()const
{
	return size_;
}

void ListInstanceRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string ListInstanceRequest::getName()const
{
	return name_;
}

void ListInstanceRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ListInstanceRequest::getExpiredTime()const
{
	return expiredTime_;
}

void ListInstanceRequest::setExpiredTime(const std::string& expiredTime)
{
	expiredTime_ = expiredTime;
	setParameter("ExpiredTime", expiredTime);
}

int ListInstanceRequest::getPage()const
{
	return page_;
}

void ListInstanceRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

std::string ListInstanceRequest::getStatus()const
{
	return status_;
}

void ListInstanceRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

