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

#include <alibabacloud/cloudapi/model/DeleteTrafficSpecialControlRequest.h>

using AlibabaCloud::CloudAPI::Model::DeleteTrafficSpecialControlRequest;

DeleteTrafficSpecialControlRequest::DeleteTrafficSpecialControlRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DeleteTrafficSpecialControl")
{}

DeleteTrafficSpecialControlRequest::~DeleteTrafficSpecialControlRequest()
{}

std::string DeleteTrafficSpecialControlRequest::getTrafficControlId()const
{
	return trafficControlId_;
}

void DeleteTrafficSpecialControlRequest::setTrafficControlId(const std::string& trafficControlId)
{
	trafficControlId_ = trafficControlId;
	setCoreParameter("TrafficControlId", trafficControlId);
}

std::string DeleteTrafficSpecialControlRequest::getSpecialKey()const
{
	return specialKey_;
}

void DeleteTrafficSpecialControlRequest::setSpecialKey(const std::string& specialKey)
{
	specialKey_ = specialKey;
	setCoreParameter("SpecialKey", specialKey);
}

std::string DeleteTrafficSpecialControlRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteTrafficSpecialControlRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteTrafficSpecialControlRequest::getSpecialType()const
{
	return specialType_;
}

void DeleteTrafficSpecialControlRequest::setSpecialType(const std::string& specialType)
{
	specialType_ = specialType;
	setCoreParameter("SpecialType", specialType);
}

std::string DeleteTrafficSpecialControlRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteTrafficSpecialControlRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

