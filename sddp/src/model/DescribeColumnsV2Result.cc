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

#include <alibabacloud/sddp/model/DescribeColumnsV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeColumnsV2Result::DescribeColumnsV2Result() :
	ServiceResult()
{}

DescribeColumnsV2Result::DescribeColumnsV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeColumnsV2Result::~DescribeColumnsV2Result()
{}

void DescribeColumnsV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Column"];
	for (auto valueItemsColumn : allItemsNode)
	{
		Column itemsObject;
		if(!valueItemsColumn["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(valueItemsColumn["CreationTime"].asString());
		if(!valueItemsColumn["TableName"].isNull())
			itemsObject.tableName = valueItemsColumn["TableName"].asString();
		if(!valueItemsColumn["DataType"].isNull())
			itemsObject.dataType = valueItemsColumn["DataType"].asString();
		if(!valueItemsColumn["OdpsRiskLevelValue"].isNull())
			itemsObject.odpsRiskLevelValue = std::stoi(valueItemsColumn["OdpsRiskLevelValue"].asString());
		if(!valueItemsColumn["DepartName"].isNull())
			itemsObject.departName = valueItemsColumn["DepartName"].asString();
		if(!valueItemsColumn["InstanceId"].isNull())
			itemsObject.instanceId = std::stol(valueItemsColumn["InstanceId"].asString());
		if(!valueItemsColumn["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(valueItemsColumn["RiskLevelId"].asString());
		if(!valueItemsColumn["RuleName"].isNull())
			itemsObject.ruleName = valueItemsColumn["RuleName"].asString();
		if(!valueItemsColumn["RuleId"].isNull())
			itemsObject.ruleId = std::stol(valueItemsColumn["RuleId"].asString());
		if(!valueItemsColumn["Sensitive"].isNull())
			itemsObject.sensitive = valueItemsColumn["Sensitive"].asString() == "true";
		if(!valueItemsColumn["SensLevelName"].isNull())
			itemsObject.sensLevelName = valueItemsColumn["SensLevelName"].asString();
		if(!valueItemsColumn["InstanceName"].isNull())
			itemsObject.instanceName = valueItemsColumn["InstanceName"].asString();
		if(!valueItemsColumn["RiskLevelName"].isNull())
			itemsObject.riskLevelName = valueItemsColumn["RiskLevelName"].asString();
		if(!valueItemsColumn["OdpsRiskLevelName"].isNull())
			itemsObject.odpsRiskLevelName = valueItemsColumn["OdpsRiskLevelName"].asString();
		if(!valueItemsColumn["Name"].isNull())
			itemsObject.name = valueItemsColumn["Name"].asString();
		if(!valueItemsColumn["TableId"].isNull())
			itemsObject.tableId = std::stol(valueItemsColumn["TableId"].asString());
		if(!valueItemsColumn["Id"].isNull())
			itemsObject.id = valueItemsColumn["Id"].asString();
		if(!valueItemsColumn["ProductCode"].isNull())
			itemsObject.productCode = valueItemsColumn["ProductCode"].asString();
		if(!valueItemsColumn["RevisionStatus"].isNull())
			itemsObject.revisionStatus = std::stol(valueItemsColumn["RevisionStatus"].asString());
		if(!valueItemsColumn["RevisionId"].isNull())
			itemsObject.revisionId = std::stol(valueItemsColumn["RevisionId"].asString());
		auto allModelTagsNode = valueItemsColumn["ModelTags"]["modelTagsItem"];
		for (auto valueItemsColumnModelTagsmodelTagsItem : allModelTagsNode)
		{
			Column::ModelTagsItem modelTagsObject;
			if(!valueItemsColumnModelTagsmodelTagsItem["Id"].isNull())
				modelTagsObject.id = std::stol(valueItemsColumnModelTagsmodelTagsItem["Id"].asString());
			if(!valueItemsColumnModelTagsmodelTagsItem["Name"].isNull())
				modelTagsObject.name = valueItemsColumnModelTagsmodelTagsItem["Name"].asString();
			itemsObject.modelTags.push_back(modelTagsObject);
		}
		auto allSampleList = value["SampleList"]["Sample"];
		for (auto value : allSampleList)
			itemsObject.sampleList.push_back(value.asString());
		items_.push_back(itemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeColumnsV2Result::getTotalCount()const
{
	return totalCount_;
}

int DescribeColumnsV2Result::getPageSize()const
{
	return pageSize_;
}

int DescribeColumnsV2Result::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeColumnsV2Result::Column> DescribeColumnsV2Result::getItems()const
{
	return items_;
}

