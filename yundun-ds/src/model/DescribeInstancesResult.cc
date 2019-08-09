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

#include <alibabacloud/yundun-ds/model/DescribeInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeInstancesResult::DescribeInstancesResult() :
	ServiceResult()
{}

DescribeInstancesResult::DescribeInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancesResult::~DescribeInstancesResult()
{}

void DescribeInstancesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allItems = value["Items"]["Instance"];
	for (auto value : allItems)
	{
		Instance itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			itemsObject.name = value["Name"].asString();
		if(!value["Owner"].isNull())
			itemsObject.owner = value["Owner"].asString();
		if(!value["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(value["CreationTime"].asString());
		if(!value["ProductId"].isNull())
			itemsObject.productId = value["ProductId"].asString();
		if(!value["ProductCode"].isNull())
			itemsObject.productCode = value["ProductCode"].asString();
		if(!value["Protection"].isNull())
			itemsObject.protection = value["Protection"].asString() == "true";
		if(!value["Labelsec"].isNull())
			itemsObject.labelsec = std::stoi(value["Labelsec"].asString());
		if(!value["OdpsRiskLevelName"].isNull())
			itemsObject.odpsRiskLevelName = value["OdpsRiskLevelName"].asString();
		if(!value["Sensitive"].isNull())
			itemsObject.sensitive = value["Sensitive"].asString() == "true";
		if(!value["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(value["RiskLevelId"].asString());
		if(!value["RiskLevelName"].isNull())
			itemsObject.riskLevelName = value["RiskLevelName"].asString();
		if(!value["RuleName"].isNull())
			itemsObject.ruleName = value["RuleName"].asString();
		if(!value["DepartName"].isNull())
			itemsObject.departName = value["DepartName"].asString();
		if(!value["TotalCount"].isNull())
			itemsObject.totalCount = std::stoi(value["TotalCount"].asString());
		if(!value["SensitiveCount"].isNull())
			itemsObject.sensitiveCount = std::stoi(value["SensitiveCount"].asString());
		if(!value["Acl"].isNull())
			itemsObject.acl = value["Acl"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstancesResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeInstancesResult::Instance> DescribeInstancesResult::getItems()const
{
	return items_;
}

