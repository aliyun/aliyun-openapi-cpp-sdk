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

#include <alibabacloud/cloudapi/model/DeleteLogConfigRequest.h>

using AlibabaCloud::CloudAPI::Model::DeleteLogConfigRequest;

DeleteLogConfigRequest::DeleteLogConfigRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DeleteLogConfig")
{}

DeleteLogConfigRequest::~DeleteLogConfigRequest()
{}

std::string DeleteLogConfigRequest::getLogType()const
{
	return logType_;
}

void DeleteLogConfigRequest::setLogType(const std::string& logType)
{
	logType_ = logType;
	setCoreParameter("LogType", logType);
}

std::string DeleteLogConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteLogConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteLogConfigRequest::getRegionId()const
{
	return regionId_;
}

void DeleteLogConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteLogConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteLogConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

