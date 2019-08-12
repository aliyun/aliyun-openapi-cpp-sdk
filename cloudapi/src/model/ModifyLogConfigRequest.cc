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

#include <alibabacloud/cloudapi/model/ModifyLogConfigRequest.h>

using AlibabaCloud::CloudAPI::Model::ModifyLogConfigRequest;

ModifyLogConfigRequest::ModifyLogConfigRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "ModifyLogConfig")
{}

ModifyLogConfigRequest::~ModifyLogConfigRequest()
{}

std::string ModifyLogConfigRequest::getSlsLogStore()const
{
	return slsLogStore_;
}

void ModifyLogConfigRequest::setSlsLogStore(const std::string& slsLogStore)
{
	slsLogStore_ = slsLogStore;
	setCoreParameter("SlsLogStore", std::to_string(slsLogStore));
}

std::string ModifyLogConfigRequest::getLogType()const
{
	return logType_;
}

void ModifyLogConfigRequest::setLogType(const std::string& logType)
{
	logType_ = logType;
	setCoreParameter("LogType", std::to_string(logType));
}

std::string ModifyLogConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyLogConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ModifyLogConfigRequest::getRegionId()const
{
	return regionId_;
}

void ModifyLogConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyLogConfigRequest::getSlsProject()const
{
	return slsProject_;
}

void ModifyLogConfigRequest::setSlsProject(const std::string& slsProject)
{
	slsProject_ = slsProject;
	setCoreParameter("SlsProject", std::to_string(slsProject));
}

std::string ModifyLogConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyLogConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

