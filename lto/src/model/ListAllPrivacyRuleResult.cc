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

#include <alibabacloud/lto/model/ListAllPrivacyRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

ListAllPrivacyRuleResult::ListAllPrivacyRuleResult() :
	ServiceResult()
{}

ListAllPrivacyRuleResult::ListAllPrivacyRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAllPrivacyRuleResult::~ListAllPrivacyRuleResult()
{}

void ListAllPrivacyRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["PrivacyRuleInfo"];
	for (auto valueDataPrivacyRuleInfo : allDataNode)
	{
		PrivacyRuleInfo dataObject;
		if(!valueDataPrivacyRuleInfo["Name"].isNull())
			dataObject.name = valueDataPrivacyRuleInfo["Name"].asString();
		if(!valueDataPrivacyRuleInfo["PrivacyRuleId"].isNull())
			dataObject.privacyRuleId = valueDataPrivacyRuleInfo["PrivacyRuleId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAllPrivacyRuleResult::getMessage()const
{
	return message_;
}

int ListAllPrivacyRuleResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListAllPrivacyRuleResult::PrivacyRuleInfo> ListAllPrivacyRuleResult::getData()const
{
	return data_;
}

std::string ListAllPrivacyRuleResult::getCode()const
{
	return code_;
}

bool ListAllPrivacyRuleResult::getSuccess()const
{
	return success_;
}

