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

#include <alibabacloud/live/model/SetCasterSyncGroupRequest.h>

using AlibabaCloud::Live::Model::SetCasterSyncGroupRequest;

SetCasterSyncGroupRequest::SetCasterSyncGroupRequest() :
	RpcServiceRequest("live", "2016-11-01", "SetCasterSyncGroup")
{}

SetCasterSyncGroupRequest::~SetCasterSyncGroupRequest()
{}

std::string SetCasterSyncGroupRequest::getCasterId()const
{
	return casterId_;
}

void SetCasterSyncGroupRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setCoreParameter("CasterId", casterId);
}

long SetCasterSyncGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void SetCasterSyncGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<SetCasterSyncGroupRequest::SyncGroup> SetCasterSyncGroupRequest::getSyncGroup()const
{
	return syncGroup_;
}

void SetCasterSyncGroupRequest::setSyncGroup(const std::vector<SyncGroup>& syncGroup)
{
	syncGroup_ = syncGroup;
	int i = 0;
	for(int i = 0; i!= syncGroup.size(); i++)	{
		auto obj = syncGroup.at(i);
		std::string str ="SyncGroup."+ std::to_string(i);
		setCoreParameter(str + ".Mode", std::to_string(obj.mode));
		setCoreParameter(str + ".HostResourceId", obj.hostResourceId);
		for(int i = 0; i!= obj.resourceIds.size(); i++)				setCoreParameter(str + ".ResourceIds."+ std::to_string(i), obj.resourceIds.at(i));
	}
}

