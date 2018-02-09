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

#include <alibabacloud/ehpc/model/AddUsersRequest.h>

using AlibabaCloud::EHPC::Model::AddUsersRequest;

AddUsersRequest::AddUsersRequest() :
	RpcServiceRequest("ehpc", "2017-07-14", "AddUsers")
{}

AddUsersRequest::~AddUsersRequest()
{}

bool AddUsersRequest::getReleaseInstance()const
{
	return releaseInstance_;
}

void AddUsersRequest::setReleaseInstance(bool releaseInstance)
{
	releaseInstance_ = releaseInstance;
	setParameter("ReleaseInstance", std::to_string(releaseInstance));
}

std::string AddUsersRequest::getClusterId()const
{
	return clusterId_;
}

void AddUsersRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::vector<AddUsersRequest::User> AddUsersRequest::getUser()const
{
	return user_;
}

void AddUsersRequest::setUser(const std::vector<User>& user)
{
	user_ = user;
	int i = 0;
	for(int i = 0; i!= user.size(); i++)	{
		auto obj = user.at(i);
		std::string str ="User."+ std::to_string(i);
		setParameter(str + ".Name", obj.name);
		setParameter(str + ".Group", obj.group);
		setParameter(str + ".Password", obj.password);
	}
}

std::string AddUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

