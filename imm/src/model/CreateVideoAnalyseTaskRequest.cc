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

#include <alibabacloud/imm/model/CreateVideoAnalyseTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateVideoAnalyseTaskRequest;

CreateVideoAnalyseTaskRequest::CreateVideoAnalyseTaskRequest() :
	RpcServiceRequest("imm", "2017-09-06", "CreateVideoAnalyseTask")
{}

CreateVideoAnalyseTaskRequest::~CreateVideoAnalyseTaskRequest()
{}

std::string CreateVideoAnalyseTaskRequest::getNotifyTopicName()const
{
	return notifyTopicName_;
}

void CreateVideoAnalyseTaskRequest::setNotifyTopicName(const std::string& notifyTopicName)
{
	notifyTopicName_ = notifyTopicName;
	setCoreParameter("NotifyTopicName", notifyTopicName);
}

std::string CreateVideoAnalyseTaskRequest::getGrabType()const
{
	return grabType_;
}

void CreateVideoAnalyseTaskRequest::setGrabType(const std::string& grabType)
{
	grabType_ = grabType;
	setCoreParameter("GrabType", grabType);
}

std::string CreateVideoAnalyseTaskRequest::getProject()const
{
	return project_;
}

void CreateVideoAnalyseTaskRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string CreateVideoAnalyseTaskRequest::getEndTime()const
{
	return endTime_;
}

void CreateVideoAnalyseTaskRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string CreateVideoAnalyseTaskRequest::getStartTime()const
{
	return startTime_;
}

void CreateVideoAnalyseTaskRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string CreateVideoAnalyseTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateVideoAnalyseTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateVideoAnalyseTaskRequest::getVideoUri()const
{
	return videoUri_;
}

void CreateVideoAnalyseTaskRequest::setVideoUri(const std::string& videoUri)
{
	videoUri_ = videoUri;
	setCoreParameter("VideoUri", videoUri);
}

bool CreateVideoAnalyseTaskRequest::getSaveType()const
{
	return saveType_;
}

void CreateVideoAnalyseTaskRequest::setSaveType(bool saveType)
{
	saveType_ = saveType;
	setCoreParameter("SaveType", saveType ? "true" : "false");
}

std::string CreateVideoAnalyseTaskRequest::getRegionId()const
{
	return regionId_;
}

void CreateVideoAnalyseTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateVideoAnalyseTaskRequest::getNotifyEndpoint()const
{
	return notifyEndpoint_;
}

void CreateVideoAnalyseTaskRequest::setNotifyEndpoint(const std::string& notifyEndpoint)
{
	notifyEndpoint_ = notifyEndpoint;
	setCoreParameter("NotifyEndpoint", notifyEndpoint);
}

std::string CreateVideoAnalyseTaskRequest::getInterval()const
{
	return interval_;
}

void CreateVideoAnalyseTaskRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string CreateVideoAnalyseTaskRequest::getTgtUri()const
{
	return tgtUri_;
}

void CreateVideoAnalyseTaskRequest::setTgtUri(const std::string& tgtUri)
{
	tgtUri_ = tgtUri;
	setCoreParameter("TgtUri", tgtUri);
}

