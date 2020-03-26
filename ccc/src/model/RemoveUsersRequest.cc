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

#include <alibabacloud/ccc/model/RemoveUsersRequest.h>

using AlibabaCloud::CCC::Model::RemoveUsersRequest;

RemoveUsersRequest::RemoveUsersRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "RemoveUsers")
{
	setMethod(HttpRequest::Method::Post);
}

RemoveUsersRequest::~RemoveUsersRequest()
{}

std::string RemoveUsersRequest::getInstanceId()const
{
	return instanceId_;
}

void RemoveUsersRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::vector<std::string> RemoveUsersRequest::getUserId()const
{
	return userId_;
}

void RemoveUsersRequest::setUserId(const std::vector<std::string>& userId)
{
	userId_ = userId;
	for(int dep1 = 0; dep1!= userId.size(); dep1++) {
		setParameter("UserId."+ std::to_string(dep1), userId.at(dep1));
	}
}

std::string RemoveUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

