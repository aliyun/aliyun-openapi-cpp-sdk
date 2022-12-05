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

#include <alibabacloud/sae/model/CreateSecretResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

CreateSecretResult::CreateSecretResult() :
	ServiceResult()
{}

CreateSecretResult::CreateSecretResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSecretResult::~CreateSecretResult()
{}

void CreateSecretResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["SecretId"].isNull())
		data_.secretId = std::stol(dataNode["SecretId"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateSecretResult::getMessage()const
{
	return message_;
}

std::string CreateSecretResult::getTraceId()const
{
	return traceId_;
}

CreateSecretResult::Data CreateSecretResult::getData()const
{
	return data_;
}

std::string CreateSecretResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateSecretResult::getCode()const
{
	return code_;
}

bool CreateSecretResult::getSuccess()const
{
	return success_;
}

