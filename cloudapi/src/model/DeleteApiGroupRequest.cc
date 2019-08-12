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

#include <alibabacloud/cloudapi/model/DeleteApiGroupRequest.h>

using AlibabaCloud::CloudAPI::Model::DeleteApiGroupRequest;

DeleteApiGroupRequest::DeleteApiGroupRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DeleteApiGroup")
{}

DeleteApiGroupRequest::~DeleteApiGroupRequest()
{}

std::string DeleteApiGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteApiGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteApiGroupRequest::getGroupId()const
{
	return groupId_;
}

void DeleteApiGroupRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::vector<DeleteApiGroupRequest::Tag> DeleteApiGroupRequest::getTag()const
{
	return tag_;
}

void DeleteApiGroupRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

std::string DeleteApiGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteApiGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

