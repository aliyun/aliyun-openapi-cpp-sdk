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

#include <alibabacloud/ivision/model/CreateTrainDatasFromUrlsRequest.h>

using AlibabaCloud::Ivision::Model::CreateTrainDatasFromUrlsRequest;

CreateTrainDatasFromUrlsRequest::CreateTrainDatasFromUrlsRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateTrainDatasFromUrls")
{}

CreateTrainDatasFromUrlsRequest::~CreateTrainDatasFromUrlsRequest()
{}

std::string CreateTrainDatasFromUrlsRequest::getUrls()const
{
	return urls_;
}

void CreateTrainDatasFromUrlsRequest::setUrls(const std::string& urls)
{
	urls_ = urls;
	setCoreParameter("Urls", urls);
}

std::string CreateTrainDatasFromUrlsRequest::getProjectId()const
{
	return projectId_;
}

void CreateTrainDatasFromUrlsRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string CreateTrainDatasFromUrlsRequest::getShowLog()const
{
	return showLog_;
}

void CreateTrainDatasFromUrlsRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string CreateTrainDatasFromUrlsRequest::getTagId()const
{
	return tagId_;
}

void CreateTrainDatasFromUrlsRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setCoreParameter("TagId", tagId);
}

long CreateTrainDatasFromUrlsRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTrainDatasFromUrlsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

