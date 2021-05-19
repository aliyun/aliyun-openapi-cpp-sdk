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

#include <alibabacloud/scsp/model/GetEntityRouteListRequest.h>

using AlibabaCloud::Scsp::Model::GetEntityRouteListRequest;

GetEntityRouteListRequest::GetEntityRouteListRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "GetEntityRouteList")
{
	setMethod(HttpRequest::Method::Post);
}

GetEntityRouteListRequest::~GetEntityRouteListRequest()
{}

std::string GetEntityRouteListRequest::getInstanceId()const
{
	return instanceId_;
}

void GetEntityRouteListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

int GetEntityRouteListRequest::getPageNo()const
{
	return pageNo_;
}

void GetEntityRouteListRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setBodyParameter("PageNo", std::to_string(pageNo));
}

int GetEntityRouteListRequest::getPageSize()const
{
	return pageSize_;
}

void GetEntityRouteListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string GetEntityRouteListRequest::getEntityName()const
{
	return entityName_;
}

void GetEntityRouteListRequest::setEntityName(const std::string& entityName)
{
	entityName_ = entityName;
	setBodyParameter("EntityName", entityName);
}

std::string GetEntityRouteListRequest::getEntityRelationNumber()const
{
	return entityRelationNumber_;
}

void GetEntityRouteListRequest::setEntityRelationNumber(const std::string& entityRelationNumber)
{
	entityRelationNumber_ = entityRelationNumber;
	setBodyParameter("EntityRelationNumber", entityRelationNumber);
}

