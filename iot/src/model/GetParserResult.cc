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

#include <alibabacloud/iot/model/GetParserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

GetParserResult::GetParserResult() :
	ServiceResult()
{}

GetParserResult::GetParserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetParserResult::~GetParserResult()
{}

void GetParserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ParserId"].isNull())
		data_.parserId = std::stol(dataNode["ParserId"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["DataSourceId"].isNull())
		data_.dataSourceId = std::stol(dataNode["DataSourceId"].asString());
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["UtcCreated"].isNull())
		data_.utcCreated = dataNode["UtcCreated"].asString();
	if(!dataNode["UtcModified"].isNull())
		data_.utcModified = dataNode["UtcModified"].asString();
	if(!dataNode["ScriptDraft"].isNull())
		data_.scriptDraft = dataNode["ScriptDraft"].asString();
	if(!dataNode["Script"].isNull())
		data_.script = dataNode["Script"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

GetParserResult::Data GetParserResult::getData()const
{
	return data_;
}

std::string GetParserResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetParserResult::getCode()const
{
	return code_;
}

bool GetParserResult::getSuccess()const
{
	return success_;
}

