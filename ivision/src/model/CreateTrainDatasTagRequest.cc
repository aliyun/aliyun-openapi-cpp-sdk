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

#include <alibabacloud/ivision/model/CreateTrainDatasTagRequest.h>

using AlibabaCloud::Ivision::Model::CreateTrainDatasTagRequest;

CreateTrainDatasTagRequest::CreateTrainDatasTagRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateTrainDatasTag")
{}

CreateTrainDatasTagRequest::~CreateTrainDatasTagRequest()
{}

std::string CreateTrainDatasTagRequest::getDataIds()const
{
	return dataIds_;
}

void CreateTrainDatasTagRequest::setDataIds(const std::string& dataIds)
{
	dataIds_ = dataIds;
	setCoreParameter("DataIds", dataIds);
}

std::string CreateTrainDatasTagRequest::getProjectId()const
{
	return projectId_;
}

void CreateTrainDatasTagRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string CreateTrainDatasTagRequest::getShowLog()const
{
	return showLog_;
}

void CreateTrainDatasTagRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string CreateTrainDatasTagRequest::getTagId()const
{
	return tagId_;
}

void CreateTrainDatasTagRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setCoreParameter("TagId", tagId);
}

long CreateTrainDatasTagRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTrainDatasTagRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

