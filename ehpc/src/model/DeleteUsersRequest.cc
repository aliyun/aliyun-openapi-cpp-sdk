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
{
	setMethod(HttpRequest::Method::Get);
}

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

std::string DeleteUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::vector<DeleteUsersRequest::User> DeleteUsersRequest::getUser()const
{
	return user_;
}

void DeleteUsersRequest::setUser(const std::vector<User>& user)
{
	user_ = user;
	for(int dep1 = 0; dep1!= user.size(); dep1++) {
		auto userObj = user.at(dep1);
		std::string userObjStr = "User." + std::to_string(dep1);
		setCoreParameter(userObjStr + ".Name", userObj.name);
	}
}

