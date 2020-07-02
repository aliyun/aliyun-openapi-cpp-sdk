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

#include <alibabacloud/dataworks-public/model/GetMetaTableLineageRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMetaTableLineageRequest;

GetMetaTableLineageRequest::GetMetaTableLineageRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "GetMetaTableLineage")
{
	setMethod(HttpRequest::Method::Post);
}

GetMetaTableLineageRequest::~GetMetaTableLineageRequest()
{}

std::string GetMetaTableLineageRequest::getTableGuid()const
{
	return tableGuid_;
}

void GetMetaTableLineageRequest::setTableGuid(const std::string& tableGuid)
{
	tableGuid_ = tableGuid;
	setParameter("TableGuid", tableGuid);
}

std::string GetMetaTableLineageRequest::getNextPrimaryKey()const
{
	return nextPrimaryKey_;
}

void GetMetaTableLineageRequest::setNextPrimaryKey(const std::string& nextPrimaryKey)
{
	nextPrimaryKey_ = nextPrimaryKey;
	setParameter("NextPrimaryKey", nextPrimaryKey);
}

int GetMetaTableLineageRequest::getPageSize()const
{
	return pageSize_;
}

void GetMetaTableLineageRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string GetMetaTableLineageRequest::getDirection()const
{
	return direction_;
}

void GetMetaTableLineageRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
}

