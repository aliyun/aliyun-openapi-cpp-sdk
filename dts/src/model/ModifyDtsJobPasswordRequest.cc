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

#include <alibabacloud/dts/model/ModifyDtsJobPasswordRequest.h>

using AlibabaCloud::Dts::Model::ModifyDtsJobPasswordRequest;

ModifyDtsJobPasswordRequest::ModifyDtsJobPasswordRequest() :
	RpcServiceRequest("dts", "2020-01-01", "ModifyDtsJobPassword")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDtsJobPasswordRequest::~ModifyDtsJobPasswordRequest()
{}

std::string ModifyDtsJobPasswordRequest::getPassword()const
{
	return password_;
}

void ModifyDtsJobPasswordRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string ModifyDtsJobPasswordRequest::getEndpoint()const
{
	return endpoint_;
}

void ModifyDtsJobPasswordRequest::setEndpoint(const std::string& endpoint)
{
	endpoint_ = endpoint;
	setParameter("Endpoint", endpoint);
}

std::string ModifyDtsJobPasswordRequest::getDtsJobId()const
{
	return dtsJobId_;
}

void ModifyDtsJobPasswordRequest::setDtsJobId(const std::string& dtsJobId)
{
	dtsJobId_ = dtsJobId;
	setParameter("DtsJobId", dtsJobId);
}

std::string ModifyDtsJobPasswordRequest::getUserName()const
{
	return userName_;
}

void ModifyDtsJobPasswordRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

