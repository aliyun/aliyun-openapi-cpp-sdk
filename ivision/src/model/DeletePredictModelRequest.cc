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

#include <alibabacloud/ivision/model/DeletePredictModelRequest.h>

using AlibabaCloud::Ivision::Model::DeletePredictModelRequest;

DeletePredictModelRequest::DeletePredictModelRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DeletePredictModel")
{}

DeletePredictModelRequest::~DeletePredictModelRequest()
{}

std::string DeletePredictModelRequest::getShowLog()const
{
	return showLog_;
}

void DeletePredictModelRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DeletePredictModelRequest::getModelId()const
{
	return modelId_;
}

void DeletePredictModelRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setCoreParameter("ModelId", modelId);
}

long DeletePredictModelRequest::getOwnerId()const
{
	return ownerId_;
}

void DeletePredictModelRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

