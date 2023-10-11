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

#include <alibabacloud/dypnsapi/model/CreateSchemeConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dypnsapi;
using namespace AlibabaCloud::Dypnsapi::Model;

CreateSchemeConfigResult::CreateSchemeConfigResult() :
	ServiceResult()
{}

CreateSchemeConfigResult::CreateSchemeConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSchemeConfigResult::~CreateSchemeConfigResult()
{}

void CreateSchemeConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto modelNode = value["Model"];
	if(!modelNode["SchemeCode"].isNull())
		model_.schemeCode = modelNode["SchemeCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateSchemeConfigResult::getMessage()const
{
	return message_;
}

CreateSchemeConfigResult::Model CreateSchemeConfigResult::getModel()const
{
	return model_;
}

std::string CreateSchemeConfigResult::getCode()const
{
	return code_;
}

bool CreateSchemeConfigResult::getSuccess()const
{
	return success_;
}

