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

#include <alibabacloud/vpc/model/ModifyRouteTableAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ModifyRouteTableAttributesResult::ModifyRouteTableAttributesResult() :
	ServiceResult()
{}

ModifyRouteTableAttributesResult::ModifyRouteTableAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyRouteTableAttributesResult::~ModifyRouteTableAttributesResult()
{}

void ModifyRouteTableAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	success_ = std::stoi(value["Success"].asString());

}

std::string ModifyRouteTableAttributesResult::getMessage()const
{
	return message_;
}

void ModifyRouteTableAttributesResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string ModifyRouteTableAttributesResult::getCode()const
{
	return code_;
}

void ModifyRouteTableAttributesResult::setCode(const std::string& code)
{
	code_ = code;
}

bool ModifyRouteTableAttributesResult::getSuccess()const
{
	return success_;
}

void ModifyRouteTableAttributesResult::setSuccess(bool success)
{
	success_ = success;
}

