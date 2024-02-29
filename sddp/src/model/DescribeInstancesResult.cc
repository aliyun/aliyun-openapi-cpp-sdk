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

#include <alibabacloud/sddp/model/DescribeInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Instance"];
	for (auto valueItemsInstance : allItemsNode)
	{
		Instance itemsObject;
		if(!valueItemsInstance["CreationTime"].isNull())
			itemsObject.creationTime = std::stol(valueItemsInstance["CreationTime"].asString());
		if(!valueItemsInstance["Acl"].isNull())
			itemsObject.acl = valueItemsInstance["Acl"].asString();
		if(!valueItemsInstance["LastFinishTime"].isNull())
			itemsObject.lastFinishTime = std::stol(valueItemsInstance["LastFinishTime"].asString());
		if(!valueItemsInstance["Owner"].isNull())
			itemsObject.owner = valueItemsInstance["Owner"].asString();
		if(!valueItemsInstance["CountDetails"].isNull())
			itemsObject.countDetails = valueItemsInstance["CountDetails"].asString();
		if(!valueItemsInstance["FileCountDetails"].isNull())
			itemsObject.fileCountDetails = valueItemsInstance["FileCountDetails"].asString();
		if(!valueItemsInstance["TenantName"].isNull())
			itemsObject.tenantName = valueItemsInstance["TenantName"].asString();
		if(!valueItemsInstance["Protection"].isNull())
			itemsObject.protection = valueItemsInstance["Protection"].asString() == "true";
		if(!valueItemsInstance["DepartName"].isNull())
			itemsObject.departName = valueItemsInstance["DepartName"].asString();
		if(!valueItemsInstance["Labelsec"].isNull())
			itemsObject.labelsec = valueItemsInstance["Labelsec"].asString() == "true";
		if(!valueItemsInstance["RiskScore"].isNull())
			itemsObject.riskScore = std::stof(valueItemsInstance["RiskScore"].asString());
		if(!valueItemsInstance["RiskLevelId"].isNull())
			itemsObject.riskLevelId = std::stol(valueItemsInstance["RiskLevelId"].asString());
		if(!valueItemsInstance["S3Count"].isNull())
			itemsObject.s3Count = std::stoi(valueItemsInstance["S3Count"].asString());
		if(!valueItemsInstance["S1Count"].isNull())
			itemsObject.s1Count = std::stoi(valueItemsInstance["S1Count"].asString());
		if(!valueItemsInstance["ProductId"].isNull())
			itemsObject.productId = valueItemsInstance["ProductId"].asString();
		if(!valueItemsInstance["Name"].isNull())
			itemsObject.name = valueItemsInstance["Name"].asString();
		if(!valueItemsInstance["S2Count"].isNull())
			itemsObject.s2Count = std::stoi(valueItemsInstance["S2Count"].asString());
		if(!valueItemsInstance["EngineType"].isNull())
			itemsObject.engineType = valueItemsInstance["EngineType"].asString();
		if(!valueItemsInstance["TotalCount"].isNull())
			itemsObject.totalCount = std::stoi(valueItemsInstance["TotalCount"].asString());
		if(!valueItemsInstance["InstanceDescription"].isNull())
			itemsObject.instanceDescription = valueItemsInstance["InstanceDescription"].asString();
		if(!valueItemsInstance["RuleName"].isNull())
			itemsObject.ruleName = valueItemsInstance["RuleName"].asString();
		if(!valueItemsInstance["RegionId"].isNull())
			itemsObject.regionId = valueItemsInstance["RegionId"].asString();
		if(!valueItemsInstance["Sensitive"].isNull())
			itemsObject.sensitive = valueItemsInstance["Sensitive"].asString() == "true";
		if(!valueItemsInstance["SensLevelName"].isNull())
			itemsObject.sensLevelName = valueItemsInstance["SensLevelName"].asString();
		if(!valueItemsInstance["RegionName"].isNull())
			itemsObject.regionName = valueItemsInstance["RegionName"].asString();
		if(!valueItemsInstance["LastRiskScore"].isNull())
			itemsObject.lastRiskScore = std::stof(valueItemsInstance["LastRiskScore"].asString());
		if(!valueItemsInstance["RiskLevelName"].isNull())
			itemsObject.riskLevelName = valueItemsInstance["RiskLevelName"].asString();
		if(!valueItemsInstance["OdpsRiskLevelName"].isNull())
			itemsObject.odpsRiskLevelName = valueItemsInstance["OdpsRiskLevelName"].asString();
		if(!valueItemsInstance["SensitiveCount"].isNull())
			itemsObject.sensitiveCount = std::stoi(valueItemsInstance["SensitiveCount"].asString());
		if(!valueItemsInstance["Id"].isNull())
			itemsObject.id = std::stol(valueItemsInstance["Id"].asString());
		if(!valueItemsInstance["ProductCode"].isNull())
			itemsObject.productCode = valueItemsInstance["ProductCode"].asString();
		auto allModelTagsNode = valueItemsInstance["ModelTags"]["modelTagsItem"];
		for (auto valueItemsInstanceModelTagsmodelTagsItem : allModelTagsNode)
		{
			Instance::ModelTagsItem modelTagsObject;
			if(!valueItemsInstanceModelTagsmodelTagsItem["Id"].isNull())
				modelTagsObject.id = std::stol(valueItemsInstanceModelTagsmodelTagsItem["Id"].asString());
			if(!valueItemsInstanceModelTagsmodelTagsItem["Name"].isNull())
				modelTagsObject.name = valueItemsInstanceModelTagsmodelTagsItem["Name"].asString();
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

