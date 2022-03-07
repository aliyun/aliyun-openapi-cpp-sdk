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

#include <alibabacloud/voicenavigator/model/ListSandBoxWhileListRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ListSandBoxWhileListRequest;

ListSandBoxWhileListRequest::ListSandBoxWhileListRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "ListSandBoxWhileList")
{
	setMethod(HttpRequest::Method::Post);
}

ListSandBoxWhileListRequest::~ListSandBoxWhileListRequest()
{}

std::string ListSandBoxWhileListRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void ListSandBoxWhileListRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

int ListSandBoxWhileListRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListSandBoxWhileListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListSandBoxWhileListRequest::getInstanceId()const
{
	return instanceId_;
}

void ListSandBoxWhileListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListSandBoxWhileListRequest::getName()const
{
	return name_;
}

void ListSandBoxWhileListRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ListSandBoxWhileListRequest::getPageSize()const
{
	return pageSize_;
}

void ListSandBoxWhileListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

