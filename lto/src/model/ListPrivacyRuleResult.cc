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

#include <alibabacloud/lto/model/ListPrivacyRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

ListPrivacyRuleResult::ListPrivacyRuleResult() :
	ServiceResult()
{}

ListPrivacyRuleResult::ListPrivacyRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrivacyRuleResult::~ListPrivacyRuleResult()
{}

void ListPrivacyRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Num"].isNull())
		data_.num = std::stoi(dataNode["Num"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["Size"].isNull())
		data_.size = std::stoi(dataNode["Size"].asString());
	auto allPageDataNode = dataNode["PageData"]["PrivacyRuleInfo"];
	for (auto dataNodePageDataPrivacyRuleInfo : allPageDataNode)
	{
		Data::PrivacyRuleInfo privacyRuleInfoObject;
		if(!dataNodePageDataPrivacyRuleInfo["Status"].isNull())
			privacyRuleInfoObject.status = dataNodePageDataPrivacyRuleInfo["Status"].asString();
		if(!dataNodePageDataPrivacyRuleInfo["CurrentUser"].isNull())
			privacyRuleInfoObject.currentUser = dataNodePageDataPrivacyRuleInfo["CurrentUser"].asString() == "true";
		if(!dataNodePageDataPrivacyRuleInfo["AlgType"].isNull())
			privacyRuleInfoObject.algType = dataNodePageDataPrivacyRuleInfo["AlgType"].asString();
		if(!dataNodePageDataPrivacyRuleInfo["Remark"].isNull())
			privacyRuleInfoObject.remark = dataNodePageDataPrivacyRuleInfo["Remark"].asString();
		if(!dataNodePageDataPrivacyRuleInfo["MemberName"].isNull())
			privacyRuleInfoObject.memberName = dataNodePageDataPrivacyRuleInfo["MemberName"].asString();
		if(!dataNodePageDataPrivacyRuleInfo["PrivacyRuleId"].isNull())
			privacyRuleInfoObject.privacyRuleId = dataNodePageDataPrivacyRuleInfo["PrivacyRuleId"].asString();
		if(!dataNodePageDataPrivacyRuleInfo["Name"].isNull())
			privacyRuleInfoObject.name = dataNodePageDataPrivacyRuleInfo["Name"].asString();
		if(!dataNodePageDataPrivacyRuleInfo["AlgImpl"].isNull())
			privacyRuleInfoObject.algImpl = dataNodePageDataPrivacyRuleInfo["AlgImpl"].asString();
		data_.pageData.push_back(privacyRuleInfoObject);
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

std::string ListPrivacyRuleResult::getMessage()const
{
	return message_;
}

int ListPrivacyRuleResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListPrivacyRuleResult::Data ListPrivacyRuleResult::getData()const
{
	return data_;
}

std::string ListPrivacyRuleResult::getCode()const
{
	return code_;
}

bool ListPrivacyRuleResult::getSuccess()const
{
	return success_;
}

