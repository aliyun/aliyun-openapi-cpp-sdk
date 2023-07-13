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

#include <alibabacloud/mse/model/CreateOrUpdateSwimmingLaneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

CreateOrUpdateSwimmingLaneResult::CreateOrUpdateSwimmingLaneResult() :
	ServiceResult()
{}

CreateOrUpdateSwimmingLaneResult::CreateOrUpdateSwimmingLaneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateOrUpdateSwimmingLaneResult::~CreateOrUpdateSwimmingLaneResult()
{}

void CreateOrUpdateSwimmingLaneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["name"].isNull())
		data_.name = dataNode["name"].asString();
	if(!dataNode["id"].isNull())
		data_.id = std::stol(dataNode["id"].asString());
	if(!dataNode["tag"].isNull())
		data_.tag = dataNode["tag"].asString();
	if(!dataNode["status"].isNull())
		data_.status = std::stoi(dataNode["status"].asString());
	if(!dataNode["enable"].isNull())
		data_.enable = dataNode["enable"].asString() == "true";
	if(!dataNode["regionId"].isNull())
		data_.regionId = dataNode["regionId"].asString();
	if(!dataNode["groupId"].isNull())
		data_.groupId = std::stol(dataNode["groupId"].asString());
	if(!dataNode["entryRule"].isNull())
		data_.entryRule = dataNode["entryRule"].asString();
	if(!dataNode["enableRules"].isNull())
		data_.enableRules = dataNode["enableRules"].asString() == "true";
	if(!dataNode["gmtCreate"].isNull())
		data_.gmtCreate = dataNode["gmtCreate"].asString();
	if(!dataNode["gmtModified"].isNull())
		data_.gmtModified = dataNode["gmtModified"].asString();
	if(!dataNode["gatewaySwimmingLaneRouteJson"].isNull())
		data_.gatewaySwimmingLaneRouteJson = dataNode["gatewaySwimmingLaneRouteJson"].asString();
	auto allentryRulesNode = dataNode["entryRules"]["EntryRule"];
	for (auto dataNodeentryRulesEntryRule : allentryRulesNode)
	{
		Data::EntryRule entryRuleObject;
		if(!dataNodeentryRulesEntryRule["path"].isNull())
			entryRuleObject.path = dataNodeentryRulesEntryRule["path"].asString();
		if(!dataNodeentryRulesEntryRule["condition"].isNull())
			entryRuleObject.condition = dataNodeentryRulesEntryRule["condition"].asString();
		auto allrestItemsNode = dataNodeentryRulesEntryRule["restItems"]["RestItemsItem"];
		for (auto dataNodeentryRulesEntryRulerestItemsRestItemsItem : allrestItemsNode)
		{
			Data::EntryRule::RestItemsItem restItemsObject;
			if(!dataNodeentryRulesEntryRulerestItemsRestItemsItem["type"].isNull())
				restItemsObject.type = dataNodeentryRulesEntryRulerestItemsRestItemsItem["type"].asString();
			if(!dataNodeentryRulesEntryRulerestItemsRestItemsItem["name"].isNull())
				restItemsObject.name = dataNodeentryRulesEntryRulerestItemsRestItemsItem["name"].asString();
			if(!dataNodeentryRulesEntryRulerestItemsRestItemsItem["operator"].isNull())
				restItemsObject._operator = dataNodeentryRulesEntryRulerestItemsRestItemsItem["operator"].asString();
			if(!dataNodeentryRulesEntryRulerestItemsRestItemsItem["datum"].isNull())
				restItemsObject.datum = dataNodeentryRulesEntryRulerestItemsRestItemsItem["datum"].asString();
			if(!dataNodeentryRulesEntryRulerestItemsRestItemsItem["cond"].isNull())
				restItemsObject.cond = dataNodeentryRulesEntryRulerestItemsRestItemsItem["cond"].asString();
			if(!dataNodeentryRulesEntryRulerestItemsRestItemsItem["divisor"].isNull())
				restItemsObject.divisor = std::stoi(dataNodeentryRulesEntryRulerestItemsRestItemsItem["divisor"].asString());
			if(!dataNodeentryRulesEntryRulerestItemsRestItemsItem["remainder"].isNull())
				restItemsObject.remainder = std::stoi(dataNodeentryRulesEntryRulerestItemsRestItemsItem["remainder"].asString());
			if(!dataNodeentryRulesEntryRulerestItemsRestItemsItem["rate"].isNull())
				restItemsObject.rate = std::stoi(dataNodeentryRulesEntryRulerestItemsRestItemsItem["rate"].asString());
			if(!dataNodeentryRulesEntryRulerestItemsRestItemsItem["value"].isNull())
				restItemsObject.value = dataNodeentryRulesEntryRulerestItemsRestItemsItem["value"].asString();
			auto allNameList = value["nameList"]["NameList"];
			for (auto value : allNameList)
				restItemsObject.nameList.push_back(value.asString());
			entryRuleObject.restItems.push_back(restItemsObject);
		}
		auto allPaths = value["paths"]["Paths"];
		for (auto value : allPaths)
			entryRuleObject.paths.push_back(value.asString());
		data_.entryRules.push_back(entryRuleObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateOrUpdateSwimmingLaneResult::getMessage()const
{
	return message_;
}

int CreateOrUpdateSwimmingLaneResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreateOrUpdateSwimmingLaneResult::Data CreateOrUpdateSwimmingLaneResult::getData()const
{
	return data_;
}

std::string CreateOrUpdateSwimmingLaneResult::getErrorCode()const
{
	return errorCode_;
}

int CreateOrUpdateSwimmingLaneResult::getCode()const
{
	return code_;
}

bool CreateOrUpdateSwimmingLaneResult::getSuccess()const
{
	return success_;
}

