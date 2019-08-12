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

#include <alibabacloud/ccc/model/PreModifyMediaRequest.h>

using AlibabaCloud::CCC::Model::PreModifyMediaRequest;

PreModifyMediaRequest::PreModifyMediaRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "PreModifyMedia")
{}

PreModifyMediaRequest::~PreModifyMediaRequest()
{}

std::string PreModifyMediaRequest::getInstanceId()const
{
	return instanceId_;
}

void PreModifyMediaRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string PreModifyMediaRequest::getFileName()const
{
	return fileName_;
}

void PreModifyMediaRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setCoreParameter("FileName", std::to_string(fileName));
}

std::string PreModifyMediaRequest::getName()const
{
	return name_;
}

void PreModifyMediaRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string PreModifyMediaRequest::getDescription()const
{
	return description_;
}

void PreModifyMediaRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string PreModifyMediaRequest::getType()const
{
	return type_;
}

void PreModifyMediaRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string PreModifyMediaRequest::getContent()const
{
	return content_;
}

void PreModifyMediaRequest::setContent(const std::string& content)
{
	content_ = content;
	setCoreParameter("Content", std::to_string(content));
}

std::string PreModifyMediaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PreModifyMediaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

