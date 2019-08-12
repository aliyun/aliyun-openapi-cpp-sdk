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

#include <alibabacloud/lubancloud/model/QueryCutoutTaskResultRequest.h>

using AlibabaCloud::Lubancloud::Model::QueryCutoutTaskResultRequest;

QueryCutoutTaskResultRequest::QueryCutoutTaskResultRequest() :
	RpcServiceRequest("lubancloud", "2018-05-09", "QueryCutoutTaskResult")
{}

QueryCutoutTaskResultRequest::~QueryCutoutTaskResultRequest()
{}

bool QueryCutoutTaskResultRequest::getSecurity_transport()const
{
	return security_transport_;
}

void QueryCutoutTaskResultRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string QueryCutoutTaskResultRequest::getApp_ip()const
{
	return app_ip_;
}

void QueryCutoutTaskResultRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string QueryCutoutTaskResultRequest::getRegionId()const
{
	return regionId_;
}

void QueryCutoutTaskResultRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string QueryCutoutTaskResultRequest::getRequestId()const
{
	return requestId_;
}

void QueryCutoutTaskResultRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long QueryCutoutTaskResultRequest::getCallerParentId()const
{
	return callerParentId_;
}

void QueryCutoutTaskResultRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string QueryCutoutTaskResultRequest::getCallerType()const
{
	return callerType_;
}

void QueryCutoutTaskResultRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool QueryCutoutTaskResultRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void QueryCutoutTaskResultRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

long QueryCutoutTaskResultRequest::getCallerUid()const
{
	return callerUid_;
}

void QueryCutoutTaskResultRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

long QueryCutoutTaskResultRequest::getTaskId()const
{
	return taskId_;
}

void QueryCutoutTaskResultRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

