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

#include <alibabacloud/imm/model/DeleteDocIndexRequest.h>

using AlibabaCloud::Imm::Model::DeleteDocIndexRequest;

DeleteDocIndexRequest::DeleteDocIndexRequest() :
	RpcServiceRequest("imm", "2017-09-06", "DeleteDocIndex")
{}

DeleteDocIndexRequest::~DeleteDocIndexRequest()
{}

std::string DeleteDocIndexRequest::getSet()const
{
	return set_;
}

void DeleteDocIndexRequest::setSet(const std::string& set)
{
	set_ = set;
	setCoreParameter("Set", set);
}

std::string DeleteDocIndexRequest::getRegionId()const
{
	return regionId_;
}

void DeleteDocIndexRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteDocIndexRequest::getProject()const
{
	return project_;
}

void DeleteDocIndexRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string DeleteDocIndexRequest::getUniqueId()const
{
	return uniqueId_;
}

void DeleteDocIndexRequest::setUniqueId(const std::string& uniqueId)
{
	uniqueId_ = uniqueId;
	setCoreParameter("UniqueId", uniqueId);
}

std::string DeleteDocIndexRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteDocIndexRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

