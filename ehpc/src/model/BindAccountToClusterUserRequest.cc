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

#include <alibabacloud/ehpc/model/BindAccountToClusterUserRequest.h>

using AlibabaCloud::EHPC::Model::BindAccountToClusterUserRequest;

BindAccountToClusterUserRequest::BindAccountToClusterUserRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "BindAccountToClusterUser")
{
	setMethod(HttpRequest::Method::Get);
}

BindAccountToClusterUserRequest::~BindAccountToClusterUserRequest()
{}

std::string BindAccountToClusterUserRequest::getUserPwd()const
{
	return userPwd_;
}

void BindAccountToClusterUserRequest::setUserPwd(const std::string& userPwd)
{
	userPwd_ = userPwd;
	setCoreParameter("UserPwd", userPwd);
}

std::string BindAccountToClusterUserRequest::getClusterId()const
{
	return clusterId_;
}

void BindAccountToClusterUserRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string BindAccountToClusterUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BindAccountToClusterUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string BindAccountToClusterUserRequest::getAccountName()const
{
	return accountName_;
}

void BindAccountToClusterUserRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string BindAccountToClusterUserRequest::getAccountUid()const
{
	return accountUid_;
}

void BindAccountToClusterUserRequest::setAccountUid(const std::string& accountUid)
{
	accountUid_ = accountUid;
	setCoreParameter("AccountUid", accountUid);
}

std::string BindAccountToClusterUserRequest::getUserName()const
{
	return userName_;
}

void BindAccountToClusterUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setCoreParameter("UserName", userName);
}

