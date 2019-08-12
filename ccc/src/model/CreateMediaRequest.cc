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

#include <alibabacloud/ccc/model/CreateMediaRequest.h>

using AlibabaCloud::CCC::Model::CreateMediaRequest;

CreateMediaRequest::CreateMediaRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CreateMedia")
{}

CreateMediaRequest::~CreateMediaRequest()
{}

std::string CreateMediaRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateMediaRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string CreateMediaRequest::getFileName()const
{
	return fileName_;
}

void CreateMediaRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setCoreParameter("FileName", fileName);
}

std::string CreateMediaRequest::getName()const
{
	return name_;
}

void CreateMediaRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateMediaRequest::getDescription()const
{
	return description_;
}

void CreateMediaRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateMediaRequest::getOssFilePath()const
{
	return ossFilePath_;
}

void CreateMediaRequest::setOssFilePath(const std::string& ossFilePath)
{
	ossFilePath_ = ossFilePath;
	setCoreParameter("OssFilePath", ossFilePath);
}

std::string CreateMediaRequest::getUploadResult()const
{
	return uploadResult_;
}

void CreateMediaRequest::setUploadResult(const std::string& uploadResult)
{
	uploadResult_ = uploadResult;
	setCoreParameter("UploadResult", uploadResult);
}

std::string CreateMediaRequest::getType()const
{
	return type_;
}

void CreateMediaRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string CreateMediaRequest::getContent()const
{
	return content_;
}

void CreateMediaRequest::setContent(const std::string& content)
{
	content_ = content;
	setCoreParameter("Content", content);
}

std::string CreateMediaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateMediaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateMediaRequest::getOssFileName()const
{
	return ossFileName_;
}

void CreateMediaRequest::setOssFileName(const std::string& ossFileName)
{
	ossFileName_ = ossFileName;
	setCoreParameter("OssFileName", ossFileName);
}

