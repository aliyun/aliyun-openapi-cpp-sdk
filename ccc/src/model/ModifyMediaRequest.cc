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

#include <alibabacloud/ccc/model/ModifyMediaRequest.h>

using AlibabaCloud::CCC::Model::ModifyMediaRequest;

ModifyMediaRequest::ModifyMediaRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ModifyMedia")
{}

ModifyMediaRequest::~ModifyMediaRequest()
{}

std::string ModifyMediaRequest::getDescription()const
{
	return description_;
}

void ModifyMediaRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyMediaRequest::getOssFilePath()const
{
	return ossFilePath_;
}

void ModifyMediaRequest::setOssFilePath(const std::string& ossFilePath)
{
	ossFilePath_ = ossFilePath;
	setCoreParameter("OssFilePath", ossFilePath);
}

std::string ModifyMediaRequest::getUploadResult()const
{
	return uploadResult_;
}

void ModifyMediaRequest::setUploadResult(const std::string& uploadResult)
{
	uploadResult_ = uploadResult;
	setCoreParameter("UploadResult", uploadResult);
}

std::string ModifyMediaRequest::getType()const
{
	return type_;
}

void ModifyMediaRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string ModifyMediaRequest::getContent()const
{
	return content_;
}

void ModifyMediaRequest::setContent(const std::string& content)
{
	content_ = content;
	setCoreParameter("Content", content);
}

std::string ModifyMediaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyMediaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyMediaRequest::getOssFileName()const
{
	return ossFileName_;
}

void ModifyMediaRequest::setOssFileName(const std::string& ossFileName)
{
	ossFileName_ = ossFileName;
	setCoreParameter("OssFileName", ossFileName);
}

std::string ModifyMediaRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyMediaRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyMediaRequest::getFileName()const
{
	return fileName_;
}

void ModifyMediaRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setCoreParameter("FileName", fileName);
}

std::string ModifyMediaRequest::getName()const
{
	return name_;
}

void ModifyMediaRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

