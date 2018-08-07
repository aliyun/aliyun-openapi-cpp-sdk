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

#include <alibabacloud/iot/model/ListRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

ListRuleResult::ListRuleResult() :
	ServiceResult()
{}

ListRuleResult::ListRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRuleResult::~ListRuleResult()
{}

void ListRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["RuleInfo"];
	for (auto value : allData)
	{
		RuleInfo dataObject;
		if(!value["Id"].isNull())
			dataObject.id = std::stol(value["Id"].asString());
		if(!value["Select"].isNull())
			dataObject.select = value["Select"].asString();
		if(!value["Topic"].isNull())
			dataObject.topic = value["Topic"].asString();
		if(!value["ShortTopic"].isNull())
			dataObject.shortTopic = value["ShortTopic"].asString();
		if(!value["Where"].isNull())
			dataObject.where = value["Where"].asString();
		if(!value["Status"].isNull())
			dataObject.status = value["Status"].asString();
		if(!value["CreateUserId"].isNull())
			dataObject.createUserId = std::stol(value["CreateUserId"].asString());
		if(!value["ProductKey"].isNull())
			dataObject.productKey = value["ProductKey"].asString();
		if(!value["Name"].isNull())
			dataObject.name = value["Name"].asString();
		if(!value["DataType"].isNull())
			dataObject.dataType = value["DataType"].asString();
		if(!value["RuleDesc"].isNull())
			dataObject.ruleDesc = value["RuleDesc"].asString();
		if(!value["Created"].isNull())
			dataObject.created = value["Created"].asString();
		if(!value["Modified"].isNull())
			dataObject.modified = value["Modified"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListRuleResult::getPageSize()const
{
	return pageSize_;
}

int ListRuleResult::getTotal()const
{
	return total_;
}

std::vector<ListRuleResult::RuleInfo> ListRuleResult::getData()const
{
	return data_;
}

int ListRuleResult::getPage()const
{
	return page_;
}

std::string ListRuleResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListRuleResult::getCode()const
{
	return code_;
}

bool ListRuleResult::getSuccess()const
{
	return success_;
}

