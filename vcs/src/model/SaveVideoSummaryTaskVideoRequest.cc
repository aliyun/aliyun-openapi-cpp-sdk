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

#include <alibabacloud/vcs/model/SaveVideoSummaryTaskVideoRequest.h>

using AlibabaCloud::Vcs::Model::SaveVideoSummaryTaskVideoRequest;

SaveVideoSummaryTaskVideoRequest::SaveVideoSummaryTaskVideoRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "SaveVideoSummaryTaskVideo")
{
	setMethod(HttpRequest::Method::Post);
}

SaveVideoSummaryTaskVideoRequest::~SaveVideoSummaryTaskVideoRequest()
{}

std::string SaveVideoSummaryTaskVideoRequest::getCorpId()const
{
	return corpId_;
}

void SaveVideoSummaryTaskVideoRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

bool SaveVideoSummaryTaskVideoRequest::getSaveVideo()const
{
	return saveVideo_;
}

void SaveVideoSummaryTaskVideoRequest::setSaveVideo(bool saveVideo)
{
	saveVideo_ = saveVideo;
	setBodyParameter("SaveVideo", saveVideo ? "true" : "false");
}

long SaveVideoSummaryTaskVideoRequest::getTaskId()const
{
	return taskId_;
}

void SaveVideoSummaryTaskVideoRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setBodyParameter("TaskId", std::to_string(taskId));
}

