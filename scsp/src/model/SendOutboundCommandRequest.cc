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

#include <alibabacloud/scsp/model/SendOutboundCommandRequest.h>

using AlibabaCloud::Scsp::Model::SendOutboundCommandRequest;

SendOutboundCommandRequest::SendOutboundCommandRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "SendOutboundCommand")
{
	setMethod(HttpRequest::Method::Post);
}

SendOutboundCommandRequest::~SendOutboundCommandRequest()
{}

std::string SendOutboundCommandRequest::getCallingNumber()const
{
	return callingNumber_;
}

void SendOutboundCommandRequest::setCallingNumber(const std::string& callingNumber)
{
	callingNumber_ = callingNumber;
	setBodyParameter("CallingNumber", callingNumber);
}

std::string SendOutboundCommandRequest::getInstanceId()const
{
	return instanceId_;
}

void SendOutboundCommandRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string SendOutboundCommandRequest::getAccountName()const
{
	return accountName_;
}

void SendOutboundCommandRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string SendOutboundCommandRequest::getCalledNumber()const
{
	return calledNumber_;
}

void SendOutboundCommandRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setBodyParameter("CalledNumber", calledNumber);
}

std::string SendOutboundCommandRequest::getCustomerInfo()const
{
	return customerInfo_;
}

void SendOutboundCommandRequest::setCustomerInfo(const std::string& customerInfo)
{
	customerInfo_ = customerInfo;
	setBodyParameter("CustomerInfo", customerInfo);
}

