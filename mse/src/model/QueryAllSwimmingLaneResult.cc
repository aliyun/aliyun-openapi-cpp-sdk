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

#include <alibabacloud/mse/model/QueryAllSwimmingLaneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

QueryAllSwimmingLaneResult::QueryAllSwimmingLaneResult() :
	ServiceResult()
{}

QueryAllSwimmingLaneResult::QueryAllSwimmingLaneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAllSwimmingLaneResult::~QueryAllSwimmingLaneResult()
{}

void QueryAllSwimmingLaneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SwimmingLaneGroup"];
	for (auto valueDataSwimmingLaneGroup : allDataNode)
	{
		SwimmingLaneGroup dataObject;
		if(!valueDataSwimmingLaneGroup["Name"].isNull())
			dataObject.name = valueDataSwimmingLaneGroup["Name"].asString();
		if(!valueDataSwimmingLaneGroup["name"].isNull())
			dataObject.name1 = valueDataSwimmingLaneGroup["name"].asString();
		if(!valueDataSwimmingLaneGroup["userId"].isNull())
			dataObject.userId = valueDataSwimmingLaneGroup["userId"].asString();
		if(!valueDataSwimmingLaneGroup["UserId"].isNull())
			dataObject.userId2 = valueDataSwimmingLaneGroup["UserId"].asString();
		if(!valueDataSwimmingLaneGroup["MessageQueueFilterSide"].isNull())
			dataObject.messageQueueFilterSide = valueDataSwimmingLaneGroup["MessageQueueFilterSide"].asString();
		if(!valueDataSwimmingLaneGroup["enable"].isNull())
			dataObject.enable = valueDataSwimmingLaneGroup["enable"].asString();
		if(!valueDataSwimmingLaneGroup["Enable"].isNull())
			dataObject.enable3 = valueDataSwimmingLaneGroup["Enable"].asString();
		if(!valueDataSwimmingLaneGroup["Namespace"].isNull())
			dataObject._namespace = valueDataSwimmingLaneGroup["Namespace"].asString();
		if(!valueDataSwimmingLaneGroup["RecordCanaryDetail"].isNull())
			dataObject.recordCanaryDetail = valueDataSwimmingLaneGroup["RecordCanaryDetail"].asString() == "true";
		if(!valueDataSwimmingLaneGroup["id"].isNull())
			dataObject.id = std::stol(valueDataSwimmingLaneGroup["id"].asString());
		if(!valueDataSwimmingLaneGroup["Id"].isNull())
			dataObject.id4 = std::stol(valueDataSwimmingLaneGroup["Id"].asString());
		if(!valueDataSwimmingLaneGroup["regionId"].isNull())
			dataObject.regionId = valueDataSwimmingLaneGroup["regionId"].asString();
		if(!valueDataSwimmingLaneGroup["RegionId"].isNull())
			dataObject.regionId5 = valueDataSwimmingLaneGroup["RegionId"].asString();
		if(!valueDataSwimmingLaneGroup["MessageQueueGrayEnable"].isNull())
			dataObject.messageQueueGrayEnable = valueDataSwimmingLaneGroup["MessageQueueGrayEnable"].asString() == "true";
		if(!valueDataSwimmingLaneGroup["status"].isNull())
			dataObject.status = std::stoi(valueDataSwimmingLaneGroup["status"].asString());
		if(!valueDataSwimmingLaneGroup["enableRules"].isNull())
			dataObject.enableRules = valueDataSwimmingLaneGroup["enableRules"].asString() == "true";
		if(!valueDataSwimmingLaneGroup["entryRule"].isNull())
			dataObject.entryRule = valueDataSwimmingLaneGroup["entryRule"].asString();
		if(!valueDataSwimmingLaneGroup["gmtCreate"].isNull())
			dataObject.gmtCreate = valueDataSwimmingLaneGroup["gmtCreate"].asString();
		if(!valueDataSwimmingLaneGroup["gmtModified"].isNull())
			dataObject.gmtModified = valueDataSwimmingLaneGroup["gmtModified"].asString();
		if(!valueDataSwimmingLaneGroup["groupId"].isNull())
			dataObject.groupId = valueDataSwimmingLaneGroup["groupId"].asString();
		if(!valueDataSwimmingLaneGroup["GroupId"].isNull())
			dataObject.groupId6 = valueDataSwimmingLaneGroup["GroupId"].asString();
		if(!valueDataSwimmingLaneGroup["tag"].isNull())
			dataObject.tag = valueDataSwimmingLaneGroup["tag"].asString();
		if(!valueDataSwimmingLaneGroup["Tag"].isNull())
			dataObject.tag7 = valueDataSwimmingLaneGroup["Tag"].asString();
		auto allEntryRulesNode = valueDataSwimmingLaneGroup["EntryRules"]["EntryRule"];
		for (auto valueDataSwimmingLaneGroupEntryRulesEntryRule : allEntryRulesNode)
		{
			SwimmingLaneGroup::EntryRule entryRulesObject;
			if(!valueDataSwimmingLaneGroupEntryRulesEntryRule["path"].isNull())
				entryRulesObject.path = valueDataSwimmingLaneGroupEntryRulesEntryRule["path"].asString();
			if(!valueDataSwimmingLaneGroupEntryRulesEntryRule["condition"].isNull())
				entryRulesObject.condition = valueDataSwimmingLaneGroupEntryRulesEntryRule["condition"].asString();
			auto allrestItemsNode = valueDataSwimmingLaneGroupEntryRulesEntryRule["restItems"]["RestItemsItem"];
			for (auto valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem : allrestItemsNode)
			{
				SwimmingLaneGroup::EntryRule::RestItemsItem restItemsObject;
				if(!valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["type"].isNull())
					restItemsObject.type = valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["type"].asString();
				if(!valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["name"].isNull())
					restItemsObject.name = valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["name"].asString();
				if(!valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["operator"].isNull())
					restItemsObject._operator = valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["operator"].asString();
				if(!valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["datum"].isNull())
					restItemsObject.datum = valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["datum"].asString();
				if(!valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["cond"].isNull())
					restItemsObject.cond = valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["cond"].asString();
				if(!valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["divisor"].isNull())
					restItemsObject.divisor = std::stoi(valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["divisor"].asString());
				if(!valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["remainder"].isNull())
					restItemsObject.remainder = std::stoi(valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["remainder"].asString());
				if(!valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["rate"].isNull())
					restItemsObject.rate = std::stoi(valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["rate"].asString());
				if(!valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["value"].isNull())
					restItemsObject.value = valueDataSwimmingLaneGroupEntryRulesEntryRulerestItemsRestItemsItem["value"].asString();
				auto allNameList = value["nameList"]["NameList"];
				for (auto value : allNameList)
					restItemsObject.nameList.push_back(value.asString());
				entryRulesObject.restItems.push_back(restItemsObject);
			}
			auto allPaths = value["paths"]["Paths"];
			for (auto value : allPaths)
				entryRulesObject.paths.push_back(value.asString());
			dataObject.entryRules.push_back(entryRulesObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryAllSwimmingLaneResult::getMessage()const
{
	return message_;
}

std::vector<QueryAllSwimmingLaneResult::SwimmingLaneGroup> QueryAllSwimmingLaneResult::getData()const
{
	return data_;
}

std::string QueryAllSwimmingLaneResult::getErrorCode()const
{
	return errorCode_;
}

bool QueryAllSwimmingLaneResult::getSuccess()const
{
	return success_;
}

