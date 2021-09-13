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

#include <alibabacloud/linkwan/model/UpdateRoamingJoinPermissionRequest.h>

using AlibabaCloud::LinkWAN::Model::UpdateRoamingJoinPermissionRequest;

UpdateRoamingJoinPermissionRequest::UpdateRoamingJoinPermissionRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "UpdateRoamingJoinPermission")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateRoamingJoinPermissionRequest::~UpdateRoamingJoinPermissionRequest()
{}

std::string UpdateRoamingJoinPermissionRequest::getRxDelay()const
{
	return rxDelay_;
}

void UpdateRoamingJoinPermissionRequest::setRxDelay(const std::string& rxDelay)
{
	rxDelay_ = rxDelay;
	setParameter("RxDelay", rxDelay);
}

std::string UpdateRoamingJoinPermissionRequest::getJoinPermissionId()const
{
	return joinPermissionId_;
}

void UpdateRoamingJoinPermissionRequest::setJoinPermissionId(const std::string& joinPermissionId)
{
	joinPermissionId_ = joinPermissionId;
	setParameter("JoinPermissionId", joinPermissionId);
}

std::string UpdateRoamingJoinPermissionRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateRoamingJoinPermissionRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateRoamingJoinPermissionRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateRoamingJoinPermissionRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string UpdateRoamingJoinPermissionRequest::getJoinPermissionName()const
{
	return joinPermissionName_;
}

void UpdateRoamingJoinPermissionRequest::setJoinPermissionName(const std::string& joinPermissionName)
{
	joinPermissionName_ = joinPermissionName;
	setParameter("JoinPermissionName", joinPermissionName);
}

std::string UpdateRoamingJoinPermissionRequest::getDataRate()const
{
	return dataRate_;
}

void UpdateRoamingJoinPermissionRequest::setDataRate(const std::string& dataRate)
{
	dataRate_ = dataRate;
	setParameter("DataRate", dataRate);
}

