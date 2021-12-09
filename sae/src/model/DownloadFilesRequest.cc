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

#include <alibabacloud/sae/model/DownloadFilesRequest.h>

using AlibabaCloud::Sae::Model::DownloadFilesRequest;

DownloadFilesRequest::DownloadFilesRequest() :
	RoaServiceRequest("sae", "2019-05-06")
{
	setResourcePath("/pop/v1/sam/app/downloadFiles");
	setMethod(HttpRequest::Method::Post);
}

DownloadFilesRequest::~DownloadFilesRequest()
{}

std::string DownloadFilesRequest::getInstanceId()const
{
	return instanceId_;
}

void DownloadFilesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DownloadFilesRequest::getLocalpath()const
{
	return localpath_;
}

void DownloadFilesRequest::setLocalpath(const std::string& localpath)
{
	localpath_ = localpath;
	setParameter("Localpath", localpath);
}

std::string DownloadFilesRequest::getAppId()const
{
	return appId_;
}

void DownloadFilesRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

