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
	auto allWarnings = value["Warnings"]["Warning"];
	for (auto value : allWarnings)
	{
		Warning warningsObject;
		if(!value["RiskWarningId"].isNull())
			warningsObject.riskWarningId = std::stol(value["RiskWarningId"].asString());
		if(!value["RiskName"].isNull())
			warningsObject.riskName = value["RiskName"].asString();
		if(!value["Uuid"].isNull())
			warningsObject.uuid = value["Uuid"].asString();
		if(!value["RirstFoundTime"].isNull())
			warningsObject.rirstFoundTime = value["RirstFoundTime"].asString();
		if(!value["LastFoundTime"].isNull())
			warningsObject.lastFoundTime = value["LastFoundTime"].asString();
		if(!value["Level"].isNull())
			warningsObject.level = value["Level"].asString();
		if(!value["TypeName"].isNull())
			warningsObject.typeName = value["TypeName"].asString();
		if(!value["SubTypeName"].isNull())
			warningsObject.subTypeName = value["SubTypeName"].asString();
		if(!value["TypeAlias"].isNull())
			warningsObject.typeAlias = value["TypeAlias"].asString();
		if(!value["SubTypeAlias"].isNull())
			warningsObject.subTypeAlias = value["SubTypeAlias"].asString();
		if(!value["Status"].isNull())
			warningsObject.status = std::stoi(value["Status"].asString());
		auto allDetails = value["Details"]["Detail"];
		for (auto value : allDetails)
		{
			Warning::Detail detailsObject;
			auto allDetailItems = value["DetailItems"]["DetailItem"];
			for (auto value : allDetailItems)
			{
				Warning::Detail::DetailItem detailItemsObject;
				if(!value["name"].isNull())
					detailItemsObject.name = value["name"].asString();
				if(!value["value"].isNull())
					detailItemsObject.value = value["value"].asString();
				if(!value["type"].isNull())
					detailItemsObject.type = value["type"].asString();
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

