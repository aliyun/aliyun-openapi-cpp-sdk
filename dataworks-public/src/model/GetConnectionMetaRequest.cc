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

#include <alibabacloud/dataworks-public/model/GetConnectionMetaRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetConnectionMetaRequest;

GetConnectionMetaRequest::GetConnectionMetaRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "GetConnectionMeta")
{
	setMethod(HttpRequest::Method::Post);
}

GetConnectionMetaRequest::~GetConnectionMetaRequest()
{}

std::string GetConnectionMetaRequest::getDatasourceName()const
{
	return datasourceName_;
}

void GetConnectionMetaRequest::setDatasourceName(const std::string& datasourceName)
{
	datasourceName_ = datasourceName;
	setParameter("DatasourceName", datasourceName);
}

long GetConnectionMetaRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetConnectionMetaRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

long GetConnectionMetaRequest::getPageSize()const
{
	return pageSize_;
}

void GetConnectionMetaRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string GetConnectionMetaRequest::getEnvType()const
{
	return envType_;
}

void GetConnectionMetaRequest::setEnvType(const std::string& envType)
{
	envType_ = envType;
	setParameter("EnvType", envType);
}

long GetConnectionMetaRequest::getProjectId()const
{
	return projectId_;
}

void GetConnectionMetaRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

