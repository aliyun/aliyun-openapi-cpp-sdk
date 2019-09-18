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

#include <alibabacloud/ivision/model/CreateTrainDatasFromPredictionRequest.h>

using AlibabaCloud::Ivision::Model::CreateTrainDatasFromPredictionRequest;

CreateTrainDatasFromPredictionRequest::CreateTrainDatasFromPredictionRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateTrainDatasFromPrediction")
{}

CreateTrainDatasFromPredictionRequest::~CreateTrainDatasFromPredictionRequest()
{}

std::string CreateTrainDatasFromPredictionRequest::getDataIds()const
{
	return dataIds_;
}

void CreateTrainDatasFromPredictionRequest::setDataIds(const std::string& dataIds)
{
	dataIds_ = dataIds;
	setCoreParameter("DataIds", dataIds);
}

std::string CreateTrainDatasFromPredictionRequest::getProjectId()const
{
	return projectId_;
}

void CreateTrainDatasFromPredictionRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string CreateTrainDatasFromPredictionRequest::getShowLog()const
{
	return showLog_;
}

void CreateTrainDatasFromPredictionRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string CreateTrainDatasFromPredictionRequest::getTagId()const
{
	return tagId_;
}

void CreateTrainDatasFromPredictionRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setCoreParameter("TagId", tagId);
}

long CreateTrainDatasFromPredictionRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTrainDatasFromPredictionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTrainDatasFromPredictionRequest::getIterationId()const
{
	return iterationId_;
}

void CreateTrainDatasFromPredictionRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}

