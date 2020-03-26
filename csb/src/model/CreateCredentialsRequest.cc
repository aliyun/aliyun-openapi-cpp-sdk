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

#include <alibabacloud/csb/model/CreateCredentialsRequest.h>

using AlibabaCloud::CSB::Model::CreateCredentialsRequest;

CreateCredentialsRequest::CreateCredentialsRequest() :
	RpcServiceRequest("csb", "2017-11-18", "CreateCredentials")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCredentialsRequest::~CreateCredentialsRequest()
{}

std::string CreateCredentialsRequest::getData()const
{
	return data_;
}

void CreateCredentialsRequest::setData(const std::string& data)
{
	data_ = data;
	setBodyParameter("Data", data);
}

long CreateCredentialsRequest::getCsbId()const
{
	return csbId_;
}

void CreateCredentialsRequest::setCsbId(long csbId)
{
	csbId_ = csbId;
	setParameter("CsbId", std::to_string(csbId));
}

