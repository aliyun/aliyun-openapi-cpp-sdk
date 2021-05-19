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

#include <alibabacloud/scsp/model/CreateEntityIvrRouteRequest.h>

using AlibabaCloud::Scsp::Model::CreateEntityIvrRouteRequest;

CreateEntityIvrRouteRequest::CreateEntityIvrRouteRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "CreateEntityIvrRoute")
{
	setMethod(HttpRequest::Method::Post);
}

CreateEntityIvrRouteRequest::~CreateEntityIvrRouteRequest()
{}

std::string CreateEntityIvrRouteRequest::getExtInfo()const
{
	return extInfo_;
}

void CreateEntityIvrRouteRequest::setExtInfo(const std::string& extInfo)
{
	extInfo_ = extInfo;
	setBodyParameter("ExtInfo", extInfo);
}

std::string CreateEntityIvrRouteRequest::getDepartmentId()const
{
	return departmentId_;
}

void CreateEntityIvrRouteRequest::setDepartmentId(const std::string& departmentId)
{
	departmentId_ = departmentId;
	setBodyParameter("DepartmentId", departmentId);
}

long CreateEntityIvrRouteRequest::getGroupId()const
{
	return groupId_;
}

void CreateEntityIvrRouteRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setBodyParameter("GroupId", std::to_string(groupId));
}

std::string CreateEntityIvrRouteRequest::getEntityName()const
{
	return entityName_;
}

void CreateEntityIvrRouteRequest::setEntityName(const std::string& entityName)
{
	entityName_ = entityName;
	setBodyParameter("EntityName", entityName);
}

std::string CreateEntityIvrRouteRequest::getEntityId()const
{
	return entityId_;
}

void CreateEntityIvrRouteRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setBodyParameter("EntityId", entityId);
}

std::string CreateEntityIvrRouteRequest::getEntityBizCodeType()const
{
	return entityBizCodeType_;
}

void CreateEntityIvrRouteRequest::setEntityBizCodeType(const std::string& entityBizCodeType)
{
	entityBizCodeType_ = entityBizCodeType;
	setBodyParameter("EntityBizCodeType", entityBizCodeType);
}

std::string CreateEntityIvrRouteRequest::getEntityBizCode()const
{
	return entityBizCode_;
}

void CreateEntityIvrRouteRequest::setEntityBizCode(const std::string& entityBizCode)
{
	entityBizCode_ = entityBizCode;
	setBodyParameter("EntityBizCode", entityBizCode);
}

std::string CreateEntityIvrRouteRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateEntityIvrRouteRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string CreateEntityIvrRouteRequest::getEntityRelationNumber()const
{
	return entityRelationNumber_;
}

void CreateEntityIvrRouteRequest::setEntityRelationNumber(const std::string& entityRelationNumber)
{
	entityRelationNumber_ = entityRelationNumber;
	setBodyParameter("EntityRelationNumber", entityRelationNumber);
}

long CreateEntityIvrRouteRequest::getServiceId()const
{
	return serviceId_;
}

void CreateEntityIvrRouteRequest::setServiceId(long serviceId)
{
	serviceId_ = serviceId;
	setBodyParameter("ServiceId", std::to_string(serviceId));
}

