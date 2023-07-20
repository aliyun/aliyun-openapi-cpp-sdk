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

#include <alibabacloud/sas/model/DescribeAntiBruteForceRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeAntiBruteForceRulesResult::DescribeAntiBruteForceRulesResult() :
	ServiceResult()
{}

DescribeAntiBruteForceRulesResult::DescribeAntiBruteForceRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAntiBruteForceRulesResult::~DescribeAntiBruteForceRulesResult()
{}

void DescribeAntiBruteForceRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRulesNode = value["Rules"]["AntiBruteForceRule"];
	for (auto valueRulesAntiBruteForceRule : allRulesNode)
	{
		AntiBruteForceRule rulesObject;
		if(!valueRulesAntiBruteForceRule["MachineCount"].isNull())
			rulesObject.machineCount = std::stoi(valueRulesAntiBruteForceRule["MachineCount"].asString());
		if(!valueRulesAntiBruteForceRule["EnableSmartRule"].isNull())
			rulesObject.enableSmartRule = valueRulesAntiBruteForceRule["EnableSmartRule"].asString() == "true";
		if(!valueRulesAntiBruteForceRule["FailCount"].isNull())
			rulesObject.failCount = std::stoi(valueRulesAntiBruteForceRule["FailCount"].asString());
		if(!valueRulesAntiBruteForceRule["ForbiddenTime"].isNull())
			rulesObject.forbiddenTime = std::stoi(valueRulesAntiBruteForceRule["ForbiddenTime"].asString());
		if(!valueRulesAntiBruteForceRule["Span"].isNull())
			rulesObject.span = std::stoi(valueRulesAntiBruteForceRule["Span"].asString());
		if(!valueRulesAntiBruteForceRule["DefaultRule"].isNull())
			rulesObject.defaultRule = valueRulesAntiBruteForceRule["DefaultRule"].asString() == "true";
		if(!valueRulesAntiBruteForceRule["Name"].isNull())
			rulesObject.name = valueRulesAntiBruteForceRule["Name"].asString();
		if(!valueRulesAntiBruteForceRule["Id"].isNull())
			rulesObject.id = std::stol(valueRulesAntiBruteForceRule["Id"].asString());
		if(!valueRulesAntiBruteForceRule["CreateTime"].isNull())
			rulesObject.createTime = valueRulesAntiBruteForceRule["CreateTime"].asString();
		if(!valueRulesAntiBruteForceRule["CreateTimestamp"].isNull())
			rulesObject.createTimestamp = std::stol(valueRulesAntiBruteForceRule["CreateTimestamp"].asString());
		auto allUuidList = value["UuidList"]["uuid"];
		for (auto value : allUuidList)
			rulesObject.uuidList.push_back(value.asString());
		rules_.push_back(rulesObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribeAntiBruteForceRulesResult::PageInfo DescribeAntiBruteForceRulesResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeAntiBruteForceRulesResult::AntiBruteForceRule> DescribeAntiBruteForceRulesResult::getRules()const
{
	return rules_;
}

