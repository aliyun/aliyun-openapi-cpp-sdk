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

#include <alibabacloud/qualitycheck/model/ListRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

ListRulesResult::ListRulesResult() :
	ServiceResult()
{}

ListRulesResult::ListRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRulesResult::~ListRulesResult()
{}

void ListRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Rule"];
	for (auto valueDataRule : allDataNode)
	{
		Rule dataObject;
		if(!valueDataRule["Type"].isNull())
			dataObject.type = std::stoi(valueDataRule["Type"].asString());
		if(!valueDataRule["RuleType"].isNull())
			dataObject.ruleType = std::stoi(valueDataRule["RuleType"].asString());
		if(!valueDataRule["CreateTime"].isNull())
			dataObject.createTime = valueDataRule["CreateTime"].asString();
		if(!valueDataRule["Comments"].isNull())
			dataObject.comments = valueDataRule["Comments"].asString();
		if(!valueDataRule["TypeName"].isNull())
			dataObject.typeName = valueDataRule["TypeName"].asString();
		if(!valueDataRule["Name"].isNull())
			dataObject.name = valueDataRule["Name"].asString();
		if(!valueDataRule["Rid"].isNull())
			dataObject.rid = std::stol(valueDataRule["Rid"].asString());
		auto allBusinessCategoryNameList = value["BusinessCategoryNameList"]["BusinessCategoryNameList"];
		for (auto value : allBusinessCategoryNameList)
			dataObject.businessCategoryNameList.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::string ListRulesResult::getMessage()const
{
	return message_;
}

int ListRulesResult::getPageSize()const
{
	return pageSize_;
}

int ListRulesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListRulesResult::Rule> ListRulesResult::getData()const
{
	return data_;
}

int ListRulesResult::getCount()const
{
	return count_;
}

std::string ListRulesResult::getCode()const
{
	return code_;
}

bool ListRulesResult::getSuccess()const
{
	return success_;
}

