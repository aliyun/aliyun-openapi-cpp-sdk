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

#include <alibabacloud/linkwan/model/ApplyRoamingJoinPermissionRequest.h>

using AlibabaCloud::LinkWAN::Model::ApplyRoamingJoinPermissionRequest;

ApplyRoamingJoinPermissionRequest::ApplyRoamingJoinPermissionRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ApplyRoamingJoinPermission")
{
	setMethod(HttpRequest::Method::Post);
}

ApplyRoamingJoinPermissionRequest::~ApplyRoamingJoinPermissionRequest()
{}

long ApplyRoamingJoinPermissionRequest::getRxDelay()const
{
	return rxDelay_;
}

void ApplyRoamingJoinPermissionRequest::setRxDelay(long rxDelay)
{
	rxDelay_ = rxDelay;
	setParameter("RxDelay", std::to_string(rxDelay));
}

std::string ApplyRoamingJoinPermissionRequest::getClassMode()const
{
	return classMode_;
}

void ApplyRoamingJoinPermissionRequest::setClassMode(const std::string& classMode)
{
	classMode_ = classMode;
	setParameter("ClassMode", classMode);
}

long ApplyRoamingJoinPermissionRequest::getFreqBandPlanGroupId()const
{
	return freqBandPlanGroupId_;
}

void ApplyRoamingJoinPermissionRequest::setFreqBandPlanGroupId(long freqBandPlanGroupId)
{
	freqBandPlanGroupId_ = freqBandPlanGroupId;
	setParameter("FreqBandPlanGroupId", std::to_string(freqBandPlanGroupId));
}

std::string ApplyRoamingJoinPermissionRequest::getApiProduct()const
{
	return apiProduct_;
}

void ApplyRoamingJoinPermissionRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ApplyRoamingJoinPermissionRequest::getApiRevision()const
{
	return apiRevision_;
}

void ApplyRoamingJoinPermissionRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ApplyRoamingJoinPermissionRequest::getJoinPermissionName()const
{
	return joinPermissionName_;
}

void ApplyRoamingJoinPermissionRequest::setJoinPermissionName(const std::string& joinPermissionName)
{
	joinPermissionName_ = joinPermissionName;
	setParameter("JoinPermissionName", joinPermissionName);
}

long ApplyRoamingJoinPermissionRequest::getDataRate()const
{
	return dataRate_;
}

void ApplyRoamingJoinPermissionRequest::setDataRate(long dataRate)
{
	dataRate_ = dataRate;
	setParameter("DataRate", std::to_string(dataRate));
}

