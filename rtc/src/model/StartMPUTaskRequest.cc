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

#include <alibabacloud/rtc/model/StartMPUTaskRequest.h>

using AlibabaCloud::Rtc::Model::StartMPUTaskRequest;

StartMPUTaskRequest::StartMPUTaskRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "StartMPUTask")
{
	setMethod(HttpRequest::Method::Post);
}

StartMPUTaskRequest::~StartMPUTaskRequest()
{}

std::vector<StartMPUTaskRequest::UserPanes> StartMPUTaskRequest::getUserPanes()const
{
	return userPanes_;
}

void StartMPUTaskRequest::setUserPanes(const std::vector<UserPanes>& userPanes)
{
	userPanes_ = userPanes;
	for(int dep1 = 0; dep1!= userPanes.size(); dep1++) {
		auto userPanesObj = userPanes.at(dep1);
		std::string userPanesObjStr = "UserPanes." + std::to_string(dep1);
		setCoreParameter(userPanesObjStr + ".PaneId", std::to_string(userPanesObj.paneId));
		setCoreParameter(userPanesObjStr + ".UserId", userPanesObj.userId);
		setCoreParameter(userPanesObjStr + ".SourceType", userPanesObj.sourceType);
	}
}

int StartMPUTaskRequest::getBackgroundColor()const
{
	return backgroundColor_;
}

void StartMPUTaskRequest::setBackgroundColor(int backgroundColor)
{
	backgroundColor_ = backgroundColor;
	setCoreParameter("BackgroundColor", std::to_string(backgroundColor));
}

int StartMPUTaskRequest::getCropMode()const
{
	return cropMode_;
}

void StartMPUTaskRequest::setCropMode(int cropMode)
{
	cropMode_ = cropMode;
	setCoreParameter("CropMode", std::to_string(cropMode));
}

std::string StartMPUTaskRequest::getTaskProfile()const
{
	return taskProfile_;
}

void StartMPUTaskRequest::setTaskProfile(const std::string& taskProfile)
{
	taskProfile_ = taskProfile;
	setCoreParameter("TaskProfile", taskProfile);
}

std::vector<long> StartMPUTaskRequest::getLayoutIds()const
{
	return layoutIds_;
}

void StartMPUTaskRequest::setLayoutIds(const std::vector<long>& layoutIds)
{
	layoutIds_ = layoutIds;
	for(int dep1 = 0; dep1!= layoutIds.size(); dep1++) {
		setCoreParameter("LayoutIds."+ std::to_string(dep1), std::to_string(layoutIds.at(dep1)));
	}
}

std::string StartMPUTaskRequest::getTaskId()const
{
	return taskId_;
}

void StartMPUTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

std::string StartMPUTaskRequest::getStreamURL()const
{
	return streamURL_;
}

void StartMPUTaskRequest::setStreamURL(const std::string& streamURL)
{
	streamURL_ = streamURL;
	setCoreParameter("StreamURL", streamURL);
}

long StartMPUTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void StartMPUTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> StartMPUTaskRequest::getSubSpecUsers()const
{
	return subSpecUsers_;
}

void StartMPUTaskRequest::setSubSpecUsers(const std::vector<std::string>& subSpecUsers)
{
	subSpecUsers_ = subSpecUsers;
	for(int dep1 = 0; dep1!= subSpecUsers.size(); dep1++) {
		setCoreParameter("SubSpecUsers."+ std::to_string(dep1), subSpecUsers.at(dep1));
	}
}

std::string StartMPUTaskRequest::getAppId()const
{
	return appId_;
}

void StartMPUTaskRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

int StartMPUTaskRequest::getMediaEncode()const
{
	return mediaEncode_;
}

void StartMPUTaskRequest::setMediaEncode(int mediaEncode)
{
	mediaEncode_ = mediaEncode;
	setCoreParameter("MediaEncode", std::to_string(mediaEncode));
}

std::string StartMPUTaskRequest::getChannelId()const
{
	return channelId_;
}

void StartMPUTaskRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", channelId);
}

