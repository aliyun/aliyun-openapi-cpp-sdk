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

#include <alibabacloud/scsp/model/GetEntityRouteRequest.h>

using AlibabaCloud::Scsp::Model::GetEntityRouteRequest;

GetEntityRouteRequest::GetEntityRouteRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "GetEntityRoute")
{
	setMethod(HttpRequest::Method::Post);
}

GetEntityRouteRequest::~GetEntityRouteRequest()
{}

std::string GetEntityRouteRequest::getEntityBizCode()const
{
	return entityBizCode_;
}

void GetEntityRouteRequest::setEntityBizCode(const std::string& entityBizCode)
{
	entityBizCode_ = entityBizCode;
	setBodyParameter("EntityBizCode", entityBizCode);
}

std::string GetEntityRouteRequest::getInstanceId()const
{
	return instanceId_;
}

void GetEntityRouteRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string GetEntityRouteRequest::getEntityName()const
{
	return entityName_;
}

void GetEntityRouteRequest::setEntityName(const std::string& entityName)
{
	entityName_ = entityName;
	setBodyParameter("EntityName", entityName);
}

std::string GetEntityRouteRequest::getEntityId()const
{
	return entityId_;
}

void GetEntityRouteRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setBodyParameter("EntityId", entityId);
}

std::string GetEntityRouteRequest::getEntityRelationNumber()const
{
	return entityRelationNumber_;
}

void GetEntityRouteRequest::setEntityRelationNumber(const std::string& entityRelationNumber)
{
	entityRelationNumber_ = entityRelationNumber;
	setBodyParameter("EntityRelationNumber", entityRelationNumber);
}

long GetEntityRouteRequest::getUniqueId()const
{
	return uniqueId_;
}

void GetEntityRouteRequest::setUniqueId(long uniqueId)
{
	uniqueId_ = uniqueId;
	setBodyParameter("UniqueId", std::to_string(uniqueId));
}

