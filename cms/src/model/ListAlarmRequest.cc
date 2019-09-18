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

#include <alibabacloud/cms/model/ListAlarmRequest.h>

using AlibabaCloud::Cms::Model::ListAlarmRequest;

ListAlarmRequest::ListAlarmRequest() :
	RpcServiceRequest("cms", "2018-03-08", "ListAlarm")
{}

ListAlarmRequest::~ListAlarmRequest()
{}

int ListAlarmRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAlarmRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

bool ListAlarmRequest::getIsEnable()const
{
	return isEnable_;
}

void ListAlarmRequest::setIsEnable(bool isEnable)
{
	isEnable_ = isEnable;
	setCoreParameter("IsEnable", isEnable ? "true" : "false");
}

std::string ListAlarmRequest::getName()const
{
	return name_;
}

void ListAlarmRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ListAlarmRequest::get_Namespace()const
{
	return _namespace_;
}

void ListAlarmRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setCoreParameter("_Namespace", _namespace);
}

int ListAlarmRequest::getPageSize()const
{
	return pageSize_;
}

void ListAlarmRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListAlarmRequest::getId()const
{
	return id_;
}

void ListAlarmRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string ListAlarmRequest::getState()const
{
	return state_;
}

void ListAlarmRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", state);
}

std::string ListAlarmRequest::getDimension()const
{
	return dimension_;
}

void ListAlarmRequest::setDimension(const std::string& dimension)
{
	dimension_ = dimension;
	setCoreParameter("Dimension", dimension);
}

