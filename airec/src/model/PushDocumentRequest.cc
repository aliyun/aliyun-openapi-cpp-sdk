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

#include <alibabacloud/airec/model/PushDocumentRequest.h>

using AlibabaCloud::Airec::Model::PushDocumentRequest;

PushDocumentRequest::PushDocumentRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/tables/[tableName]/actions/bulk");
	setMethod(HttpRequest::Method::Post);
}

PushDocumentRequest::~PushDocumentRequest()
{}

std::string PushDocumentRequest::getInstanceId()const
{
	return instanceId_;
}

void PushDocumentRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string PushDocumentRequest::getTableName()const
{
	return tableName_;
}

void PushDocumentRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

