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

#include <alibabacloud/ccc/model/GetSmsConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetSmsConfigResult::GetSmsConfigResult() :
	ServiceResult()
{}

GetSmsConfigResult::GetSmsConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSmsConfigResult::~GetSmsConfigResult()
{}

void GetSmsConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSmsConfigsNode = value["SmsConfigs"]["SmsConfig"];
	for (auto valueSmsConfigsSmsConfig : allSmsConfigsNode)
	{
		SmsConfig smsConfigsObject;
		if(!valueSmsConfigsSmsConfig["Id"].isNull())
			smsConfigsObject.id = std::stol(valueSmsConfigsSmsConfig["Id"].asString());
		if(!valueSmsConfigsSmsConfig["Instance"].isNull())
			smsConfigsObject.instance = valueSmsConfigsSmsConfig["Instance"].asString();
		if(!valueSmsConfigsSmsConfig["SignName"].isNull())
			smsConfigsObject.signName = valueSmsConfigsSmsConfig["SignName"].asString();
		if(!valueSmsConfigsSmsConfig["TemplateCode"].isNull())
			smsConfigsObject.templateCode = valueSmsConfigsSmsConfig["TemplateCode"].asString();
		if(!valueSmsConfigsSmsConfig["Scenario"].isNull())
			smsConfigsObject.scenario = std::stoi(valueSmsConfigsSmsConfig["Scenario"].asString());
		if(!valueSmsConfigsSmsConfig["Name"].isNull())
			smsConfigsObject.name = valueSmsConfigsSmsConfig["Name"].asString();
		if(!valueSmsConfigsSmsConfig["Description"].isNull())
			smsConfigsObject.description = valueSmsConfigsSmsConfig["Description"].asString();
		if(!valueSmsConfigsSmsConfig["Extra"].isNull())
			smsConfigsObject.extra = valueSmsConfigsSmsConfig["Extra"].asString();
		if(!valueSmsConfigsSmsConfig["GmtCreate"].isNull())
			smsConfigsObject.gmtCreate = valueSmsConfigsSmsConfig["GmtCreate"].asString();
		if(!valueSmsConfigsSmsConfig["GmtModified"].isNull())
			smsConfigsObject.gmtModified = valueSmsConfigsSmsConfig["GmtModified"].asString();
		smsConfigs_.push_back(smsConfigsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetSmsConfigResult::getMessage()const
{
	return message_;
}

int GetSmsConfigResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetSmsConfigResult::SmsConfig> GetSmsConfigResult::getSmsConfigs()const
{
	return smsConfigs_;
}

std::string GetSmsConfigResult::getCode()const
{
	return code_;
}

bool GetSmsConfigResult::getSuccess()const
{
	return success_;
}

