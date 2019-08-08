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

#include <alibabacloud/ehpc/model/DeleteUsersRequest.h>

using AlibabaCloud::EHPC::Model::DeleteUsersRequest;

DeleteUsersRequest::DeleteUsersRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "DeleteUsers")
{}

DeleteUsersRequest::~DeleteUsersRequest()
{}

std::string DeleteUsersRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteUsersRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::vector<DeleteUsersRequest::User> DeleteUsersRequest::getUser()const
{
	return user_;
}

void DeleteUsersRequest::setUser(const std::vector<User>& user)
{
	user_ = user;
	int i = 0;
	for(int i = 0; i!= user.size(); i++)	{
		auto obj = user.at(i);
		std::string str ="User."+ std::to_string(i);
		setCoreParameter(str + ".Name", obj.name);
	}
}

std::string DeleteUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

