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

#include <alibabacloud/scsp/model/GetEntityTagRelationRequest.h>

using AlibabaCloud::Scsp::Model::GetEntityTagRelationRequest;

GetEntityTagRelationRequest::GetEntityTagRelationRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "GetEntityTagRelation")
{
	setMethod(HttpRequest::Method::Post);
}

GetEntityTagRelationRequest::~GetEntityTagRelationRequest()
{}

std::string GetEntityTagRelationRequest::getInstanceId()const
{
	return instanceId_;
}

void GetEntityTagRelationRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string GetEntityTagRelationRequest::getEntityType()const
{
	return entityType_;
}

void GetEntityTagRelationRequest::setEntityType(const std::string& entityType)
{
	entityType_ = entityType;
	setBodyParameter("EntityType", entityType);
}

std::string GetEntityTagRelationRequest::getEntityId()const
{
	return entityId_;
}

void GetEntityTagRelationRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setBodyParameter("EntityId", entityId);
}

