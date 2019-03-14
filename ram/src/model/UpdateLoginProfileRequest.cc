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

#include <alibabacloud/ram/model/UpdateLoginProfileRequest.h>

using AlibabaCloud::Ram::Model::UpdateLoginProfileRequest;

UpdateLoginProfileRequest::UpdateLoginProfileRequest() :
	RpcServiceRequest("ram", "2015-05-01", "UpdateLoginProfile")
{}

UpdateLoginProfileRequest::~UpdateLoginProfileRequest()
{}

std::string UpdateLoginProfileRequest::getPassword()const
{
	return password_;
}

void UpdateLoginProfileRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

bool UpdateLoginProfileRequest::getPasswordResetRequired()const
{
	return passwordResetRequired_;
}

void UpdateLoginProfileRequest::setPasswordResetRequired(bool passwordResetRequired)
{
	passwordResetRequired_ = passwordResetRequired;
	setParameter("PasswordResetRequired", std::to_string(passwordResetRequired));
}

bool UpdateLoginProfileRequest::getMFABindRequired()const
{
	return mFABindRequired_;
}

void UpdateLoginProfileRequest::setMFABindRequired(bool mFABindRequired)
{
	mFABindRequired_ = mFABindRequired;
	setParameter("MFABindRequired", std::to_string(mFABindRequired));
}

std::string UpdateLoginProfileRequest::getUserName()const
{
	return userName_;
}

void UpdateLoginProfileRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

