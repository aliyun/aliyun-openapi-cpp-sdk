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

#include <alibabacloud/mopen/model/MoPenDeleteGroupMemberRequest.h>

using AlibabaCloud::MoPen::Model::MoPenDeleteGroupMemberRequest;

MoPenDeleteGroupMemberRequest::MoPenDeleteGroupMemberRequest() :
	RpcServiceRequest("mopen", "2018-02-11", "MoPenDeleteGroupMember")
{
	setMethod(HttpRequest::Method::Post);
}

MoPenDeleteGroupMemberRequest::~MoPenDeleteGroupMemberRequest()
{}

long MoPenDeleteGroupMemberRequest::getGroupId()const
{
	return groupId_;
}

void MoPenDeleteGroupMemberRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string MoPenDeleteGroupMemberRequest::getDeviceName()const
{
	return deviceName_;
}

void MoPenDeleteGroupMemberRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

