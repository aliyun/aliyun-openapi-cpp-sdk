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

#include <alibabacloud/trademark/model/QueryMaterialRequest.h>

using AlibabaCloud::Trademark::Model::QueryMaterialRequest;

QueryMaterialRequest::QueryMaterialRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryMaterial")
{
	setMethod(HttpRequest::Method::Post);
}

QueryMaterialRequest::~QueryMaterialRequest()
{}

bool QueryMaterialRequest::getQueryUnconfirmedInfo()const
{
	return queryUnconfirmedInfo_;
}

void QueryMaterialRequest::setQueryUnconfirmedInfo(bool queryUnconfirmedInfo)
{
	queryUnconfirmedInfo_ = queryUnconfirmedInfo;
	setParameter("QueryUnconfirmedInfo", queryUnconfirmedInfo ? "true" : "false");
}

long QueryMaterialRequest::getId()const
{
	return id_;
}

void QueryMaterialRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

