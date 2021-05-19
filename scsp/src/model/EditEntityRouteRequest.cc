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

#include <alibabacloud/scsp/model/EditEntityRouteRequest.h>

using AlibabaCloud::Scsp::Model::EditEntityRouteRequest;

EditEntityRouteRequest::EditEntityRouteRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "EditEntityRoute")
{
	setMethod(HttpRequest::Method::Post);
}

EditEntityRouteRequest::~EditEntityRouteRequest()
{}

std::string EditEntityRouteRequest::getExtInfo()const
{
	return extInfo_;
}

void EditEntityRouteRequest::setExtInfo(const std::string& extInfo)
{
	extInfo_ = extInfo;
	setBodyParameter("ExtInfo", extInfo);
}

std::string EditEntityRouteRequest::getDepartmentId()const
{
	return departmentId_;
}

void EditEntityRouteRequest::setDepartmentId(const std::string& departmentId)
{
	departmentId_ = departmentId;
	setBodyParameter("DepartmentId", departmentId);
}

long EditEntityRouteRequest::getGroupId()const
{
	return groupId_;
}

void EditEntityRouteRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setBodyParameter("GroupId", std::to_string(groupId));
}

std::string EditEntityRouteRequest::getEntityName()const
{
	return entityName_;
}

void EditEntityRouteRequest::setEntityName(const std::string& entityName)
{
	entityName_ = entityName;
	setBodyParameter("EntityName", entityName);
}

std::string EditEntityRouteRequest::getEntityId()const
{
	return entityId_;
}

void EditEntityRouteRequest::setEntityId(const std::string& entityId)
{
	entityId_ = entityId;
	setBodyParameter("EntityId", entityId);
}

std::string EditEntityRouteRequest::getEntityBizCodeType()const
{
	return entityBizCodeType_;
}

void EditEntityRouteRequest::setEntityBizCodeType(const std::string& entityBizCodeType)
{
	entityBizCodeType_ = entityBizCodeType;
	setBodyParameter("EntityBizCodeType", entityBizCodeType);
}

std::string EditEntityRouteRequest::getEntityBizCode()const
{
	return entityBizCode_;
}

void EditEntityRouteRequest::setEntityBizCode(const std::string& entityBizCode)
{
	entityBizCode_ = entityBizCode;
	setBodyParameter("EntityBizCode", entityBizCode);
}

std::string EditEntityRouteRequest::getInstanceId()const
{
	return instanceId_;
}

void EditEntityRouteRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string EditEntityRouteRequest::getEntityRelationNumber()const
{
	return entityRelationNumber_;
}

void EditEntityRouteRequest::setEntityRelationNumber(const std::string& entityRelationNumber)
{
	entityRelationNumber_ = entityRelationNumber;
	setBodyParameter("EntityRelationNumber", entityRelationNumber);
}

long EditEntityRouteRequest::getServiceId()const
{
	return serviceId_;
}

void EditEntityRouteRequest::setServiceId(long serviceId)
{
	serviceId_ = serviceId;
	setBodyParameter("ServiceId", std::to_string(serviceId));
}

long EditEntityRouteRequest::getUniqueId()const
{
	return uniqueId_;
}

void EditEntityRouteRequest::setUniqueId(long uniqueId)
{
	uniqueId_ = uniqueId;
	setBodyParameter("UniqueId", std::to_string(uniqueId));
}

