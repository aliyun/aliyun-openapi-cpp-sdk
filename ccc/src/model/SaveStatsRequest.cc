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

#include <alibabacloud/ccc/model/SaveStatsRequest.h>

using AlibabaCloud::CCC::Model::SaveStatsRequest;

SaveStatsRequest::SaveStatsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "SaveStats")
{}

SaveStatsRequest::~SaveStatsRequest()
{}

std::string SaveStatsRequest::getCallId()const
{
	return callId_;
}

void SaveStatsRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setCoreParameter("CallId", callId);
}

std::string SaveStatsRequest::getUid()const
{
	return uid_;
}

void SaveStatsRequest::setUid(const std::string& uid)
{
	uid_ = uid;
	setCoreParameter("Uid", uid);
}

long SaveStatsRequest::getRecordTime()const
{
	return recordTime_;
}

void SaveStatsRequest::setRecordTime(long recordTime)
{
	recordTime_ = recordTime;
	setCoreParameter("RecordTime", std::to_string(recordTime));
}

std::string SaveStatsRequest::getInstanceId()const
{
	return instanceId_;
}

void SaveStatsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string SaveStatsRequest::getStats()const
{
	return stats_;
}

void SaveStatsRequest::setStats(const std::string& stats)
{
	stats_ = stats;
	setCoreParameter("Stats", stats);
}

long SaveStatsRequest::getCallStartTime()const
{
	return callStartTime_;
}

void SaveStatsRequest::setCallStartTime(long callStartTime)
{
	callStartTime_ = callStartTime;
	setCoreParameter("CallStartTime", std::to_string(callStartTime));
}

std::string SaveStatsRequest::getTenantId()const
{
	return tenantId_;
}

void SaveStatsRequest::setTenantId(const std::string& tenantId)
{
	tenantId_ = tenantId;
	setCoreParameter("TenantId", tenantId);
}

std::string SaveStatsRequest::getCalleeNumber()const
{
	return calleeNumber_;
}

void SaveStatsRequest::setCalleeNumber(const std::string& calleeNumber)
{
	calleeNumber_ = calleeNumber;
	setCoreParameter("CalleeNumber", calleeNumber);
}

std::string SaveStatsRequest::getCallerNumber()const
{
	return callerNumber_;
}

void SaveStatsRequest::setCallerNumber(const std::string& callerNumber)
{
	callerNumber_ = callerNumber;
	setCoreParameter("CallerNumber", callerNumber);
}

