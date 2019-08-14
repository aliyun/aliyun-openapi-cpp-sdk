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

#include <alibabacloud/cloudwf/model/SavePageConfigTemplateRequest.h>

using AlibabaCloud::Cloudwf::Model::SavePageConfigTemplateRequest;

SavePageConfigTemplateRequest::SavePageConfigTemplateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SavePageConfigTemplate")
{}

SavePageConfigTemplateRequest::~SavePageConfigTemplateRequest()
{}

int SavePageConfigTemplateRequest::getTempType()const
{
	return tempType_;
}

void SavePageConfigTemplateRequest::setTempType(int tempType)
{
	tempType_ = tempType;
	setCoreParameter("TempType", std::to_string(tempType));
}

std::string SavePageConfigTemplateRequest::getTempDesc()const
{
	return tempDesc_;
}

void SavePageConfigTemplateRequest::setTempDesc(const std::string& tempDesc)
{
	tempDesc_ = tempDesc;
	setCoreParameter("TempDesc", tempDesc);
}

std::string SavePageConfigTemplateRequest::getTempName()const
{
	return tempName_;
}

void SavePageConfigTemplateRequest::setTempName(const std::string& tempName)
{
	tempName_ = tempName;
	setCoreParameter("TempName", tempName);
}

long SavePageConfigTemplateRequest::getId()const
{
	return id_;
}

void SavePageConfigTemplateRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string SavePageConfigTemplateRequest::getTempPermission()const
{
	return tempPermission_;
}

void SavePageConfigTemplateRequest::setTempPermission(const std::string& tempPermission)
{
	tempPermission_ = tempPermission;
	setCoreParameter("TempPermission", tempPermission);
}

std::string SavePageConfigTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SavePageConfigTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

