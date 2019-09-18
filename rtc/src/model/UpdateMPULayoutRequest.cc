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
{}

UpdateMPULayoutRequest::~UpdateMPULayoutRequest()
{}

std::vector<UpdateMPULayoutRequest::UserPanes> UpdateMPULayoutRequest::getUserPanes()const
{
	return userPanes_;
}

void UpdateMPULayoutRequest::setUserPanes(const std::vector<UserPanes>& userPanes)
{
	userPanes_ = userPanes;
	int i = 0;
	for(int i = 0; i!= userPanes.size(); i++)	{
		auto obj = userPanes.at(i);
		std::string str ="UserPanes."+ std::to_string(i);
		setCoreParameter(str + ".PaneId", std::to_string(obj.paneId));
		setCoreParameter(str + ".UserId", obj.userId);
		setCoreParameter(str + ".SourceType", obj.sourceType);
	}
}

int UpdateMPULayoutRequest::getBackgroundColor()const
{
	return backgroundColor_;
}

void UpdateMPULayoutRequest::setBackgroundColor(int backgroundColor)
{
	backgroundColor_ = backgroundColor;
	setCoreParameter("BackgroundColor", std::to_string(backgroundColor));
}

int UpdateMPULayoutRequest::getCropMode()const
{
	return cropMode_;
}

void UpdateMPULayoutRequest::setCropMode(int cropMode)
{
	cropMode_ = cropMode;
	setCoreParameter("CropMode", std::to_string(cropMode));
}

std::vector<long> UpdateMPULayoutRequest::getLayoutIds()const
{
	return layoutIds_;
}

void UpdateMPULayoutRequest::setLayoutIds(const std::vector<long>& layoutIds)
{
	layoutIds_ = layoutIds;
	for(int i = 0; i!= layoutIds.size(); i++)
		setCoreParameter("LayoutIds."+ std::to_string(i), std::to_string(layoutIds.at(i)));
}

std::string UpdateMPULayoutRequest::getTaskId()const
{
	return taskId_;
}

void UpdateMPULayoutRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

long UpdateMPULayoutRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateMPULayoutRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateMPULayoutRequest::getAppId()const
{
	return appId_;
}

void UpdateMPULayoutRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

