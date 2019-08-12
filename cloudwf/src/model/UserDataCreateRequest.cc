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

#include <alibabacloud/cloudwf/model/UserDataCreateRequest.h>

using AlibabaCloud::Cloudwf::Model::UserDataCreateRequest;

UserDataCreateRequest::UserDataCreateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "UserDataCreate")
{}

UserDataCreateRequest::~UserDataCreateRequest()
{}

std::string UserDataCreateRequest::getUploadFile()const
{
	return uploadFile_;
}

void UserDataCreateRequest::setUploadFile(const std::string& uploadFile)
{
	uploadFile_ = uploadFile;
	setCoreParameter("UploadFile", std::to_string(uploadFile));
}

std::string UserDataCreateRequest::getName()const
{
	return name_;
}

void UserDataCreateRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

long UserDataCreateRequest::getBid()const
{
	return bid_;
}

void UserDataCreateRequest::setBid(long bid)
{
	bid_ = bid;
	setCoreParameter("Bid", bid);
}

std::string UserDataCreateRequest::getType()const
{
	return type_;
}

void UserDataCreateRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string UserDataCreateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UserDataCreateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

