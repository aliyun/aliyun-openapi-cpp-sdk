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

#include <alibabacloud/rds/model/DescribeMaskingRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeMaskingRulesResult::DescribeMaskingRulesResult() :
	ServiceResult()
{}

DescribeMaskingRulesResult::DescribeMaskingRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMaskingRulesResult::~DescribeMaskingRulesResult()
{}

void DescribeMaskingRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allRulesNode = dataNode["Rules"]["encDBInfo"];
	for (auto dataNodeRulesencDBInfo : allRulesNode)
	{
		Data::EncDBInfo encDBInfoObject;
		if(!dataNodeRulesencDBInfo["DefaultAlgo"].isNull())
			encDBInfoObject.defaultAlgo = dataNodeRulesencDBInfo["DefaultAlgo"].asString();
		if(!dataNodeRulesencDBInfo["Enabled"].isNull())
			encDBInfoObject.enabled = dataNodeRulesencDBInfo["Enabled"].asString();
		if(!dataNodeRulesencDBInfo["MaskingAlgo"].isNull())
			encDBInfoObject.maskingAlgo = dataNodeRulesencDBInfo["MaskingAlgo"].asString();
		if(!dataNodeRulesencDBInfo["RuleName"].isNull())
			encDBInfoObject.ruleName = dataNodeRulesencDBInfo["RuleName"].asString();
		auto ruleConfigNode = value["RuleConfig"];
			auto allColumns = ruleConfigNode["Columns"]["columns"];
			for (auto value : allColumns)
				encDBInfoObject.ruleConfig.columns.push_back(value.asString());
			auto allDatabases = ruleConfigNode["Databases"]["databases"];
			for (auto value : allDatabases)
				encDBInfoObject.ruleConfig.databases.push_back(value.asString());
			auto allTables = ruleConfigNode["Tables"]["tables"];
			for (auto value : allTables)
				encDBInfoObject.ruleConfig.tables.push_back(value.asString());
		data_.rules.push_back(encDBInfoObject);
	}

}

DescribeMaskingRulesResult::Data DescribeMaskingRulesResult::getData()const
{
	return data_;
}

