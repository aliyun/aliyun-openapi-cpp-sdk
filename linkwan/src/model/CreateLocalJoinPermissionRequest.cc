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

#include <alibabacloud/linkwan/model/CreateLocalJoinPermissionRequest.h>

using AlibabaCloud::LinkWAN::Model::CreateLocalJoinPermissionRequest;

CreateLocalJoinPermissionRequest::CreateLocalJoinPermissionRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "CreateLocalJoinPermission")
{
	setMethod(HttpRequest::Method::Post);
}

CreateLocalJoinPermissionRequest::~CreateLocalJoinPermissionRequest()
{}

long CreateLocalJoinPermissionRequest::getRxDelay()const
{
	return rxDelay_;
}

void CreateLocalJoinPermissionRequest::setRxDelay(long rxDelay)
{
	rxDelay_ = rxDelay;
	setParameter("RxDelay", std::to_string(rxDelay));
}

std::string CreateLocalJoinPermissionRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateLocalJoinPermissionRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

bool CreateLocalJoinPermissionRequest::getUseDefaultJoinEui()const
{
	return useDefaultJoinEui_;
}

void CreateLocalJoinPermissionRequest::setUseDefaultJoinEui(bool useDefaultJoinEui)
{
	useDefaultJoinEui_ = useDefaultJoinEui;
	setParameter("UseDefaultJoinEui", useDefaultJoinEui ? "true" : "false");
}

std::string CreateLocalJoinPermissionRequest::getClassMode()const
{
	return classMode_;
}

void CreateLocalJoinPermissionRequest::setClassMode(const std::string& classMode)
{
	classMode_ = classMode;
	setParameter("ClassMode", classMode);
}

long CreateLocalJoinPermissionRequest::getFreqBandPlanGroupId()const
{
	return freqBandPlanGroupId_;
}

void CreateLocalJoinPermissionRequest::setFreqBandPlanGroupId(long freqBandPlanGroupId)
{
	freqBandPlanGroupId_ = freqBandPlanGroupId;
	setParameter("FreqBandPlanGroupId", std::to_string(freqBandPlanGroupId));
}

std::string CreateLocalJoinPermissionRequest::getJoinEui()const
{
	return joinEui_;
}

void CreateLocalJoinPermissionRequest::setJoinEui(const std::string& joinEui)
{
	joinEui_ = joinEui;
	setParameter("JoinEui", joinEui);
}

std::string CreateLocalJoinPermissionRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateLocalJoinPermissionRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateLocalJoinPermissionRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateLocalJoinPermissionRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string CreateLocalJoinPermissionRequest::getJoinPermissionName()const
{
	return joinPermissionName_;
}

void CreateLocalJoinPermissionRequest::setJoinPermissionName(const std::string& joinPermissionName)
{
	joinPermissionName_ = joinPermissionName;
	setParameter("JoinPermissionName", joinPermissionName);
}

long CreateLocalJoinPermissionRequest::getDataRate()const
{
	return dataRate_;
}

void CreateLocalJoinPermissionRequest::setDataRate(long dataRate)
{
	dataRate_ = dataRate;
	setParameter("DataRate", std::to_string(dataRate));
}

