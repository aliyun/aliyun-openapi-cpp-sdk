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

#include <alibabacloud/ecs/model/EipFillParamsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

EipFillParamsResult::EipFillParamsResult() :
	ServiceResult()
{}

EipFillParamsResult::EipFillParamsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

EipFillParamsResult::~EipFillParamsResult()
{}

void EipFillParamsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	requestId_ = value["requestId"].asString();
	data_ = value["data"].asString();
	code_ = value["code"].asString();
	success_ = std::stoi(value["success"].asString());
	message_ = value["message"].asString();

}

std::string EipFillParamsResult::getRequestId()const
{
	return requestId_;
}

void EipFillParamsResult::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
}

std::string EipFillParamsResult::getMessage()const
{
	return message_;
}

void EipFillParamsResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string EipFillParamsResult::getData()const
{
	return data_;
}

void EipFillParamsResult::setData(const std::string& data)
{
	data_ = data;
}

std::string EipFillParamsResult::getCode()const
{
	return code_;
}

void EipFillParamsResult::setCode(const std::string& code)
{
	code_ = code;
}

bool EipFillParamsResult::getSuccess()const
{
	return success_;
}

void EipFillParamsResult::setSuccess(bool success)
{
	success_ = success;
}

