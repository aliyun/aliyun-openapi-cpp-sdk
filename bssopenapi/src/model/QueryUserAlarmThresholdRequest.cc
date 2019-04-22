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

#include <alibabacloud/bssopenapi/model/QueryUserAlarmThresholdRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryUserAlarmThresholdRequest;

QueryUserAlarmThresholdRequest::QueryUserAlarmThresholdRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryUserAlarmThreshold")
{}

QueryUserAlarmThresholdRequest::~QueryUserAlarmThresholdRequest()
{}

long QueryUserAlarmThresholdRequest::getUid()const
{
	return uid_;
}

void QueryUserAlarmThresholdRequest::setUid(long uid)
{
	uid_ = uid;
	setCoreParameter("Uid", std::to_string(uid));
}

std::string QueryUserAlarmThresholdRequest::getAlarmType()const
{
	return alarmType_;
}

void QueryUserAlarmThresholdRequest::setAlarmType(const std::string& alarmType)
{
	alarmType_ = alarmType;
	setCoreParameter("AlarmType", alarmType);
}

std::string QueryUserAlarmThresholdRequest::getAlarmThresholds()const
{
	return alarmThresholds_;
}

void QueryUserAlarmThresholdRequest::setAlarmThresholds(const std::string& alarmThresholds)
{
	alarmThresholds_ = alarmThresholds;
	setCoreParameter("AlarmThresholds", alarmThresholds);
}

std::string QueryUserAlarmThresholdRequest::getBid()const
{
	return bid_;
}

void QueryUserAlarmThresholdRequest::setBid(const std::string& bid)
{
	bid_ = bid;
	setCoreParameter("Bid", bid);
}

