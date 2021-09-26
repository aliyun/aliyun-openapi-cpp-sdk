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

#include <alibabacloud/vs/model/UpdateRenderingDeviceSpecRequest.h>

using AlibabaCloud::Vs::Model::UpdateRenderingDeviceSpecRequest;

UpdateRenderingDeviceSpecRequest::UpdateRenderingDeviceSpecRequest() :
	RpcServiceRequest("vs", "2018-12-12", "UpdateRenderingDeviceSpec")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateRenderingDeviceSpecRequest::~UpdateRenderingDeviceSpecRequest()
{}

std::string UpdateRenderingDeviceSpecRequest::getDescription()const
{
	return description_;
}

void UpdateRenderingDeviceSpecRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

bool UpdateRenderingDeviceSpecRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void UpdateRenderingDeviceSpecRequest::setEffectiveTime(bool effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setParameter("EffectiveTime", effectiveTime ? "true" : "false");
}

std::string UpdateRenderingDeviceSpecRequest::getShowLog()const
{
	return showLog_;
}

void UpdateRenderingDeviceSpecRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long UpdateRenderingDeviceSpecRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void UpdateRenderingDeviceSpecRequest::setAutoRenewPeriod(long autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int UpdateRenderingDeviceSpecRequest::getPeriod()const
{
	return period_;
}

void UpdateRenderingDeviceSpecRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string UpdateRenderingDeviceSpecRequest::getSpecification()const
{
	return specification_;
}

void UpdateRenderingDeviceSpecRequest::setSpecification(const std::string& specification)
{
	specification_ = specification;
	setParameter("Specification", specification);
}

long UpdateRenderingDeviceSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateRenderingDeviceSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateRenderingDeviceSpecRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void UpdateRenderingDeviceSpecRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

bool UpdateRenderingDeviceSpecRequest::getAutoRenew()const
{
	return autoRenew_;
}

void UpdateRenderingDeviceSpecRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::string UpdateRenderingDeviceSpecRequest::getInstanceIds()const
{
	return instanceIds_;
}

void UpdateRenderingDeviceSpecRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setParameter("InstanceIds", instanceIds);
}

