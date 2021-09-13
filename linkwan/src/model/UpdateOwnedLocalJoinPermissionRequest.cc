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

#include <alibabacloud/linkwan/model/UpdateOwnedLocalJoinPermissionRequest.h>

using AlibabaCloud::LinkWAN::Model::UpdateOwnedLocalJoinPermissionRequest;

UpdateOwnedLocalJoinPermissionRequest::UpdateOwnedLocalJoinPermissionRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "UpdateOwnedLocalJoinPermission")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateOwnedLocalJoinPermissionRequest::~UpdateOwnedLocalJoinPermissionRequest()
{}

std::string UpdateOwnedLocalJoinPermissionRequest::getRxDelay()const
{
	return rxDelay_;
}

void UpdateOwnedLocalJoinPermissionRequest::setRxDelay(const std::string& rxDelay)
{
	rxDelay_ = rxDelay;
	setParameter("RxDelay", rxDelay);
}

std::string UpdateOwnedLocalJoinPermissionRequest::getJoinPermissionId()const
{
	return joinPermissionId_;
}

void UpdateOwnedLocalJoinPermissionRequest::setJoinPermissionId(const std::string& joinPermissionId)
{
	joinPermissionId_ = joinPermissionId;
	setParameter("JoinPermissionId", joinPermissionId);
}

std::string UpdateOwnedLocalJoinPermissionRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateOwnedLocalJoinPermissionRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateOwnedLocalJoinPermissionRequest::getClassMode()const
{
	return classMode_;
}

void UpdateOwnedLocalJoinPermissionRequest::setClassMode(const std::string& classMode)
{
	classMode_ = classMode;
	setParameter("ClassMode", classMode);
}

long UpdateOwnedLocalJoinPermissionRequest::getFreqBandPlanGroupId()const
{
	return freqBandPlanGroupId_;
}

void UpdateOwnedLocalJoinPermissionRequest::setFreqBandPlanGroupId(long freqBandPlanGroupId)
{
	freqBandPlanGroupId_ = freqBandPlanGroupId;
	setParameter("FreqBandPlanGroupId", std::to_string(freqBandPlanGroupId));
}

std::string UpdateOwnedLocalJoinPermissionRequest::getJoinEui()const
{
	return joinEui_;
}

void UpdateOwnedLocalJoinPermissionRequest::setJoinEui(const std::string& joinEui)
{
	joinEui_ = joinEui;
	setParameter("JoinEui", joinEui);
}

std::string UpdateOwnedLocalJoinPermissionRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateOwnedLocalJoinPermissionRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateOwnedLocalJoinPermissionRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateOwnedLocalJoinPermissionRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string UpdateOwnedLocalJoinPermissionRequest::getJoinPermissionName()const
{
	return joinPermissionName_;
}

void UpdateOwnedLocalJoinPermissionRequest::setJoinPermissionName(const std::string& joinPermissionName)
{
	joinPermissionName_ = joinPermissionName;
	setParameter("JoinPermissionName", joinPermissionName);
}

std::string UpdateOwnedLocalJoinPermissionRequest::getDataRate()const
{
	return dataRate_;
}

void UpdateOwnedLocalJoinPermissionRequest::setDataRate(const std::string& dataRate)
{
	dataRate_ = dataRate;
	setParameter("DataRate", dataRate);
}

