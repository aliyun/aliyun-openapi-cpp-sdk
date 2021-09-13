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

#include <alibabacloud/linkwan/model/CreateCustomLocalJoinPermissionRequest.h>

using AlibabaCloud::LinkWAN::Model::CreateCustomLocalJoinPermissionRequest;

CreateCustomLocalJoinPermissionRequest::CreateCustomLocalJoinPermissionRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "CreateCustomLocalJoinPermission")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCustomLocalJoinPermissionRequest::~CreateCustomLocalJoinPermissionRequest()
{}

std::string CreateCustomLocalJoinPermissionRequest::getClassMode()const
{
	return classMode_;
}

void CreateCustomLocalJoinPermissionRequest::setClassMode(const std::string& classMode)
{
	classMode_ = classMode;
	setParameter("ClassMode", classMode);
}

long CreateCustomLocalJoinPermissionRequest::getFreqBandPlanGroupId()const
{
	return freqBandPlanGroupId_;
}

void CreateCustomLocalJoinPermissionRequest::setFreqBandPlanGroupId(long freqBandPlanGroupId)
{
	freqBandPlanGroupId_ = freqBandPlanGroupId;
	setParameter("FreqBandPlanGroupId", std::to_string(freqBandPlanGroupId));
}

std::string CreateCustomLocalJoinPermissionRequest::getJoinEui()const
{
	return joinEui_;
}

void CreateCustomLocalJoinPermissionRequest::setJoinEui(const std::string& joinEui)
{
	joinEui_ = joinEui;
	setParameter("JoinEui", joinEui);
}

std::string CreateCustomLocalJoinPermissionRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateCustomLocalJoinPermissionRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateCustomLocalJoinPermissionRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateCustomLocalJoinPermissionRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string CreateCustomLocalJoinPermissionRequest::getJoinPermissionName()const
{
	return joinPermissionName_;
}

void CreateCustomLocalJoinPermissionRequest::setJoinPermissionName(const std::string& joinPermissionName)
{
	joinPermissionName_ = joinPermissionName;
	setParameter("JoinPermissionName", joinPermissionName);
}

