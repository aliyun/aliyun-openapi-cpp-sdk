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

#include <alibabacloud/ivision/model/DeleteTrainDatasRequest.h>

using AlibabaCloud::Ivision::Model::DeleteTrainDatasRequest;

DeleteTrainDatasRequest::DeleteTrainDatasRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DeleteTrainDatas")
{}

DeleteTrainDatasRequest::~DeleteTrainDatasRequest()
{}

std::string DeleteTrainDatasRequest::getDataIds()const
{
	return dataIds_;
}

void DeleteTrainDatasRequest::setDataIds(const std::string& dataIds)
{
	dataIds_ = dataIds;
	setCoreParameter("DataIds", dataIds);
}

std::string DeleteTrainDatasRequest::getProjectId()const
{
	return projectId_;
}

void DeleteTrainDatasRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DeleteTrainDatasRequest::getShowLog()const
{
	return showLog_;
}

void DeleteTrainDatasRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

long DeleteTrainDatasRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteTrainDatasRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

