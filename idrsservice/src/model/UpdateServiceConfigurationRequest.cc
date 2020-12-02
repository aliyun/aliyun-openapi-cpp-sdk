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

#include <alibabacloud/idrsservice/model/UpdateServiceConfigurationRequest.h>

using AlibabaCloud::Idrsservice::Model::UpdateServiceConfigurationRequest;

UpdateServiceConfigurationRequest::UpdateServiceConfigurationRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "UpdateServiceConfiguration")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateServiceConfigurationRequest::~UpdateServiceConfigurationRequest()
{}

int UpdateServiceConfigurationRequest::getLiveRecordMaxClient()const
{
	return liveRecordMaxClient_;
}

void UpdateServiceConfigurationRequest::setLiveRecordMaxClient(int liveRecordMaxClient)
{
	liveRecordMaxClient_ = liveRecordMaxClient;
	setParameter("LiveRecordMaxClient", std::to_string(liveRecordMaxClient));
}

int UpdateServiceConfigurationRequest::getLiveRecordVideoResolution()const
{
	return liveRecordVideoResolution_;
}

void UpdateServiceConfigurationRequest::setLiveRecordVideoResolution(int liveRecordVideoResolution)
{
	liveRecordVideoResolution_ = liveRecordVideoResolution;
	setParameter("LiveRecordVideoResolution", std::to_string(liveRecordVideoResolution));
}

int UpdateServiceConfigurationRequest::getTaskItemQueueSize()const
{
	return taskItemQueueSize_;
}

void UpdateServiceConfigurationRequest::setTaskItemQueueSize(int taskItemQueueSize)
{
	taskItemQueueSize_ = taskItemQueueSize;
	setParameter("TaskItemQueueSize", std::to_string(taskItemQueueSize));
}

int UpdateServiceConfigurationRequest::getLiveRecordLayout()const
{
	return liveRecordLayout_;
}

void UpdateServiceConfigurationRequest::setLiveRecordLayout(int liveRecordLayout)
{
	liveRecordLayout_ = liveRecordLayout;
	setParameter("LiveRecordLayout", std::to_string(liveRecordLayout));
}

int UpdateServiceConfigurationRequest::getClientQueueSize()const
{
	return clientQueueSize_;
}

void UpdateServiceConfigurationRequest::setClientQueueSize(int clientQueueSize)
{
	clientQueueSize_ = clientQueueSize;
	setParameter("ClientQueueSize", std::to_string(clientQueueSize));
}

std::string UpdateServiceConfigurationRequest::getLiveRecordTaskProfile()const
{
	return liveRecordTaskProfile_;
}

void UpdateServiceConfigurationRequest::setLiveRecordTaskProfile(const std::string& liveRecordTaskProfile)
{
	liveRecordTaskProfile_ = liveRecordTaskProfile;
	setParameter("LiveRecordTaskProfile", liveRecordTaskProfile);
}

bool UpdateServiceConfigurationRequest::getLiveRecordAll()const
{
	return liveRecordAll_;
}

void UpdateServiceConfigurationRequest::setLiveRecordAll(bool liveRecordAll)
{
	liveRecordAll_ = liveRecordAll;
	setParameter("LiveRecordAll", liveRecordAll ? "true" : "false");
}

bool UpdateServiceConfigurationRequest::getLiveRecordEveryOne()const
{
	return liveRecordEveryOne_;
}

void UpdateServiceConfigurationRequest::setLiveRecordEveryOne(bool liveRecordEveryOne)
{
	liveRecordEveryOne_ = liveRecordEveryOne;
	setParameter("LiveRecordEveryOne", liveRecordEveryOne ? "true" : "false");
}

