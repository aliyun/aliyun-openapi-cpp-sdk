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

#include <alibabacloud/mopen/model/MoPenQueryCanvasRequest.h>

using AlibabaCloud::MoPen::Model::MoPenQueryCanvasRequest;

MoPenQueryCanvasRequest::MoPenQueryCanvasRequest() :
	RpcServiceRequest("mopen", "2018-02-11", "MoPenQueryCanvas")
{
	setMethod(HttpRequest::Method::Post);
}

MoPenQueryCanvasRequest::~MoPenQueryCanvasRequest()
{}

std::string MoPenQueryCanvasRequest::getDeviceName()const
{
	return deviceName_;
}

void MoPenQueryCanvasRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

std::string MoPenQueryCanvasRequest::getSessionId()const
{
	return sessionId_;
}

void MoPenQueryCanvasRequest::setSessionId(const std::string& sessionId)
{
	sessionId_ = sessionId;
	setBodyParameter("SessionId", sessionId);
}

int MoPenQueryCanvasRequest::getPageId()const
{
	return pageId_;
}

void MoPenQueryCanvasRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setBodyParameter("PageId", std::to_string(pageId));
}

int MoPenQueryCanvasRequest::getStatus()const
{
	return status_;
}

void MoPenQueryCanvasRequest::setStatus(int status)
{
	status_ = status;
	setBodyParameter("Status", std::to_string(status));
}

