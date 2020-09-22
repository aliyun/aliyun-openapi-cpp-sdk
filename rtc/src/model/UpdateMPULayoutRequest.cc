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

#include <alibabacloud/rtc/model/UpdateMPULayoutRequest.h>

using AlibabaCloud::Rtc::Model::UpdateMPULayoutRequest;

UpdateMPULayoutRequest::UpdateMPULayoutRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "UpdateMPULayout")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateMPULayoutRequest::~UpdateMPULayoutRequest()
{}

std::vector<UpdateMPULayoutRequest::UserPanes> UpdateMPULayoutRequest::getUserPanes()const
{
	return userPanes_;
}

void UpdateMPULayoutRequest::setUserPanes(const std::vector<UserPanes>& userPanes)
{
	userPanes_ = userPanes;
	for(int dep1 = 0; dep1!= userPanes.size(); dep1++) {
		auto userPanesObj = userPanes.at(dep1);
		std::string userPanesObjStr = "UserPanes." + std::to_string(dep1 + 1);
		setParameter(userPanesObjStr + ".PaneId", std::to_string(userPanesObj.paneId));
		setParameter(userPanesObjStr + ".UserId", userPanesObj.userId);
		setParameter(userPanesObjStr + ".SourceType", userPanesObj.sourceType);
	}
}

int UpdateMPULayoutRequest::getBackgroundColor()const
{
	return backgroundColor_;
}

void UpdateMPULayoutRequest::setBackgroundColor(int backgroundColor)
{
	backgroundColor_ = backgroundColor;
	setParameter("BackgroundColor", std::to_string(backgroundColor));
}

int UpdateMPULayoutRequest::getCropMode()const
{
	return cropMode_;
}

void UpdateMPULayoutRequest::setCropMode(int cropMode)
{
	cropMode_ = cropMode;
	setParameter("CropMode", std::to_string(cropMode));
}

std::vector<long> UpdateMPULayoutRequest::getLayoutIds()const
{
	return layoutIds_;
}

void UpdateMPULayoutRequest::setLayoutIds(const std::vector<long>& layoutIds)
{
	layoutIds_ = layoutIds;
	for(int dep1 = 0; dep1!= layoutIds.size(); dep1++) {
		setParameter("LayoutIds."+ std::to_string(dep1), std::to_string(layoutIds.at(dep1)));
	}
}

std::string UpdateMPULayoutRequest::getTaskId()const
{
	return taskId_;
}

void UpdateMPULayoutRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

std::string UpdateMPULayoutRequest::getShowLog()const
{
	return showLog_;
}

void UpdateMPULayoutRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long UpdateMPULayoutRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateMPULayoutRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateMPULayoutRequest::getAppId()const
{
	return appId_;
}

void UpdateMPULayoutRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

