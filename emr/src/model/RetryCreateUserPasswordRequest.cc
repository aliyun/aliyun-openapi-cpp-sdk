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

#include <alibabacloud/emr/model/RetryCreateUserPasswordRequest.h>

using AlibabaCloud::Emr::Model::RetryCreateUserPasswordRequest;

RetryCreateUserPasswordRequest::RetryCreateUserPasswordRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RetryCreateUserPassword")
{}

RetryCreateUserPasswordRequest::~RetryCreateUserPasswordRequest()
{}

long RetryCreateUserPasswordRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RetryCreateUserPasswordRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RetryCreateUserPasswordRequest::getRegionId()const
{
	return regionId_;
}

void RetryCreateUserPasswordRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RetryCreateUserPasswordRequest::getClusterId()const
{
	return clusterId_;
}

void RetryCreateUserPasswordRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::vector<RetryCreateUserPasswordRequest::UserInfo> RetryCreateUserPasswordRequest::getUserInfo()const
{
	return userInfo_;
}

void RetryCreateUserPasswordRequest::setUserInfo(const std::vector<UserInfo>& userInfo)
{
	userInfo_ = userInfo;
	int i = 0;
	for(int i = 0; i!= userInfo.size(); i++)	{
		auto obj = userInfo.at(i);
		std::string str ="UserInfo."+ std::to_string(i);
		setParameter(str + ".Type", obj.type);
		setParameter(str + ".GroupName", obj.groupName);
		setParameter(str + ".UserId", obj.userId);
		setParameter(str + ".UserName", obj.userName);
	}
}

std::string RetryCreateUserPasswordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RetryCreateUserPasswordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

