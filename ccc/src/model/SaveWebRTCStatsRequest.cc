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

#include <alibabacloud/ccc/model/SaveWebRTCStatsRequest.h>

using AlibabaCloud::CCC::Model::SaveWebRTCStatsRequest;

SaveWebRTCStatsRequest::SaveWebRTCStatsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "SaveWebRTCStats")
{}

SaveWebRTCStatsRequest::~SaveWebRTCStatsRequest()
{}

std::string SaveWebRTCStatsRequest::getCallId()const
{
	return callId_;
}

void SaveWebRTCStatsRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setCoreParameter("CallId", callId);
}

std::string SaveWebRTCStatsRequest::getUid()const
{
	return uid_;
}

void SaveWebRTCStatsRequest::setUid(const std::string& uid)
{
	uid_ = uid;
	setCoreParameter("Uid", uid);
}

long SaveWebRTCStatsRequest::getRecordTime()const
{
	return recordTime_;
}

void SaveWebRTCStatsRequest::setRecordTime(long recordTime)
{
	recordTime_ = recordTime;
	setCoreParameter("RecordTime", std::to_string(recordTime));
}

std::string SaveWebRTCStatsRequest::getInstanceId()const
{
	return instanceId_;
}

void SaveWebRTCStatsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string SaveWebRTCStatsRequest::getStats()const
{
	return stats_;
}

void SaveWebRTCStatsRequest::setStats(const std::string& stats)
{
	stats_ = stats;
	setCoreParameter("Stats", stats);
}

long SaveWebRTCStatsRequest::getCallStartTime()const
{
	return callStartTime_;
}

void SaveWebRTCStatsRequest::setCallStartTime(long callStartTime)
{
	callStartTime_ = callStartTime;
	setCoreParameter("CallStartTime", std::to_string(callStartTime));
}

std::string SaveWebRTCStatsRequest::getTenantId()const
{
	return tenantId_;
}

void SaveWebRTCStatsRequest::setTenantId(const std::string& tenantId)
{
	tenantId_ = tenantId;
	setCoreParameter("TenantId", tenantId);
}

std::string SaveWebRTCStatsRequest::getCalleeNumber()const
{
	return calleeNumber_;
}

void SaveWebRTCStatsRequest::setCalleeNumber(const std::string& calleeNumber)
{
	calleeNumber_ = calleeNumber;
	setCoreParameter("CalleeNumber", calleeNumber);
}

std::string SaveWebRTCStatsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveWebRTCStatsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SaveWebRTCStatsRequest::getCallerNumber()const
{
	return callerNumber_;
}

void SaveWebRTCStatsRequest::setCallerNumber(const std::string& callerNumber)
{
	callerNumber_ = callerNumber;
	setCoreParameter("CallerNumber", callerNumber);
}

