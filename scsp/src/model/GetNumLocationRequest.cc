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

#include <alibabacloud/scsp/model/GetNumLocationRequest.h>

using AlibabaCloud::Scsp::Model::GetNumLocationRequest;

GetNumLocationRequest::GetNumLocationRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "GetNumLocation")
{
	setMethod(HttpRequest::Method::Get);
}

GetNumLocationRequest::~GetNumLocationRequest()
{}

std::string GetNumLocationRequest::getClientToken()const
{
	return clientToken_;
}

void GetNumLocationRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string GetNumLocationRequest::getInstanceId()const
{
	return instanceId_;
}

void GetNumLocationRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string GetNumLocationRequest::getPhoneNum()const
{
	return phoneNum_;
}

void GetNumLocationRequest::setPhoneNum(const std::string& phoneNum)
{
	phoneNum_ = phoneNum;
	setParameter("PhoneNum", phoneNum);
}

