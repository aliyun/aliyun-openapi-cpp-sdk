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

#include <alibabacloud/airec/model/ModifyDataSourceRequest.h>

using AlibabaCloud::Airec::Model::ModifyDataSourceRequest;

ModifyDataSourceRequest::ModifyDataSourceRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/dataSources/[tableName]");
	setMethod(HttpRequest::Method::Put);
}

ModifyDataSourceRequest::~ModifyDataSourceRequest()
{}

std::string ModifyDataSourceRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyDataSourceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyDataSourceRequest::getTableName()const
{
	return tableName_;
}

void ModifyDataSourceRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

