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

#include <alibabacloud/cms/model/UpdateMyGroupMembersRequest.h>

using AlibabaCloud::Cms::Model::UpdateMyGroupMembersRequest;

UpdateMyGroupMembersRequest::UpdateMyGroupMembersRequest() :
	RpcServiceRequest("cms", "2018-03-08", "UpdateMyGroupMembers")
{}

UpdateMyGroupMembersRequest::~UpdateMyGroupMembersRequest()
{}

std::string UpdateMyGroupMembersRequest::getReaders()const
{
	return readers_;
}

void UpdateMyGroupMembersRequest::setReaders(const std::string& readers)
{
	readers_ = readers;
	setCoreParameter("Readers", readers);
}

long UpdateMyGroupMembersRequest::getGroupId()const
{
	return groupId_;
}

void UpdateMyGroupMembersRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string UpdateMyGroupMembersRequest::getMasters()const
{
	return masters_;
}

void UpdateMyGroupMembersRequest::setMasters(const std::string& masters)
{
	masters_ = masters;
	setCoreParameter("Masters", masters);
}

