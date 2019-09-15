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

#include <alibabacloud/ehpc/model/ModifyVisualServicePasswdRequest.h>

using AlibabaCloud::EHPC::Model::ModifyVisualServicePasswdRequest;

ModifyVisualServicePasswdRequest::ModifyVisualServicePasswdRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ModifyVisualServicePasswd")
{}

ModifyVisualServicePasswdRequest::~ModifyVisualServicePasswdRequest()
{}

std::string ModifyVisualServicePasswdRequest::getRunasUserPassword()const
{
	return runasUserPassword_;
}

void ModifyVisualServicePasswdRequest::setRunasUserPassword(const std::string& runasUserPassword)
{
	runasUserPassword_ = runasUserPassword;
	setCoreParameter("RunasUserPassword", runasUserPassword);
}

std::string ModifyVisualServicePasswdRequest::getRunasUser()const
{
	return runasUser_;
}

void ModifyVisualServicePasswdRequest::setRunasUser(const std::string& runasUser)
{
	runasUser_ = runasUser;
	setCoreParameter("RunasUser", runasUser);
}

std::string ModifyVisualServicePasswdRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyVisualServicePasswdRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ModifyVisualServicePasswdRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyVisualServicePasswdRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyVisualServicePasswdRequest::getPasswd()const
{
	return passwd_;
}

void ModifyVisualServicePasswdRequest::setPasswd(const std::string& passwd)
{
	passwd_ = passwd;
	setCoreParameter("Passwd", passwd);
}

