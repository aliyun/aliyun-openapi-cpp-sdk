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

#include <alibabacloud/vcs/model/GetDeviceLiveUrlRequest.h>

using AlibabaCloud::Vcs::Model::GetDeviceLiveUrlRequest;

GetDeviceLiveUrlRequest::GetDeviceLiveUrlRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "GetDeviceLiveUrl")
{
	setMethod(HttpRequest::Method::Post);
}

GetDeviceLiveUrlRequest::~GetDeviceLiveUrlRequest()
{}

std::string GetDeviceLiveUrlRequest::getOutProtocol()const
{
	return outProtocol_;
}

void GetDeviceLiveUrlRequest::setOutProtocol(const std::string& outProtocol)
{
	outProtocol_ = outProtocol;
	setBodyParameter("OutProtocol", outProtocol);
}

int GetDeviceLiveUrlRequest::getStreamType()const
{
	return streamType_;
}

void GetDeviceLiveUrlRequest::setStreamType(int streamType)
{
	streamType_ = streamType;
	setBodyParameter("StreamType", std::to_string(streamType));
}

std::string GetDeviceLiveUrlRequest::getCorpId()const
{
	return corpId_;
}

void GetDeviceLiveUrlRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string GetDeviceLiveUrlRequest::getGbId()const
{
	return gbId_;
}

void GetDeviceLiveUrlRequest::setGbId(const std::string& gbId)
{
	gbId_ = gbId;
	setBodyParameter("GbId", gbId);
}

std::string GetDeviceLiveUrlRequest::getDeviceId()const
{
	return deviceId_;
}

void GetDeviceLiveUrlRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setBodyParameter("DeviceId", deviceId);
}

