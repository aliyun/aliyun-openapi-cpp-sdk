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

#include <alibabacloud/trademark/model/InsertRenewInfoRequest.h>

using AlibabaCloud::Trademark::Model::InsertRenewInfoRequest;

InsertRenewInfoRequest::InsertRenewInfoRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "InsertRenewInfo")
{
	setMethod(HttpRequest::Method::Post);
}

InsertRenewInfoRequest::~InsertRenewInfoRequest()
{}

std::string InsertRenewInfoRequest::getEngName()const
{
	return engName_;
}

void InsertRenewInfoRequest::setEngName(const std::string& engName)
{
	engName_ = engName;
	setParameter("EngName", engName);
}

std::string InsertRenewInfoRequest::getAddress()const
{
	return address_;
}

void InsertRenewInfoRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

long InsertRenewInfoRequest::getRegisterTime()const
{
	return registerTime_;
}

void InsertRenewInfoRequest::setRegisterTime(long registerTime)
{
	registerTime_ = registerTime;
	setParameter("RegisterTime", std::to_string(registerTime));
}

std::string InsertRenewInfoRequest::getEngAddress()const
{
	return engAddress_;
}

void InsertRenewInfoRequest::setEngAddress(const std::string& engAddress)
{
	engAddress_ = engAddress;
	setParameter("EngAddress", engAddress);
}

std::string InsertRenewInfoRequest::getName()const
{
	return name_;
}

void InsertRenewInfoRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

