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

#include <alibabacloud/emr/model/ListFlowCategoryRequest.h>

using AlibabaCloud::Emr::Model::ListFlowCategoryRequest;

ListFlowCategoryRequest::ListFlowCategoryRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlowCategory")
{
	setMethod(HttpRequest::Method::Post);
}

ListFlowCategoryRequest::~ListFlowCategoryRequest()
{}

std::string ListFlowCategoryRequest::getParentId()const
{
	return parentId_;
}

void ListFlowCategoryRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setParameter("ParentId", parentId);
}

int ListFlowCategoryRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFlowCategoryRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListFlowCategoryRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowCategoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool ListFlowCategoryRequest::getRoot()const
{
	return root_;
}

void ListFlowCategoryRequest::setRoot(bool root)
{
	root_ = root;
	setParameter("Root", root ? "true" : "false");
}

int ListFlowCategoryRequest::getPageSize()const
{
	return pageSize_;
}

void ListFlowCategoryRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListFlowCategoryRequest::getProjectId()const
{
	return projectId_;
}

void ListFlowCategoryRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

