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
{
	setMethod(HttpRequest::Method::Post);
}

UserDataCreateRequest::~UserDataCreateRequest()
{}

std::string UserDataCreateRequest::getType()const
{
	return type_;
}

void UserDataCreateRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string UserDataCreateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UserDataCreateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UserDataCreateRequest::getUploadFile()const
{
	return uploadFile_;
}

void UserDataCreateRequest::setUploadFile(const std::string& uploadFile)
{
	uploadFile_ = uploadFile;
	setParameter("UploadFile", uploadFile);
}

std::string UserDataCreateRequest::getName()const
{
	return name_;
}

void UserDataCreateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long UserDataCreateRequest::getBid()const
{
	return bid_;
}

void UserDataCreateRequest::setBid(long bid)
{
	bid_ = bid;
	setParameter("Bid", std::to_string(bid));
}

