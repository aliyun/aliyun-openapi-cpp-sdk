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

#include <alibabacloud/ivision/model/QuickTestRequest.h>

using AlibabaCloud::Ivision::Model::QuickTestRequest;

QuickTestRequest::QuickTestRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "QuickTest")
{}

QuickTestRequest::~QuickTestRequest()
{}

std::string QuickTestRequest::getDataUrl()const
{
	return dataUrl_;
}

void QuickTestRequest::setDataUrl(const std::string& dataUrl)
{
	dataUrl_ = dataUrl;
	setCoreParameter("DataUrl", dataUrl);
}

std::string QuickTestRequest::getProjectId()const
{
	return projectId_;
}

void QuickTestRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string QuickTestRequest::getShowLog()const
{
	return showLog_;
}

void QuickTestRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

long QuickTestRequest::getOwnerId()const
{
	return ownerId_;
}

void QuickTestRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QuickTestRequest::getIterationId()const
{
	return iterationId_;
}

void QuickTestRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}

