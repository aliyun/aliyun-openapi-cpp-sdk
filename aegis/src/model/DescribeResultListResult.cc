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

#include <alibabacloud/aegis/model/DescribeResultListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeResultListResult::DescribeResultListResult() :
	ServiceResult()
{}

DescribeResultListResult::DescribeResultListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResultListResult::~DescribeResultListResult()
{}

void DescribeResultListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultListNode = value["ResultList"]["ResultListArr"];
	for (auto valueResultListResultListArr : allResultListNode)
	{
		ResultListArr resultListObject;
		if(!valueResultListResultListArr["LastTimestamp"].isNull())
			resultListObject.lastTimestamp = std::stol(valueResultListResultListArr["LastTimestamp"].asString());
		if(!valueResultListResultListArr["ModifiedTimestamp"].isNull())
			resultListObject.modifiedTimestamp = std::stol(valueResultListResultListArr["ModifiedTimestamp"].asString());
		if(!valueResultListResultListArr["WarnLevel"].isNull())
			resultListObject.warnLevel = valueResultListResultListArr["WarnLevel"].asString();
		if(!valueResultListResultListArr["UniqueKey"].isNull())
			resultListObject.uniqueKey = valueResultListResultListArr["UniqueKey"].asString();
		if(!valueResultListResultListArr["LastOperate"].isNull())
			resultListObject.lastOperate = std::stol(valueResultListResultListArr["LastOperate"].asString());
		if(!valueResultListResultListArr["CreateTimestamp"].isNull())
			resultListObject.createTimestamp = std::stol(valueResultListResultListArr["CreateTimestamp"].asString());
		if(!valueResultListResultListArr["RuleDescription"].isNull())
			resultListObject.ruleDescription = valueResultListResultListArr["RuleDescription"].asString();
		if(!valueResultListResultListArr["RuleType"].isNull())
			resultListObject.ruleType = valueResultListResultListArr["RuleType"].asString();
		if(!valueResultListResultListArr["RuleName"].isNull())
			resultListObject.ruleName = valueResultListResultListArr["RuleName"].asString();
		if(!valueResultListResultListArr["Details"].isNull())
			resultListObject.details = valueResultListResultListArr["Details"].asString();
		if(!valueResultListResultListArr["Id"].isNull())
			resultListObject.id = std::stoi(valueResultListResultListArr["Id"].asString());
		if(!valueResultListResultListArr["AliUid"].isNull())
			resultListObject.aliUid = std::stol(valueResultListResultListArr["AliUid"].asString());
		if(!valueResultListResultListArr["RuleId"].isNull())
			resultListObject.ruleId = std::stoi(valueResultListResultListArr["RuleId"].asString());
		if(!valueResultListResultListArr["Status"].isNull())
			resultListObject.status = std::stoi(valueResultListResultListArr["Status"].asString());
		if(!valueResultListResultListArr["FieldKey"].isNull())
			resultListObject.fieldKey = valueResultListResultListArr["FieldKey"].asString();
		if(!valueResultListResultListArr["InternetIp"].isNull())
			resultListObject.internetIp = valueResultListResultListArr["InternetIp"].asString();
		if(!valueResultListResultListArr["IntranetIp"].isNull())
			resultListObject.intranetIp = valueResultListResultListArr["IntranetIp"].asString();
		if(!valueResultListResultListArr["InstanceId"].isNull())
			resultListObject.instanceId = valueResultListResultListArr["InstanceId"].asString();
		if(!valueResultListResultListArr["InstanceName"].isNull())
			resultListObject.instanceName = valueResultListResultListArr["InstanceName"].asString();
		if(!valueResultListResultListArr["FieldKey"].isNull())
			resultListObject.fieldKey1 = valueResultListResultListArr["FieldKey"].asString();
		resultList_.push_back(resultListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());

}

DescribeResultListResult::PageInfo DescribeResultListResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeResultListResult::ResultListArr> DescribeResultListResult::getResultList()const
{
	return resultList_;
}

