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

#include <alibabacloud/ecs/model/EipNotifyPaidResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

EipNotifyPaidResult::EipNotifyPaidResult() :
	ServiceResult()
{}

EipNotifyPaidResult::EipNotifyPaidResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

EipNotifyPaidResult::~EipNotifyPaidResult()
{}

void EipNotifyPaidResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	requestId_ = value["requestId"].asString();
	data_ = value["data"].asString();
	code_ = value["code"].asString();
	message_ = value["message"].asString();
	success_ = std::stoi(value["success"].asString());

}

std::string EipNotifyPaidResult::getRequestId()const
{
	return requestId_;
}

void EipNotifyPaidResult::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
}

std::string EipNotifyPaidResult::getMessage()const
{
	return message_;
}

void EipNotifyPaidResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string EipNotifyPaidResult::getData()const
{
	return data_;
}

void EipNotifyPaidResult::setData(const std::string& data)
{
	data_ = data;
}

std::string EipNotifyPaidResult::getCode()const
{
	return code_;
}

void EipNotifyPaidResult::setCode(const std::string& code)
{
	code_ = code;
}

bool EipNotifyPaidResult::getSuccess()const
{
	return success_;
}

void EipNotifyPaidResult::setSuccess(bool success)
{
	success_ = success;
}

