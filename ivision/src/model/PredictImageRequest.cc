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

#include <alibabacloud/ivision/model/PredictImageRequest.h>

using AlibabaCloud::Ivision::Model::PredictImageRequest;

PredictImageRequest::PredictImageRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "PredictImage")
{}

PredictImageRequest::~PredictImageRequest()
{}

std::string PredictImageRequest::getProjectId()const
{
	return projectId_;
}

void PredictImageRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string PredictImageRequest::getShowLog()const
{
	return showLog_;
}

void PredictImageRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string PredictImageRequest::getModelId()const
{
	return modelId_;
}

void PredictImageRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setCoreParameter("ModelId", modelId);
}

long PredictImageRequest::getOwnerId()const
{
	return ownerId_;
}

void PredictImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string PredictImageRequest::getIterationId()const
{
	return iterationId_;
}

void PredictImageRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}

std::string PredictImageRequest::getDataUrls()const
{
	return dataUrls_;
}

void PredictImageRequest::setDataUrls(const std::string& dataUrls)
{
	dataUrls_ = dataUrls;
	setCoreParameter("DataUrls", dataUrls);
}

