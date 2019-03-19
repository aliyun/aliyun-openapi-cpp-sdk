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

#include <alibabacloud/bssopenapi/model/SetUserAlarmThresholdRequest.h>

using AlibabaCloud::BssOpenApi::Model::SetUserAlarmThresholdRequest;

SetUserAlarmThresholdRequest::SetUserAlarmThresholdRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "SetUserAlarmThreshold")
{}

SetUserAlarmThresholdRequest::~SetUserAlarmThresholdRequest()
{}

long SetUserAlarmThresholdRequest::getUid()const
{
	return uid_;
}

void SetUserAlarmThresholdRequest::setUid(long uid)
{
	uid_ = uid;
	setParameter("Uid", std::to_string(uid));
}

std::string SetUserAlarmThresholdRequest::getAlarmType()const
{
	return alarmType_;
}

void SetUserAlarmThresholdRequest::setAlarmType(const std::string& alarmType)
{
	alarmType_ = alarmType;
	setParameter("AlarmType", alarmType);
}

std::string SetUserAlarmThresholdRequest::getAlarmThresholds()const
{
	return alarmThresholds_;
}

void SetUserAlarmThresholdRequest::setAlarmThresholds(const std::string& alarmThresholds)
{
	alarmThresholds_ = alarmThresholds;
	setParameter("AlarmThresholds", alarmThresholds);
}

std::string SetUserAlarmThresholdRequest::getBid()const
{
	return bid_;
}

void SetUserAlarmThresholdRequest::setBid(const std::string& bid)
{
	bid_ = bid;
	setParameter("Bid", bid);
}

