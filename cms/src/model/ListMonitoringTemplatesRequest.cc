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

#include <alibabacloud/cms/model/ListMonitoringTemplatesRequest.h>

using AlibabaCloud::Cms::Model::ListMonitoringTemplatesRequest;

ListMonitoringTemplatesRequest::ListMonitoringTemplatesRequest() :
	RpcServiceRequest("cms", "2018-03-08", "ListMonitoringTemplates")
{
	setMethod(HttpRequest::Method::Post);
}

ListMonitoringTemplatesRequest::~ListMonitoringTemplatesRequest()
{}

bool ListMonitoringTemplatesRequest::getHistory()const
{
	return history_;
}

void ListMonitoringTemplatesRequest::setHistory(bool history)
{
	history_ = history;
	setCoreParameter("History", history ? "true" : "false");
}

long ListMonitoringTemplatesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListMonitoringTemplatesRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

bool ListMonitoringTemplatesRequest::getTotal()const
{
	return total_;
}

void ListMonitoringTemplatesRequest::setTotal(bool total)
{
	total_ = total;
	setCoreParameter("Total", total ? "true" : "false");
}

std::string ListMonitoringTemplatesRequest::getName()const
{
	return name_;
}

void ListMonitoringTemplatesRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long ListMonitoringTemplatesRequest::getPageSize()const
{
	return pageSize_;
}

void ListMonitoringTemplatesRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long ListMonitoringTemplatesRequest::getId()const
{
	return id_;
}

void ListMonitoringTemplatesRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string ListMonitoringTemplatesRequest::getKeyword()const
{
	return keyword_;
}

void ListMonitoringTemplatesRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setCoreParameter("Keyword", keyword);
}

