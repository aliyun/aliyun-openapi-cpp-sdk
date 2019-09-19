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

#include <alibabacloud/aegis/model/DescribeWarningResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeWarningResult::DescribeWarningResult() :
	ServiceResult()
{}

DescribeWarningResult::DescribeWarningResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWarningResult::~DescribeWarningResult()
{}

void DescribeWarningResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWarningsNode = value["Warnings"]["Warning"];
	for (auto valueWarningsWarning : allWarningsNode)
	{
		Warning warningsObject;
		if(!valueWarningsWarning["RiskWarningId"].isNull())
			warningsObject.riskWarningId = std::stol(valueWarningsWarning["RiskWarningId"].asString());
		if(!valueWarningsWarning["RiskName"].isNull())
			warningsObject.riskName = valueWarningsWarning["RiskName"].asString();
		if(!valueWarningsWarning["Uuid"].isNull())
			warningsObject.uuid = valueWarningsWarning["Uuid"].asString();
		if(!valueWarningsWarning["RirstFoundTime"].isNull())
			warningsObject.rirstFoundTime = valueWarningsWarning["RirstFoundTime"].asString();
		if(!valueWarningsWarning["LastFoundTime"].isNull())
			warningsObject.lastFoundTime = valueWarningsWarning["LastFoundTime"].asString();
		if(!valueWarningsWarning["Level"].isNull())
			warningsObject.level = valueWarningsWarning["Level"].asString();
		if(!valueWarningsWarning["TypeName"].isNull())
			warningsObject.typeName = valueWarningsWarning["TypeName"].asString();
		if(!valueWarningsWarning["SubTypeName"].isNull())
			warningsObject.subTypeName = valueWarningsWarning["SubTypeName"].asString();
		if(!valueWarningsWarning["TypeAlias"].isNull())
			warningsObject.typeAlias = valueWarningsWarning["TypeAlias"].asString();
		if(!valueWarningsWarning["SubTypeAlias"].isNull())
			warningsObject.subTypeAlias = valueWarningsWarning["SubTypeAlias"].asString();
		if(!valueWarningsWarning["Status"].isNull())
			warningsObject.status = std::stoi(valueWarningsWarning["Status"].asString());
		auto allDetailsNode = allWarningsNode["Details"]["Detail"];
		for (auto allWarningsNodeDetailsDetail : allDetailsNode)
		{
			Warning::Detail detailsObject;
			auto allDetailItemsNode = allDetailsNode["DetailItems"]["DetailItem"];
			for (auto allDetailsNodeDetailItemsDetailItem : allDetailItemsNode)
			{
				Warning::Detail::DetailItem detailItemsObject;
				if(!allDetailsNodeDetailItemsDetailItem["name"].isNull())
					detailItemsObject.name = allDetailsNodeDetailItemsDetailItem["name"].asString();
				if(!allDetailsNodeDetailItemsDetailItem["value"].isNull())
					detailItemsObject.value = allDetailsNodeDetailItemsDetailItem["value"].asString();
				if(!allDetailsNodeDetailItemsDetailItem["type"].isNull())
					detailItemsObject.type = allDetailsNodeDetailItemsDetailItem["type"].asString();
				detailsObject.detailItems.push_back(detailItemsObject);
			}
			warningsObject.details.push_back(detailsObject);
		}
		warnings_.push_back(warningsObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeWarningResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWarningResult::getPageSize()const
{
	return pageSize_;
}

int DescribeWarningResult::getCurrentPage()const
{
	return currentPage_;
}

int DescribeWarningResult::getCount()const
{
	return count_;
}

std::vector<DescribeWarningResult::Warning> DescribeWarningResult::getWarnings()const
{
	return warnings_;
}

