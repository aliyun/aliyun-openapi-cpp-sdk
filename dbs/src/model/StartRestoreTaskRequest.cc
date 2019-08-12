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

#include <alibabacloud/dbs/model/StartRestoreTaskRequest.h>

using AlibabaCloud::Dbs::Model::StartRestoreTaskRequest;

StartRestoreTaskRequest::StartRestoreTaskRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "StartRestoreTask")
{}

StartRestoreTaskRequest::~StartRestoreTaskRequest()
{}

std::string StartRestoreTaskRequest::getRegionId()const
{
	return regionId_;
}

void StartRestoreTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string StartRestoreTaskRequest::getClientToken()const
{
	return clientToken_;
}

void StartRestoreTaskRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string StartRestoreTaskRequest::getRestoreTaskId()const
{
	return restoreTaskId_;
}

void StartRestoreTaskRequest::setRestoreTaskId(const std::string& restoreTaskId)
{
	restoreTaskId_ = restoreTaskId;
	setCoreParameter("RestoreTaskId", std::to_string(restoreTaskId));
}

std::string StartRestoreTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void StartRestoreTaskRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

