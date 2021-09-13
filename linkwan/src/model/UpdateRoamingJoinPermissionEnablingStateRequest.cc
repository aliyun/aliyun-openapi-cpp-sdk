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

#include <alibabacloud/linkwan/model/UpdateRoamingJoinPermissionEnablingStateRequest.h>

using AlibabaCloud::LinkWAN::Model::UpdateRoamingJoinPermissionEnablingStateRequest;

UpdateRoamingJoinPermissionEnablingStateRequest::UpdateRoamingJoinPermissionEnablingStateRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "UpdateRoamingJoinPermissionEnablingState")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateRoamingJoinPermissionEnablingStateRequest::~UpdateRoamingJoinPermissionEnablingStateRequest()
{}

std::string UpdateRoamingJoinPermissionEnablingStateRequest::getJoinPermissionId()const
{
	return joinPermissionId_;
}

void UpdateRoamingJoinPermissionEnablingStateRequest::setJoinPermissionId(const std::string& joinPermissionId)
{
	joinPermissionId_ = joinPermissionId;
	setParameter("JoinPermissionId", joinPermissionId);
}

bool UpdateRoamingJoinPermissionEnablingStateRequest::getEnabled()const
{
	return enabled_;
}

void UpdateRoamingJoinPermissionEnablingStateRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

std::string UpdateRoamingJoinPermissionEnablingStateRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateRoamingJoinPermissionEnablingStateRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateRoamingJoinPermissionEnablingStateRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateRoamingJoinPermissionEnablingStateRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

