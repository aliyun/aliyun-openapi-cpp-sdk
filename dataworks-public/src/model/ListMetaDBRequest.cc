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

#include <alibabacloud/dataworks-public/model/ListMetaDBRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListMetaDBRequest;

ListMetaDBRequest::ListMetaDBRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "ListMetaDB")
{
	setMethod(HttpRequest::Method::Get);
}

ListMetaDBRequest::~ListMetaDBRequest()
{}

std::string ListMetaDBRequest::getDataSourceType()const
{
	return dataSourceType_;
}

void ListMetaDBRequest::setDataSourceType(const std::string& dataSourceType)
{
	dataSourceType_ = dataSourceType;
	setParameter("DataSourceType", dataSourceType);
}

int ListMetaDBRequest::getPageSize()const
{
	return pageSize_;
}

void ListMetaDBRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListMetaDBRequest::getPageNum()const
{
	return pageNum_;
}

void ListMetaDBRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

long ListMetaDBRequest::getProjectId()const
{
	return projectId_;
}

void ListMetaDBRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

