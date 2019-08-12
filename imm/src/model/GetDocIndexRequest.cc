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

#include <alibabacloud/imm/model/GetDocIndexRequest.h>

using AlibabaCloud::Imm::Model::GetDocIndexRequest;

GetDocIndexRequest::GetDocIndexRequest() :
	RpcServiceRequest("imm", "2017-09-06", "GetDocIndex")
{}

GetDocIndexRequest::~GetDocIndexRequest()
{}

std::string GetDocIndexRequest::getSet()const
{
	return set_;
}

void GetDocIndexRequest::setSet(const std::string& set)
{
	set_ = set;
	setCoreParameter("Set", set);
}

std::string GetDocIndexRequest::getRegionId()const
{
	return regionId_;
}

void GetDocIndexRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetDocIndexRequest::getProject()const
{
	return project_;
}

void GetDocIndexRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string GetDocIndexRequest::getUniqueId()const
{
	return uniqueId_;
}

void GetDocIndexRequest::setUniqueId(const std::string& uniqueId)
{
	uniqueId_ = uniqueId;
	setCoreParameter("UniqueId", uniqueId);
}

std::string GetDocIndexRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetDocIndexRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

