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

#include <alibabacloud/linkwan/model/GetOwnedJoinPermissionRequest.h>

using AlibabaCloud::LinkWAN::Model::GetOwnedJoinPermissionRequest;

GetOwnedJoinPermissionRequest::GetOwnedJoinPermissionRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "GetOwnedJoinPermission")
{
	setMethod(HttpRequest::Method::Post);
}

GetOwnedJoinPermissionRequest::~GetOwnedJoinPermissionRequest()
{}

std::string GetOwnedJoinPermissionRequest::getJoinPermissionId()const
{
	return joinPermissionId_;
}

void GetOwnedJoinPermissionRequest::setJoinPermissionId(const std::string& joinPermissionId)
{
	joinPermissionId_ = joinPermissionId;
	setParameter("JoinPermissionId", joinPermissionId);
}

std::string GetOwnedJoinPermissionRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetOwnedJoinPermissionRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string GetOwnedJoinPermissionRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetOwnedJoinPermissionRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetOwnedJoinPermissionRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetOwnedJoinPermissionRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

