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

#include <alibabacloud/emr/model/CreateUsersRequest.h>

using AlibabaCloud::Emr::Model::CreateUsersRequest;

CreateUsersRequest::CreateUsersRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateUsers")
{
	setMethod(HttpRequest::Method::Post);
}

CreateUsersRequest::~CreateUsersRequest()
{}

long CreateUsersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUsersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateUsersRequest::getClusterId()const
{
	return clusterId_;
}

void CreateUsersRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateUsersRequest::getRegionId()const
{
	return regionId_;
}

void CreateUsersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<CreateUsersRequest::UserInfo> CreateUsersRequest::getUserInfo()const
{
	return userInfo_;
}

void CreateUsersRequest::setUserInfo(const std::vector<UserInfo>& userInfo)
{
	userInfo_ = userInfo;
	for(int dep1 = 0; dep1!= userInfo.size(); dep1++) {
		auto userInfoObj = userInfo.at(dep1);
		std::string userInfoObjStr = "UserInfo." + std::to_string(dep1 + 1);
		setParameter(userInfoObjStr + ".Type", userInfoObj.type);
		setParameter(userInfoObjStr + ".UserId", userInfoObj.userId);
		setParameter(userInfoObjStr + ".UserName", userInfoObj.userName);
	}
}

