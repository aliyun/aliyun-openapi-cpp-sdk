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

#include <alibabacloud/vcs/model/GetDeviceVideoUrlRequest.h>

using AlibabaCloud::Vcs::Model::GetDeviceVideoUrlRequest;

GetDeviceVideoUrlRequest::GetDeviceVideoUrlRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "GetDeviceVideoUrl")
{
	setMethod(HttpRequest::Method::Post);
}

GetDeviceVideoUrlRequest::~GetDeviceVideoUrlRequest()
{}

std::string GetDeviceVideoUrlRequest::getOutProtocol()const
{
	return outProtocol_;
}

void GetDeviceVideoUrlRequest::setOutProtocol(const std::string& outProtocol)
{
	outProtocol_ = outProtocol;
	setBodyParameter("OutProtocol", outProtocol);
}

std::string GetDeviceVideoUrlRequest::getCorpId()const
{
	return corpId_;
}

void GetDeviceVideoUrlRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string GetDeviceVideoUrlRequest::getGbId()const
{
	return gbId_;
}

void GetDeviceVideoUrlRequest::setGbId(const std::string& gbId)
{
	gbId_ = gbId;
	setBodyParameter("GbId", gbId);
}

long GetDeviceVideoUrlRequest::getEndTime()const
{
	return endTime_;
}

void GetDeviceVideoUrlRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", std::to_string(endTime));
}

long GetDeviceVideoUrlRequest::getStartTime()const
{
	return startTime_;
}

void GetDeviceVideoUrlRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", std::to_string(startTime));
}

std::string GetDeviceVideoUrlRequest::getDeviceId()const
{
	return deviceId_;
}

void GetDeviceVideoUrlRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setBodyParameter("DeviceId", deviceId);
}

