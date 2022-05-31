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

#include <alibabacloud/cloudesl/model/CheckServiceLinkedRoleForDeletingRequest.h>

using AlibabaCloud::Cloudesl::Model::CheckServiceLinkedRoleForDeletingRequest;

CheckServiceLinkedRoleForDeletingRequest::CheckServiceLinkedRoleForDeletingRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "CheckServiceLinkedRoleForDeleting")
{
	setMethod(HttpRequest::Method::Post);
}

CheckServiceLinkedRoleForDeletingRequest::~CheckServiceLinkedRoleForDeletingRequest()
{}

std::string CheckServiceLinkedRoleForDeletingRequest::getExtraParams()const
{
	return extraParams_;
}

void CheckServiceLinkedRoleForDeletingRequest::setExtraParams(const std::string& extraParams)
{
	extraParams_ = extraParams;
	setBodyParameter("ExtraParams", extraParams);
}

std::string CheckServiceLinkedRoleForDeletingRequest::getDeletionTaskId()const
{
	return deletionTaskId_;
}

void CheckServiceLinkedRoleForDeletingRequest::setDeletionTaskId(const std::string& deletionTaskId)
{
	deletionTaskId_ = deletionTaskId;
	setParameter("DeletionTaskId", deletionTaskId);
}

std::string CheckServiceLinkedRoleForDeletingRequest::getServiceName()const
{
	return serviceName_;
}

void CheckServiceLinkedRoleForDeletingRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

long CheckServiceLinkedRoleForDeletingRequest::getOwnerId()const
{
	return ownerId_;
}

void CheckServiceLinkedRoleForDeletingRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CheckServiceLinkedRoleForDeletingRequest::getSPIRegionId()const
{
	return sPIRegionId_;
}

void CheckServiceLinkedRoleForDeletingRequest::setSPIRegionId(const std::string& sPIRegionId)
{
	sPIRegionId_ = sPIRegionId;
	setParameter("SPIRegionId", sPIRegionId);
}

std::string CheckServiceLinkedRoleForDeletingRequest::getRoleArn()const
{
	return roleArn_;
}

void CheckServiceLinkedRoleForDeletingRequest::setRoleArn(const std::string& roleArn)
{
	roleArn_ = roleArn;
	setParameter("RoleArn", roleArn);
}

