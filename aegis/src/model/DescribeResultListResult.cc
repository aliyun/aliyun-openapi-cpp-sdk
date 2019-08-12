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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allResultList = value["ResultList"]["ResultListArr"];
	for (auto value : allResultList)
	{
		ResultListArr resultListObject;
		if(!value["LastTimestamp"].isNull())
			resultListObject.lastTimestamp = std::stol(value["LastTimestamp"].asString());
		if(!value["ModifiedTimestamp"].isNull())
			resultListObject.modifiedTimestamp = std::stol(value["ModifiedTimestamp"].asString());
		if(!value["WarnLevel"].isNull())
			resultListObject.warnLevel = value["WarnLevel"].asString();
		if(!value["UniqueKey"].isNull())
			resultListObject.uniqueKey = value["UniqueKey"].asString();
		if(!value["LastOperate"].isNull())
			resultListObject.lastOperate = std::stol(value["LastOperate"].asString());
		if(!value["CreateTimestamp"].isNull())
			resultListObject.createTimestamp = std::stol(value["CreateTimestamp"].asString());
		if(!value["RuleDescription"].isNull())
			resultListObject.ruleDescription = value["RuleDescription"].asString();
		if(!value["RuleType"].isNull())
			resultListObject.ruleType = value["RuleType"].asString();
		if(!value["RuleName"].isNull())
			resultListObject.ruleName = value["RuleName"].asString();
		if(!value["Details"].isNull())
			resultListObject.details = value["Details"].asString();
		if(!value["Id"].isNull())
			resultListObject.id = std::stoi(value["Id"].asString());
		if(!value["AliUid"].isNull())
			resultListObject.aliUid = std::stol(value["AliUid"].asString());
		if(!value["RuleId"].isNull())
			resultListObject.ruleId = std::stoi(value["RuleId"].asString());
		if(!value["Status"].isNull())
			resultListObject.status = std::stoi(value["Status"].asString());
		if(!value["FieldKey"].isNull())
			resultListObject.fieldKey = value["FieldKey"].asString();
		if(!value["InternetIp"].isNull())
			resultListObject.internetIp = value["InternetIp"].asString();
		if(!value["IntranetIp"].isNull())
			resultListObject.intranetIp = value["IntranetIp"].asString();
		if(!value["InstanceId"].isNull())
			resultListObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceName"].isNull())
			resultListObject.instanceName = value["InstanceName"].asString();
		if(!value["FieldKey"].isNull())
			resultListObject.fieldKey1 = value["FieldKey"].asString();
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

