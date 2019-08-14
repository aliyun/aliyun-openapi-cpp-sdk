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

#include <alibabacloud/lubancloud/model/QueryGenerateTaskResultRequest.h>

using AlibabaCloud::Lubancloud::Model::QueryGenerateTaskResultRequest;

QueryGenerateTaskResultRequest::QueryGenerateTaskResultRequest() :
	RpcServiceRequest("lubancloud", "2018-05-09", "QueryGenerateTaskResult")
{}

QueryGenerateTaskResultRequest::~QueryGenerateTaskResultRequest()
{}

bool QueryGenerateTaskResultRequest::getSecurity_transport()const
{
	return security_transport_;
}

void QueryGenerateTaskResultRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string QueryGenerateTaskResultRequest::getApp_ip()const
{
	return app_ip_;
}

void QueryGenerateTaskResultRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string QueryGenerateTaskResultRequest::getRegionId()const
{
	return regionId_;
}

void QueryGenerateTaskResultRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string QueryGenerateTaskResultRequest::getRequestId()const
{
	return requestId_;
}

void QueryGenerateTaskResultRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long QueryGenerateTaskResultRequest::getCallerParentId()const
{
	return callerParentId_;
}

void QueryGenerateTaskResultRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string QueryGenerateTaskResultRequest::getCallerType()const
{
	return callerType_;
}

void QueryGenerateTaskResultRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool QueryGenerateTaskResultRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void QueryGenerateTaskResultRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

long QueryGenerateTaskResultRequest::getCallerUid()const
{
	return callerUid_;
}

void QueryGenerateTaskResultRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

long QueryGenerateTaskResultRequest::getTaskId()const
{
	return taskId_;
}

void QueryGenerateTaskResultRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", std::to_string(taskId));
}

