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

#include <alibabacloud/teambition-aliyun/model/ApplySmallMicroResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Teambition_aliyun;
using namespace AlibabaCloud::Teambition_aliyun::Model;

ApplySmallMicroResult::ApplySmallMicroResult() :
	ServiceResult()
{}

ApplySmallMicroResult::ApplySmallMicroResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ApplySmallMicroResult::~ApplySmallMicroResult()
{}

void ApplySmallMicroResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["code"].isNull())
		code_ = std::stoi(value["code"].asString());
	if(!value["result"].isNull())
		result_ = value["result"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString() == "true";
	if(!value["raw"].isNull())
		raw_ = value["raw"].asString() == "true";

}

bool ApplySmallMicroResult::getMessage()const
{
	return message_;
}

bool ApplySmallMicroResult::getRaw()const
{
	return raw_;
}

int ApplySmallMicroResult::getCode()const
{
	return code_;
}

std::string ApplySmallMicroResult::getResult()const
{
	return result_;
}

