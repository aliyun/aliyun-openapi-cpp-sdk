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

#include <alibabacloud/linkwan/model/UpdateOwnedLocalJoinPermissionEnablingStateRequest.h>

using AlibabaCloud::LinkWAN::Model::UpdateOwnedLocalJoinPermissionEnablingStateRequest;

UpdateOwnedLocalJoinPermissionEnablingStateRequest::UpdateOwnedLocalJoinPermissionEnablingStateRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "UpdateOwnedLocalJoinPermissionEnablingState")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateOwnedLocalJoinPermissionEnablingStateRequest::~UpdateOwnedLocalJoinPermissionEnablingStateRequest()
{}

std::string UpdateOwnedLocalJoinPermissionEnablingStateRequest::getJoinPermissionId()const
{
	return joinPermissionId_;
}

void UpdateOwnedLocalJoinPermissionEnablingStateRequest::setJoinPermissionId(const std::string& joinPermissionId)
{
	joinPermissionId_ = joinPermissionId;
	setParameter("JoinPermissionId", joinPermissionId);
}

bool UpdateOwnedLocalJoinPermissionEnablingStateRequest::getEnabled()const
{
	return enabled_;
}

void UpdateOwnedLocalJoinPermissionEnablingStateRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

std::string UpdateOwnedLocalJoinPermissionEnablingStateRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateOwnedLocalJoinPermissionEnablingStateRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateOwnedLocalJoinPermissionEnablingStateRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateOwnedLocalJoinPermissionEnablingStateRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateOwnedLocalJoinPermissionEnablingStateRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateOwnedLocalJoinPermissionEnablingStateRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

