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

#include <alibabacloud/dts/model/CreateJobMonitorRuleRequest.h>

using AlibabaCloud::Dts::Model::CreateJobMonitorRuleRequest;

CreateJobMonitorRuleRequest::CreateJobMonitorRuleRequest() :
	RpcServiceRequest("dts", "2020-01-01", "CreateJobMonitorRule")
{
	setMethod(HttpRequest::Method::Post);
}

CreateJobMonitorRuleRequest::~CreateJobMonitorRuleRequest()
{}

std::string CreateJobMonitorRuleRequest::getType()const
{
	return type_;
}

void CreateJobMonitorRuleRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

long CreateJobMonitorRuleRequest::getDelayRuleTime()const
{
	return delayRuleTime_;
}

void CreateJobMonitorRuleRequest::setDelayRuleTime(long delayRuleTime)
{
	delayRuleTime_ = delayRuleTime;
	setParameter("DelayRuleTime", std::to_string(delayRuleTime));
}

std::string CreateJobMonitorRuleRequest::getPhone()const
{
	return phone_;
}

void CreateJobMonitorRuleRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

std::string CreateJobMonitorRuleRequest::getRegionId()const
{
	return regionId_;
}

void CreateJobMonitorRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateJobMonitorRuleRequest::getDtsJobId()const
{
	return dtsJobId_;
}

void CreateJobMonitorRuleRequest::setDtsJobId(const std::string& dtsJobId)
{
	dtsJobId_ = dtsJobId;
	setParameter("DtsJobId", dtsJobId);
}

std::string CreateJobMonitorRuleRequest::getState()const
{
	return state_;
}

void CreateJobMonitorRuleRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

