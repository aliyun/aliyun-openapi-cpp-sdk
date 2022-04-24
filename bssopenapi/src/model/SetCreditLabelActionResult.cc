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

#include <alibabacloud/bssopenapi/model/SetCreditLabelActionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

SetCreditLabelActionResult::SetCreditLabelActionResult() :
	ServiceResult()
{}

SetCreditLabelActionResult::SetCreditLabelActionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SetCreditLabelActionResult::~SetCreditLabelActionResult()
{}

void SetCreditLabelActionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString() == "true";
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string SetCreditLabelActionResult::getMessage()const
{
	return message_;
}

bool SetCreditLabelActionResult::getData()const
{
	return data_;
}

std::string SetCreditLabelActionResult::getCode()const
{
	return code_;
}

bool SetCreditLabelActionResult::getSuccess()const
{
	return success_;
}

