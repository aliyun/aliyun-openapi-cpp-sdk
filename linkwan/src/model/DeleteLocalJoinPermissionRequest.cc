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

#include <alibabacloud/linkwan/model/DeleteLocalJoinPermissionRequest.h>

using AlibabaCloud::LinkWAN::Model::DeleteLocalJoinPermissionRequest;

DeleteLocalJoinPermissionRequest::DeleteLocalJoinPermissionRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "DeleteLocalJoinPermission")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteLocalJoinPermissionRequest::~DeleteLocalJoinPermissionRequest()
{}

std::string DeleteLocalJoinPermissionRequest::getJoinPermissionId()const
{
	return joinPermissionId_;
}

void DeleteLocalJoinPermissionRequest::setJoinPermissionId(const std::string& joinPermissionId)
{
	joinPermissionId_ = joinPermissionId;
	setParameter("JoinPermissionId", joinPermissionId);
}

std::string DeleteLocalJoinPermissionRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteLocalJoinPermissionRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string DeleteLocalJoinPermissionRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteLocalJoinPermissionRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteLocalJoinPermissionRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteLocalJoinPermissionRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

