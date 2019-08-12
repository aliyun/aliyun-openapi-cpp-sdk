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

#include <alibabacloud/imm/model/CreateDocIndexTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateDocIndexTaskRequest;

CreateDocIndexTaskRequest::CreateDocIndexTaskRequest() :
	RpcServiceRequest("imm", "2017-09-06", "CreateDocIndexTask")
{}

CreateDocIndexTaskRequest::~CreateDocIndexTaskRequest()
{}

std::string CreateDocIndexTaskRequest::getCustomKey1()const
{
	return customKey1_;
}

void CreateDocIndexTaskRequest::setCustomKey1(const std::string& customKey1)
{
	customKey1_ = customKey1;
	setCoreParameter("CustomKey1", std::to_string(customKey1));
}

std::string CreateDocIndexTaskRequest::getSet()const
{
	return set_;
}

void CreateDocIndexTaskRequest::setSet(const std::string& set)
{
	set_ = set;
	setCoreParameter("Set", std::to_string(set));
}

std::string CreateDocIndexTaskRequest::getCustomKey5()const
{
	return customKey5_;
}

void CreateDocIndexTaskRequest::setCustomKey5(const std::string& customKey5)
{
	customKey5_ = customKey5;
	setCoreParameter("CustomKey5", std::to_string(customKey5));
}

std::string CreateDocIndexTaskRequest::getCustomKey4()const
{
	return customKey4_;
}

void CreateDocIndexTaskRequest::setCustomKey4(const std::string& customKey4)
{
	customKey4_ = customKey4;
	setCoreParameter("CustomKey4", std::to_string(customKey4));
}

std::string CreateDocIndexTaskRequest::getCustomKey3()const
{
	return customKey3_;
}

void CreateDocIndexTaskRequest::setCustomKey3(const std::string& customKey3)
{
	customKey3_ = customKey3;
	setCoreParameter("CustomKey3", std::to_string(customKey3));
}

std::string CreateDocIndexTaskRequest::getCustomKey2()const
{
	return customKey2_;
}

void CreateDocIndexTaskRequest::setCustomKey2(const std::string& customKey2)
{
	customKey2_ = customKey2;
	setCoreParameter("CustomKey2", std::to_string(customKey2));
}

std::string CreateDocIndexTaskRequest::getProject()const
{
	return project_;
}

void CreateDocIndexTaskRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string CreateDocIndexTaskRequest::getCustomKey6()const
{
	return customKey6_;
}

void CreateDocIndexTaskRequest::setCustomKey6(const std::string& customKey6)
{
	customKey6_ = customKey6;
	setCoreParameter("CustomKey6", std::to_string(customKey6));
}

std::string CreateDocIndexTaskRequest::getContentType()const
{
	return contentType_;
}

void CreateDocIndexTaskRequest::setContentType(const std::string& contentType)
{
	contentType_ = contentType;
	setCoreParameter("ContentType", std::to_string(contentType));
}

std::string CreateDocIndexTaskRequest::getRegionId()const
{
	return regionId_;
}

void CreateDocIndexTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateDocIndexTaskRequest::getName()const
{
	return name_;
}

void CreateDocIndexTaskRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreateDocIndexTaskRequest::getSrcUri()const
{
	return srcUri_;
}

void CreateDocIndexTaskRequest::setSrcUri(const std::string& srcUri)
{
	srcUri_ = srcUri;
	setCoreParameter("SrcUri", std::to_string(srcUri));
}

std::string CreateDocIndexTaskRequest::getUniqueId()const
{
	return uniqueId_;
}

void CreateDocIndexTaskRequest::setUniqueId(const std::string& uniqueId)
{
	uniqueId_ = uniqueId;
	setCoreParameter("UniqueId", std::to_string(uniqueId));
}

