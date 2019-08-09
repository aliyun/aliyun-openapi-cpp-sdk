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

#include <alibabacloud/cms/model/ListGroupDynamicRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListGroupDynamicRuleResult::ListGroupDynamicRuleResult() :
	ServiceResult()
{}

ListGroupDynamicRuleResult::ListGroupDynamicRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGroupDynamicRuleResult::~ListGroupDynamicRuleResult()
{}

void ListGroupDynamicRuleResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allResource = value["Resource"]["ResourceItem"];
	for (auto value : allResource)
	{
		ResourceItem resourceObject;
		if(!value["GroupId"].isNull())
			resourceObject.groupId = std::stol(value["GroupId"].asString());
		if(!value["Category"].isNull())
			resourceObject.category = value["Category"].asString();
		if(!value["FilterRelation"].isNull())
			resourceObject.filterRelation = value["FilterRelation"].asString();
		auto allFilters = value["Filters"]["Filter"];
		for (auto value : allFilters)
		{
			ResourceItem::Filter filtersObject;
			if(!value["Function"].isNull())
				filtersObject.function = value["Function"].asString();
			if(!value["Name"].isNull())
				filtersObject.name = value["Name"].asString();
			if(!value["Value"].isNull())
				filtersObject.value = value["Value"].asString();
			resourceObject.filters.push_back(filtersObject);
		}
		resource_.push_back(resourceObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListGroupDynamicRuleResult::getPageSize()const
{
	return pageSize_;
}

int ListGroupDynamicRuleResult::getPageNumber()const
{
	return pageNumber_;
}

int ListGroupDynamicRuleResult::getTotal()const
{
	return total_;
}

std::vector<ListGroupDynamicRuleResult::ResourceItem> ListGroupDynamicRuleResult::getResource()const
{
	return resource_;
}

int ListGroupDynamicRuleResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListGroupDynamicRuleResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListGroupDynamicRuleResult::getSuccess()const
{
	return success_;
}

