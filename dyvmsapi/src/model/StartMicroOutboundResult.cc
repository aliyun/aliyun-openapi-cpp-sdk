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

#include <alibabacloud/dyvmsapi/model/StartMicroOutboundResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyvmsapi;
using namespace AlibabaCloud::Dyvmsapi::Model;

StartMicroOutboundResult::StartMicroOutboundResult() :
	ServiceResult()
{}

StartMicroOutboundResult::StartMicroOutboundResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartMicroOutboundResult::~StartMicroOutboundResult()
{}

void StartMicroOutboundResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["CustomerInfo"].isNull())
		customerInfo_ = value["CustomerInfo"].asString();
	if(!value["InvokeCmdId"].isNull())
		invokeCmdId_ = value["InvokeCmdId"].asString();
	if(!value["InvokeCreateTime"].isNull())
		invokeCreateTime_ = value["InvokeCreateTime"].asString();

}

std::string StartMicroOutboundResult::getInvokeCreateTime()const
{
	return invokeCreateTime_;
}

std::string StartMicroOutboundResult::getMessage()const
{
	return message_;
}

std::string StartMicroOutboundResult::getInvokeCmdId()const
{
	return invokeCmdId_;
}

std::string StartMicroOutboundResult::getCustomerInfo()const
{
	return customerInfo_;
}

std::string StartMicroOutboundResult::getCode()const
{
	return code_;
}

