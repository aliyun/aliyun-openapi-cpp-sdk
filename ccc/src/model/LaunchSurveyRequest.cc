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

#include <alibabacloud/ccc/model/LaunchSurveyRequest.h>

using AlibabaCloud::CCC::Model::LaunchSurveyRequest;

LaunchSurveyRequest::LaunchSurveyRequest() :
	RpcServiceRequest("ccc", "2020-07-01", "LaunchSurvey")
{
	setMethod(HttpRequest::Method::Post);
}

LaunchSurveyRequest::~LaunchSurveyRequest()
{}

std::string LaunchSurveyRequest::getContactFlowId()const
{
	return contactFlowId_;
}

void LaunchSurveyRequest::setContactFlowId(const std::string& contactFlowId)
{
	contactFlowId_ = contactFlowId;
	setParameter("ContactFlowId", contactFlowId);
}

std::string LaunchSurveyRequest::getUserId()const
{
	return userId_;
}

void LaunchSurveyRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string LaunchSurveyRequest::getDeviceId()const
{
	return deviceId_;
}

void LaunchSurveyRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

std::string LaunchSurveyRequest::getJobId()const
{
	return jobId_;
}

void LaunchSurveyRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string LaunchSurveyRequest::getInstanceId()const
{
	return instanceId_;
}

void LaunchSurveyRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

