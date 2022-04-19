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

#include <alibabacloud/sas/model/DescribeRiskCheckResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeRiskCheckResultResult::DescribeRiskCheckResultResult() :
	ServiceResult()
{}

DescribeRiskCheckResultResult::DescribeRiskCheckResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRiskCheckResultResult::~DescribeRiskCheckResultResult()
{}

void DescribeRiskCheckResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["RiskCheckResultForDisplay"];
	for (auto valueListRiskCheckResultForDisplay : allListNode)
	{
		RiskCheckResultForDisplay listObject;
		if(!valueListRiskCheckResultForDisplay["RiskLevel"].isNull())
			listObject.riskLevel = valueListRiskCheckResultForDisplay["RiskLevel"].asString();
		if(!valueListRiskCheckResultForDisplay["Status"].isNull())
			listObject.status = valueListRiskCheckResultForDisplay["Status"].asString();
		if(!valueListRiskCheckResultForDisplay["Type"].isNull())
			listObject.type = valueListRiskCheckResultForDisplay["Type"].asString();
		if(!valueListRiskCheckResultForDisplay["Sort"].isNull())
			listObject.sort = std::stoi(valueListRiskCheckResultForDisplay["Sort"].asString());
		if(!valueListRiskCheckResultForDisplay["RepairStatus"].isNull())
			listObject.repairStatus = valueListRiskCheckResultForDisplay["RepairStatus"].asString();
		if(!valueListRiskCheckResultForDisplay["RemainingTime"].isNull())
			listObject.remainingTime = std::stoi(valueListRiskCheckResultForDisplay["RemainingTime"].asString());
		if(!valueListRiskCheckResultForDisplay["ItemId"].isNull())
			listObject.itemId = std::stol(valueListRiskCheckResultForDisplay["ItemId"].asString());
		if(!valueListRiskCheckResultForDisplay["StartStatus"].isNull())
			listObject.startStatus = valueListRiskCheckResultForDisplay["StartStatus"].asString();
		if(!valueListRiskCheckResultForDisplay["AffectedCount"].isNull())
			listObject.affectedCount = std::stoi(valueListRiskCheckResultForDisplay["AffectedCount"].asString());
		if(!valueListRiskCheckResultForDisplay["RiskAssertType"].isNull())
			listObject.riskAssertType = valueListRiskCheckResultForDisplay["RiskAssertType"].asString();
		if(!valueListRiskCheckResultForDisplay["Title"].isNull())
			listObject.title = valueListRiskCheckResultForDisplay["Title"].asString();
		if(!valueListRiskCheckResultForDisplay["TaskId"].isNull())
			listObject.taskId = std::stol(valueListRiskCheckResultForDisplay["TaskId"].asString());
		if(!valueListRiskCheckResultForDisplay["CheckTime"].isNull())
			listObject.checkTime = std::stol(valueListRiskCheckResultForDisplay["CheckTime"].asString());
		auto allRiskItemResourcesNode = valueListRiskCheckResultForDisplay["RiskItemResources"]["RiskItemResource"];
		for (auto valueListRiskCheckResultForDisplayRiskItemResourcesRiskItemResource : allRiskItemResourcesNode)
		{
			RiskCheckResultForDisplay::RiskItemResource riskItemResourcesObject;
			if(!valueListRiskCheckResultForDisplayRiskItemResourcesRiskItemResource["ContentResource"].isNull())
				riskItemResourcesObject.contentResource = valueListRiskCheckResultForDisplayRiskItemResourcesRiskItemResource["ContentResource"].asString();
			if(!valueListRiskCheckResultForDisplayRiskItemResourcesRiskItemResource["ResourceName"].isNull())
				riskItemResourcesObject.resourceName = valueListRiskCheckResultForDisplayRiskItemResourcesRiskItemResource["ResourceName"].asString();
			listObject.riskItemResources.push_back(riskItemResourcesObject);
		}
		list_.push_back(listObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stoi(value["PageCount"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

int DescribeRiskCheckResultResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRiskCheckResultResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRiskCheckResultResult::getPageCount()const
{
	return pageCount_;
}

int DescribeRiskCheckResultResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeRiskCheckResultResult::RiskCheckResultForDisplay> DescribeRiskCheckResultResult::getList()const
{
	return list_;
}

int DescribeRiskCheckResultResult::getCount()const
{
	return count_;
}

