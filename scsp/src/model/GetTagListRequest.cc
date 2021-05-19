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

#include <alibabacloud/scsp/model/GetTagListRequest.h>

using AlibabaCloud::Scsp::Model::GetTagListRequest;

GetTagListRequest::GetTagListRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "GetTagList")
{
	setMethod(HttpRequest::Method::Post);
}

GetTagListRequest::~GetTagListRequest()
{}

std::string GetTagListRequest::getInstanceId()const
{
	return instanceId_;
}

void GetTagListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string GetTagListRequest::getEntityType()const
{
	return entityType_;
}

void GetTagListRequest::setEntityType(const std::string& entityType)
{
	entityType_ = entityType;
	setBodyParameter("EntityType", entityType);
}

std::string GetTagListRequest::getEntityId()const
{
	return entityId_;
}

void GetTagListRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setBodyParameter("EntityId", entityId);
}

