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

#include <alibabacloud/emr/model/ListFlowJobRequest.h>

using AlibabaCloud::Emr::Model::ListFlowJobRequest;

ListFlowJobRequest::ListFlowJobRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlowJob")
{
	setMethod(HttpRequest::Method::Post);
}

ListFlowJobRequest::~ListFlowJobRequest()
{}

std::string ListFlowJobRequest::getType()const
{
	return type_;
}

void ListFlowJobRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

int ListFlowJobRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFlowJobRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListFlowJobRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListFlowJobRequest::getName()const
{
	return name_;
}

void ListFlowJobRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ListFlowJobRequest::getPageSize()const
{
	return pageSize_;
}

void ListFlowJobRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListFlowJobRequest::getId()const
{
	return id_;
}

void ListFlowJobRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

bool ListFlowJobRequest::getAdhoc()const
{
	return adhoc_;
}

void ListFlowJobRequest::setAdhoc(bool adhoc)
{
	adhoc_ = adhoc;
	setParameter("Adhoc", adhoc ? "true" : "false");
}

std::string ListFlowJobRequest::getProjectId()const
{
	return projectId_;
}

void ListFlowJobRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

