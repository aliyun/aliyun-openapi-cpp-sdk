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

#include <alibabacloud/tag/model/ListConfigRulesForTargetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tag;
using namespace AlibabaCloud::Tag::Model;

ListConfigRulesForTargetResult::ListConfigRulesForTargetResult() :
	ServiceResult()
{}

ListConfigRulesForTargetResult::ListConfigRulesForTargetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListConfigRulesForTargetResult::~ListConfigRulesForTargetResult()
{}

void ListConfigRulesForTargetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["AggregatorId"].isNull())
			dataObject.aggregatorId = valueDataDataItem["AggregatorId"].asString();
		if(!valueDataDataItem["ConfigRuleId"].isNull())
			dataObject.configRuleId = valueDataDataItem["ConfigRuleId"].asString();
		if(!valueDataDataItem["PolicyType"].isNull())
			dataObject.policyType = valueDataDataItem["PolicyType"].asString();
		if(!valueDataDataItem["Remediation"].isNull())
			dataObject.remediation = valueDataDataItem["Remediation"].asString() == "true";
		if(!valueDataDataItem["TagKey"].isNull())
			dataObject.tagKey = valueDataDataItem["TagKey"].asString();
		if(!valueDataDataItem["TagValue"].isNull())
			dataObject.tagValue = valueDataDataItem["TagValue"].asString();
		if(!valueDataDataItem["TargetId"].isNull())
			dataObject.targetId = valueDataDataItem["TargetId"].asString();
		if(!valueDataDataItem["TargetType"].isNull())
			dataObject.targetType = valueDataDataItem["TargetType"].asString();
		data_.push_back(dataObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListConfigRulesForTargetResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListConfigRulesForTargetResult::DataItem> ListConfigRulesForTargetResult::getData()const
{
	return data_;
}

