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

#include <alibabacloud/lubancloud/model/SubmitCutoutTaskRequest.h>

using AlibabaCloud::Lubancloud::Model::SubmitCutoutTaskRequest;

SubmitCutoutTaskRequest::SubmitCutoutTaskRequest() :
	RpcServiceRequest("lubancloud", "2018-05-09", "SubmitCutoutTask")
{}

SubmitCutoutTaskRequest::~SubmitCutoutTaskRequest()
{}

bool SubmitCutoutTaskRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SubmitCutoutTaskRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string SubmitCutoutTaskRequest::getApp_ip()const
{
	return app_ip_;
}

void SubmitCutoutTaskRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string SubmitCutoutTaskRequest::getRegionId()const
{
	return regionId_;
}

void SubmitCutoutTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long SubmitCutoutTaskRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SubmitCutoutTaskRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string SubmitCutoutTaskRequest::getRequestId()const
{
	return requestId_;
}

void SubmitCutoutTaskRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string SubmitCutoutTaskRequest::getCallerType()const
{
	return callerType_;
}

void SubmitCutoutTaskRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool SubmitCutoutTaskRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SubmitCutoutTaskRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

long SubmitCutoutTaskRequest::getCallerUid()const
{
	return callerUid_;
}

void SubmitCutoutTaskRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::vector<std::string> SubmitCutoutTaskRequest::getPictureUrl()const
{
	return pictureUrl_;
}

void SubmitCutoutTaskRequest::setPictureUrl(const std::vector<std::string>& pictureUrl)
{
	pictureUrl_ = pictureUrl;
	for(int i = 0; i!= pictureUrl.size(); i++)
		setCoreParameter("PictureUrl."+ std::to_string(i), std::to_string(pictureUrl.at(i)));
}

