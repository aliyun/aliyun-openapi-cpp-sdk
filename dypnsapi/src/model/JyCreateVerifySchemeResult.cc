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

#include <alibabacloud/dypnsapi/model/JyCreateVerifySchemeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dypnsapi;
using namespace AlibabaCloud::Dypnsapi::Model;

JyCreateVerifySchemeResult::JyCreateVerifySchemeResult() :
	ServiceResult()
{}

JyCreateVerifySchemeResult::JyCreateVerifySchemeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

JyCreateVerifySchemeResult::~JyCreateVerifySchemeResult()
{}

void JyCreateVerifySchemeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto gateVerifySchemeDataNode = value["GateVerifySchemeData"];
	if(!gateVerifySchemeDataNode["SchemeCode"].isNull())
		gateVerifySchemeData_.schemeCode = gateVerifySchemeDataNode["SchemeCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string JyCreateVerifySchemeResult::getMessage()const
{
	return message_;
}

JyCreateVerifySchemeResult::GateVerifySchemeData JyCreateVerifySchemeResult::getGateVerifySchemeData()const
{
	return gateVerifySchemeData_;
}

std::string JyCreateVerifySchemeResult::getCode()const
{
	return code_;
}

