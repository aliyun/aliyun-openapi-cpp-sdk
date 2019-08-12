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

#include <alibabacloud/drds/model/ModifyDrdsIpWhiteListRequest.h>

using AlibabaCloud::Drds::Model::ModifyDrdsIpWhiteListRequest;

ModifyDrdsIpWhiteListRequest::ModifyDrdsIpWhiteListRequest() :
	RpcServiceRequest("drds", "2017-10-16", "ModifyDrdsIpWhiteList")
{}

ModifyDrdsIpWhiteListRequest::~ModifyDrdsIpWhiteListRequest()
{}

bool ModifyDrdsIpWhiteListRequest::getMode()const
{
	return mode_;
}

void ModifyDrdsIpWhiteListRequest::setMode(bool mode)
{
	mode_ = mode;
	setCoreParameter("Mode", mode);
}

std::string ModifyDrdsIpWhiteListRequest::getDbName()const
{
	return dbName_;
}

void ModifyDrdsIpWhiteListRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string ModifyDrdsIpWhiteListRequest::getGroupAttribute()const
{
	return groupAttribute_;
}

void ModifyDrdsIpWhiteListRequest::setGroupAttribute(const std::string& groupAttribute)
{
	groupAttribute_ = groupAttribute;
	setCoreParameter("GroupAttribute", groupAttribute);
}

std::string ModifyDrdsIpWhiteListRequest::getIpWhiteList()const
{
	return ipWhiteList_;
}

void ModifyDrdsIpWhiteListRequest::setIpWhiteList(const std::string& ipWhiteList)
{
	ipWhiteList_ = ipWhiteList;
	setCoreParameter("IpWhiteList", ipWhiteList);
}

std::string ModifyDrdsIpWhiteListRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void ModifyDrdsIpWhiteListRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string ModifyDrdsIpWhiteListRequest::getGroupName()const
{
	return groupName_;
}

void ModifyDrdsIpWhiteListRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string ModifyDrdsIpWhiteListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDrdsIpWhiteListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

