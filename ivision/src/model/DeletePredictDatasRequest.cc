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

#include <alibabacloud/ivision/model/DeletePredictDatasRequest.h>

using AlibabaCloud::Ivision::Model::DeletePredictDatasRequest;

DeletePredictDatasRequest::DeletePredictDatasRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DeletePredictDatas")
{}

DeletePredictDatasRequest::~DeletePredictDatasRequest()
{}

std::string DeletePredictDatasRequest::getDataIds()const
{
	return dataIds_;
}

void DeletePredictDatasRequest::setDataIds(const std::string& dataIds)
{
	dataIds_ = dataIds;
	setCoreParameter("DataIds", dataIds);
}

std::string DeletePredictDatasRequest::getProjectId()const
{
	return projectId_;
}

void DeletePredictDatasRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DeletePredictDatasRequest::getShowLog()const
{
	return showLog_;
}

void DeletePredictDatasRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DeletePredictDatasRequest::getModelId()const
{
	return modelId_;
}

void DeletePredictDatasRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setCoreParameter("ModelId", modelId);
}

long DeletePredictDatasRequest::getOwnerId()const
{
	return ownerId_;
}

void DeletePredictDatasRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeletePredictDatasRequest::getIterationId()const
{
	return iterationId_;
}

void DeletePredictDatasRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}

