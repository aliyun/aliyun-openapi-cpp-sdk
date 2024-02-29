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

#include <alibabacloud/sddp/model/DescribeTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeTablesResult::DescribeTablesResult() :
	ServiceResult()
{}

DescribeTablesResult::DescribeTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTablesResult::~DescribeTablesResult()
{}

void DescribeTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Table"];
	for (auto valueItemsTable : allItemsNode)
	{
		Table itemsObject;
		if(!valueItemsTable["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(valueItemsTable["CreationTime"].asString());
		if(!valueItemsTable["Owner"].isNull())
			itemsObject.owner = valueItemsTable["Owner"].asString();
		if(!valueItemsTable["CountDetails"].isNull())
			itemsObject.countDetails = valueItemsTable["CountDetails"].asString();
		if(!valueItemsTable["SensitiveRatio"].isNull())
			itemsObject.sensitiveRatio = valueItemsTable["SensitiveRatio"].asString();
		if(!valueItemsTable["TenantName"].isNull())
			itemsObject.tenantName = valueItemsTable["TenantName"].asString();
		if(!valueItemsTable["DepartName"].isNull())
			itemsObject.departName = valueItemsTable["DepartName"].asString();
		if(!valueItemsTable["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(valueItemsTable["RiskLevelId"].asString());
		if(!valueItemsTable["InstanceName"].isNull())
			itemsObject.instanceName = valueItemsTable["InstanceName"].asString();
		if(!valueItemsTable["S3Count"].isNull())
			itemsObject.s3Count = std::stoi(valueItemsTable["S3Count"].asString());
		if(!valueItemsTable["S1Count"].isNull())
			itemsObject.s1Count = std::stoi(valueItemsTable["S1Count"].asString());
		if(!valueItemsTable["ProductId"].isNull())
			itemsObject.productId = valueItemsTable["ProductId"].asString();
		if(!valueItemsTable["Name"].isNull())
			itemsObject.name = valueItemsTable["Name"].asString();
		if(!valueItemsTable["S2Count"].isNull())
			itemsObject.s2Count = std::stoi(valueItemsTable["S2Count"].asString());
		if(!valueItemsTable["InstanceId"].isNull())
			itemsObject.instanceId = std::stol(valueItemsTable["InstanceId"].asString());
		if(!valueItemsTable["TotalCount"].isNull())
			itemsObject.totalCount = std::stoi(valueItemsTable["TotalCount"].asString());
		if(!valueItemsTable["InstanceDescription"].isNull())
			itemsObject.instanceDescription = valueItemsTable["InstanceDescription"].asString();
		if(!valueItemsTable["Sensitive"].isNull())
			itemsObject.sensitive = valueItemsTable["Sensitive"].asString() == "true";
		if(!valueItemsTable["SensLevelName"].isNull())
			itemsObject.sensLevelName = valueItemsTable["SensLevelName"].asString();
		if(!valueItemsTable["LastScanTime"].isNull())
			itemsObject.lastScanTime = std::stol(valueItemsTable["LastScanTime"].asString());
		if(!valueItemsTable["RegionName"].isNull())
			itemsObject.regionName = valueItemsTable["RegionName"].asString();
		if(!valueItemsTable["RiskLevelName"].isNull())
			itemsObject.riskLevelName = valueItemsTable["RiskLevelName"].asString();
		if(!valueItemsTable["TotalRows"].isNull())
			itemsObject.totalRows = std::stoi(valueItemsTable["TotalRows"].asString());
		if(!valueItemsTable["SensitiveCount"].isNull())
			itemsObject.sensitiveCount = std::stoi(valueItemsTable["SensitiveCount"].asString());
		if(!valueItemsTable["Id"].isNull())
			itemsObject.id = std::stol(valueItemsTable["Id"].asString());
		if(!valueItemsTable["ProductCode"].isNull())
			itemsObject.productCode = valueItemsTable["ProductCode"].asString();
		if(!valueItemsTable["ObjectHex"].isNull())
			itemsObject.objectHex = valueItemsTable["ObjectHex"].asString();
		if(!valueItemsTable["DataType"].isNull())
			itemsObject.dataType = std::stoi(valueItemsTable["DataType"].asString());
		auto allRuleListNode = valueItemsTable["RuleList"]["Rule"];
		for (auto valueItemsTableRuleListRule : allRuleListNode)
		{
			Table::Rule ruleListObject;
			if(!valueItemsTableRuleListRule["DisplayName"].isNull())
				ruleListObject.displayName = valueItemsTableRuleListRule["DisplayName"].asString();
			if(!valueItemsTableRuleListRule["Name"].isNull())
				ruleListObject.name = valueItemsTableRuleListRule["Name"].asString();
			if(!valueItemsTableRuleListRule["RiskLevelId"].isNull())
				ruleListObject.riskLevelId = std::stol(valueItemsTableRuleListRule["RiskLevelId"].asString());
			if(!valueItemsTableRuleListRule["Count"].isNull())
				ruleListObject.count = std::stol(valueItemsTableRuleListRule["Count"].asString());
			itemsObject.ruleList.push_back(ruleListObject);
		}
		auto allModelTagsNode = valueItemsTable["ModelTags"]["modelTagsItem"];
		for (auto valueItemsTableModelTagsmodelTagsItem : allModelTagsNode)
		{
			Table::ModelTagsItem modelTagsObject;
			if(!valueItemsTableModelTagsmodelTagsItem["Id"].isNull())
				modelTagsObject.id = std::stol(valueItemsTableModelTagsmodelTagsItem["Id"].asString());
			if(!valueItemsTableModelTagsmodelTagsItem["Name"].isNull())
				modelTagsObject.name = valueItemsTableModelTagsmodelTagsItem["Name"].asString();
			itemsObject.modelTags.push_back(modelTagsObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeTablesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeTablesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTablesResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeTablesResult::Table> DescribeTablesResult::getItems()const
{
	return items_;
}

