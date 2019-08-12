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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSmsConfigs = value["SmsConfigs"]["SmsConfig"];
	for (auto value : allSmsConfigs)
	{
		SmsConfig smsConfigsObject;
		if(!value["Id"].isNull())
			smsConfigsObject.id = std::stol(value["Id"].asString());
		if(!value["Instance"].isNull())
			smsConfigsObject.instance = value["Instance"].asString();
		if(!value["SignName"].isNull())
			smsConfigsObject.signName = value["SignName"].asString();
		if(!value["TemplateCode"].isNull())
			smsConfigsObject.templateCode = value["TemplateCode"].asString();
		if(!value["Scenario"].isNull())
			smsConfigsObject.scenario = std::stoi(value["Scenario"].asString());
		if(!value["Name"].isNull())
			smsConfigsObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			smsConfigsObject.description = value["Description"].asString();
		if(!value["Extra"].isNull())
			smsConfigsObject.extra = value["Extra"].asString();
		if(!value["GmtCreate"].isNull())
			smsConfigsObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModified"].isNull())
			smsConfigsObject.gmtModified = value["GmtModified"].asString();
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

