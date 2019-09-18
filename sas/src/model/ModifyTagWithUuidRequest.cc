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

#include <alibabacloud/sas/model/ModifyTagWithUuidRequest.h>

using AlibabaCloud::Sas::Model::ModifyTagWithUuidRequest;

ModifyTagWithUuidRequest::ModifyTagWithUuidRequest() :
	RpcServiceRequest("sas", "2018-12-03", "ModifyTagWithUuid")
{}

ModifyTagWithUuidRequest::~ModifyTagWithUuidRequest()
{}

std::string ModifyTagWithUuidRequest::getTagId()const
{
	return tagId_;
}

void ModifyTagWithUuidRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setCoreParameter("TagId", tagId);
}

std::string ModifyTagWithUuidRequest::getMachineTypes()const
{
	return machineTypes_;
}

void ModifyTagWithUuidRequest::setMachineTypes(const std::string& machineTypes)
{
	machineTypes_ = machineTypes;
	setCoreParameter("MachineTypes", machineTypes);
}

std::string ModifyTagWithUuidRequest::getTagList()const
{
	return tagList_;
}

void ModifyTagWithUuidRequest::setTagList(const std::string& tagList)
{
	tagList_ = tagList;
	setCoreParameter("TagList", tagList);
}

std::string ModifyTagWithUuidRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyTagWithUuidRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ModifyTagWithUuidRequest::getUuidList()const
{
	return uuidList_;
}

void ModifyTagWithUuidRequest::setUuidList(const std::string& uuidList)
{
	uuidList_ = uuidList;
	setCoreParameter("UuidList", uuidList);
}

