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
	auto allList = value["List"]["RiskCheckResultForDisplay"];
	for (auto value : allList)
	{
		RiskCheckResultForDisplay listObject;
		if(!value["ItemId"].isNull())
			listObject.itemId = std::stol(value["ItemId"].asString());
		if(!value["TaskId"].isNull())
			listObject.taskId = std::stol(value["TaskId"].asString());
		if(!value["Title"].isNull())
			listObject.title = value["Title"].asString();
		if(!value["RiskLevel"].isNull())
			listObject.riskLevel = value["RiskLevel"].asString();
		if(!value["Status"].isNull())
			listObject.status = value["Status"].asString();
		if(!value["AffectedCount"].isNull())
			listObject.affectedCount = std::stoi(value["AffectedCount"].asString());
		if(!value["CheckTime"].isNull())
			listObject.checkTime = std::stol(value["CheckTime"].asString());
		if(!value["RemainingTime"].isNull())
			listObject.remainingTime = std::stoi(value["RemainingTime"].asString());
		if(!value["Sort"].isNull())
			listObject.sort = std::stoi(value["Sort"].asString());
		if(!value["Type"].isNull())
			listObject.type = value["Type"].asString();
		auto allRiskItemResources = value["RiskItemResources"]["RiskItemResource"];
		for (auto value : allRiskItemResources)
		{
			RiskCheckResultForDisplay::RiskItemResource riskItemResourcesObject;
			if(!value["ResourceName"].isNull())
				riskItemResourcesObject.resourceName = value["ResourceName"].asString();
			if(!value["ContentResource"].isNull())
				riskItemResourcesObject.contentResource = value["ContentResource"].asString();
			listObject.riskItemResources.push_back(riskItemResourcesObject);
		}
		list_.push_back(listObject);
	}
	if(!value["PageCount"].isNull())
		pageCount_ = std::stoi(value["PageCount"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeRiskCheckResultResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRiskCheckResultResult::getPageCount()const
{
	return pageCount_;
}

int DescribeRiskCheckResultResult::getPageSize()const
{
	return pageSize_;
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

