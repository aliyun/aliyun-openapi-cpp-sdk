<<<<<<< HEAD
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

#include <alibabacloud/cloudapi/model/CreateApiGroupRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateApiGroupRequest;

CreateApiGroupRequest::CreateApiGroupRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "CreateApiGroup")
{}

CreateApiGroupRequest::~CreateApiGroupRequest()
{}

std::string CreateApiGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateApiGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string CreateApiGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateApiGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateApiGroupRequest::getDescription()const
{
	return description_;
}

void CreateApiGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateApiGroupRequest::getSource()const
{
	return source_;
}

void CreateApiGroupRequest::setSource(const std::string& source)
{
	source_ = source;
	setCoreParameter("Source", source);
}

std::vector<CreateApiGroupRequest::Tag> CreateApiGroupRequest::getTag()const
{
	return tag_;
}

void CreateApiGroupRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

std::string CreateApiGroupRequest::getGroupName()const
{
	return groupName_;
}

void CreateApiGroupRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string CreateApiGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateApiGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

=======
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

#include <alibabacloud/cloudapi/model/CreateApiGroupRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateApiGroupRequest;

CreateApiGroupRequest::CreateApiGroupRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "CreateApiGroup")
{}

CreateApiGroupRequest::~CreateApiGroupRequest()
{}

std::string CreateApiGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateApiGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string CreateApiGroupRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateApiGroupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateApiGroupRequest::getDescription()const
{
	return description_;
}

void CreateApiGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateApiGroupRequest::getSource()const
{
	return source_;
}

void CreateApiGroupRequest::setSource(const std::string& source)
{
	source_ = source;
	setCoreParameter("Source", source);
}

std::vector<CreateApiGroupRequest::Tag> CreateApiGroupRequest::getTag()const
{
	return tag_;
}

void CreateApiGroupRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

std::string CreateApiGroupRequest::getGroupName()const
{
	return groupName_;
}

void CreateApiGroupRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string CreateApiGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateApiGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

>>>>>>> master
