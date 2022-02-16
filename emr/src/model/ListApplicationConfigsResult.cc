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

#include <alibabacloud/emr/model/ListApplicationConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListApplicationConfigsResult::ListApplicationConfigsResult() :
	ServiceResult()
{}

ListApplicationConfigsResult::ListApplicationConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationConfigsResult::~ListApplicationConfigsResult()
{}

void ListApplicationConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationConfigsNode = value["ApplicationConfigs"]["ApplicationConfig"];
	for (auto valueApplicationConfigsApplicationConfig : allApplicationConfigsNode)
	{
		ApplicationConfig applicationConfigsObject;
		if(!valueApplicationConfigsApplicationConfig["ApplicationName"].isNull())
			applicationConfigsObject.applicationName = valueApplicationConfigsApplicationConfig["ApplicationName"].asString();
		if(!valueApplicationConfigsApplicationConfig["ConfigFileName"].isNull())
			applicationConfigsObject.configFileName = valueApplicationConfigsApplicationConfig["ConfigFileName"].asString();
		if(!valueApplicationConfigsApplicationConfig["ConfigVersion"].isNull())
			applicationConfigsObject.configVersion = valueApplicationConfigsApplicationConfig["ConfigVersion"].asString();
		if(!valueApplicationConfigsApplicationConfig["ConfigItemKey"].isNull())
			applicationConfigsObject.configItemKey = valueApplicationConfigsApplicationConfig["ConfigItemKey"].asString();
		if(!valueApplicationConfigsApplicationConfig["ConfigItemValue"].isNull())
			applicationConfigsObject.configItemValue = valueApplicationConfigsApplicationConfig["ConfigItemValue"].asString();
		if(!valueApplicationConfigsApplicationConfig["CreateTime"].isNull())
			applicationConfigsObject.createTime = std::stol(valueApplicationConfigsApplicationConfig["CreateTime"].asString());
		if(!valueApplicationConfigsApplicationConfig["UpdateTime"].isNull())
			applicationConfigsObject.updateTime = std::stol(valueApplicationConfigsApplicationConfig["UpdateTime"].asString());
		if(!valueApplicationConfigsApplicationConfig["Modifier"].isNull())
			applicationConfigsObject.modifier = valueApplicationConfigsApplicationConfig["Modifier"].asString();
		if(!valueApplicationConfigsApplicationConfig["Custom"].isNull())
			applicationConfigsObject.custom = valueApplicationConfigsApplicationConfig["Custom"].asString() == "true";
		if(!valueApplicationConfigsApplicationConfig["Applied"].isNull())
			applicationConfigsObject.applied = valueApplicationConfigsApplicationConfig["Applied"].asString() == "true";
		if(!valueApplicationConfigsApplicationConfig["InitValue"].isNull())
			applicationConfigsObject.initValue = valueApplicationConfigsApplicationConfig["InitValue"].asString();
		if(!valueApplicationConfigsApplicationConfig["Description"].isNull())
			applicationConfigsObject.description = valueApplicationConfigsApplicationConfig["Description"].asString();
		auto configItemValueAttributeNode = value["ConfigItemValueAttribute"];
		if(!configItemValueAttributeNode["ConfigItemValueType"].isNull())
			applicationConfigsObject.configItemValueAttribute.configItemValueType = configItemValueAttributeNode["ConfigItemValueType"].asString();
		if(!configItemValueAttributeNode["ConfigItemValueMaximum"].isNull())
			applicationConfigsObject.configItemValueAttribute.configItemValueMaximum = configItemValueAttributeNode["ConfigItemValueMaximum"].asString();
		if(!configItemValueAttributeNode["ConfigItemValueMinimum"].isNull())
			applicationConfigsObject.configItemValueAttribute.configItemValueMinimum = configItemValueAttributeNode["ConfigItemValueMinimum"].asString();
		if(!configItemValueAttributeNode["ConfigItemValueUnit"].isNull())
			applicationConfigsObject.configItemValueAttribute.configItemValueUnit = configItemValueAttributeNode["ConfigItemValueUnit"].asString();
		if(!configItemValueAttributeNode["ConfigItemValueReadOnly"].isNull())
			applicationConfigsObject.configItemValueAttribute.configItemValueReadOnly = configItemValueAttributeNode["ConfigItemValueReadOnly"].asString() == "true";
		if(!configItemValueAttributeNode["ConfigItemValueIncrementStep"].isNull())
			applicationConfigsObject.configItemValueAttribute.configItemValueIncrementStep = configItemValueAttributeNode["ConfigItemValueIncrementStep"].asString();
		applicationConfigs_.push_back(applicationConfigsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListApplicationConfigsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListApplicationConfigsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListApplicationConfigsResult::ApplicationConfig> ListApplicationConfigsResult::getApplicationConfigs()const
{
	return applicationConfigs_;
}

int ListApplicationConfigsResult::getMaxResults()const
{
	return maxResults_;
}

