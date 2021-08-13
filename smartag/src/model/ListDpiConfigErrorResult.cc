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

#include <alibabacloud/smartag/model/ListDpiConfigErrorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

ListDpiConfigErrorResult::ListDpiConfigErrorResult() :
	ServiceResult()
{}

ListDpiConfigErrorResult::ListDpiConfigErrorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDpiConfigErrorResult::~ListDpiConfigErrorResult()
{}

void ListDpiConfigErrorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDpiConfigErrorNode = value["DpiConfigError"]["DpiConfigErrorItem"];
	for (auto valueDpiConfigErrorDpiConfigErrorItem : allDpiConfigErrorNode)
	{
		DpiConfigErrorItem dpiConfigErrorObject;
		if(!valueDpiConfigErrorDpiConfigErrorItem["SN"].isNull())
			dpiConfigErrorObject.sN = valueDpiConfigErrorDpiConfigErrorItem["SN"].asString();
		if(!valueDpiConfigErrorDpiConfigErrorItem["SmartAGId"].isNull())
			dpiConfigErrorObject.smartAGId = valueDpiConfigErrorDpiConfigErrorItem["SmartAGId"].asString();
		if(!valueDpiConfigErrorDpiConfigErrorItem["ErrorType"].isNull())
			dpiConfigErrorObject.errorType = valueDpiConfigErrorDpiConfigErrorItem["ErrorType"].asString();
		auto allRuleConfigErrorListNode = valueDpiConfigErrorDpiConfigErrorItem["RuleConfigErrorList"]["RuleConfigErrorListItem"];
		for (auto valueDpiConfigErrorDpiConfigErrorItemRuleConfigErrorListRuleConfigErrorListItem : allRuleConfigErrorListNode)
		{
			DpiConfigErrorItem::RuleConfigErrorListItem ruleConfigErrorListObject;
			if(!valueDpiConfigErrorDpiConfigErrorItemRuleConfigErrorListRuleConfigErrorListItem["RuleId"].isNull())
				ruleConfigErrorListObject.ruleId = valueDpiConfigErrorDpiConfigErrorItemRuleConfigErrorListRuleConfigErrorListItem["RuleId"].asString();
			auto allDpiSignatureIds = value["DpiSignatureIds"]["DpiSignatureIds"];
			for (auto value : allDpiSignatureIds)
				ruleConfigErrorListObject.dpiSignatureIds.push_back(value.asString());
			auto allDpiGroupIds = value["DpiGroupIds"]["DpiGroupIds"];
			for (auto value : allDpiGroupIds)
				ruleConfigErrorListObject.dpiGroupIds.push_back(value.asString());
			dpiConfigErrorObject.ruleConfigErrorList.push_back(ruleConfigErrorListObject);
		}
		dpiConfigError_.push_back(dpiConfigErrorObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListDpiConfigErrorResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListDpiConfigErrorResult::DpiConfigErrorItem> ListDpiConfigErrorResult::getDpiConfigError()const
{
	return dpiConfigError_;
}

int ListDpiConfigErrorResult::getTotal()const
{
	return total_;
}

int ListDpiConfigErrorResult::getMaxResults()const
{
	return maxResults_;
}

