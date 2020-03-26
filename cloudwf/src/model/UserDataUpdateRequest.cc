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

#include <alibabacloud/cloudwf/model/UserDataUpdateRequest.h>

using AlibabaCloud::Cloudwf::Model::UserDataUpdateRequest;

UserDataUpdateRequest::UserDataUpdateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "UserDataUpdate")
{
	setMethod(HttpRequest::Method::Post);
}

UserDataUpdateRequest::~UserDataUpdateRequest()
{}

long UserDataUpdateRequest::getIid()const
{
	return iid_;
}

void UserDataUpdateRequest::setIid(long iid)
{
	iid_ = iid;
	setParameter("Iid", std::to_string(iid));
}

std::string UserDataUpdateRequest::getType()const
{
	return type_;
}

void UserDataUpdateRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string UserDataUpdateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UserDataUpdateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UserDataUpdateRequest::getUploadFile()const
{
	return uploadFile_;
}

void UserDataUpdateRequest::setUploadFile(const std::string& uploadFile)
{
	uploadFile_ = uploadFile;
	setParameter("UploadFile", uploadFile);
}

std::string UserDataUpdateRequest::getName()const
{
	return name_;
}

void UserDataUpdateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long UserDataUpdateRequest::getBid()const
{
	return bid_;
}

void UserDataUpdateRequest::setBid(long bid)
{
	bid_ = bid;
	setParameter("Bid", std::to_string(bid));
}

