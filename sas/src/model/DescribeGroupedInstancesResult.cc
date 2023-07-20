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

#include <alibabacloud/sas/model/DescribeGroupedInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeGroupedInstancesResult::DescribeGroupedInstancesResult() :
	ServiceResult()
{}

DescribeGroupedInstancesResult::DescribeGroupedInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupedInstancesResult::~DescribeGroupedInstancesResult()
{}

void DescribeGroupedInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["AsapVulInstanceCount"].isNull())
			instancesObject.asapVulInstanceCount = std::stol(valueInstancesInstance["AsapVulInstanceCount"].asString());
		if(!valueInstancesInstance["UnProtectedInstanceCount"].isNull())
			instancesObject.unProtectedInstanceCount = valueInstancesInstance["UnProtectedInstanceCount"].asString();
		if(!valueInstancesInstance["FieldAliasName"].isNull())
			instancesObject.fieldAliasName = valueInstancesInstance["FieldAliasName"].asString();
		if(!valueInstancesInstance["InstanceCount"].isNull())
			instancesObject.instanceCount = valueInstancesInstance["InstanceCount"].asString();
		if(!valueInstancesInstance["FieldId"].isNull())
			instancesObject.fieldId = std::stol(valueInstancesInstance["FieldId"].asString());
		if(!valueInstancesInstance["RiskInstanceCount"].isNull())
			instancesObject.riskInstanceCount = valueInstancesInstance["RiskInstanceCount"].asString();
		if(!valueInstancesInstance["GroupFlag"].isNull())
			instancesObject.groupFlag = std::stoi(valueInstancesInstance["GroupFlag"].asString());
		if(!valueInstancesInstance["AuthVersionCheckCount"].isNull())
			instancesObject.authVersionCheckCount = std::stoi(valueInstancesInstance["AuthVersionCheckCount"].asString());
		if(!valueInstancesInstance["Os"].isNull())
			instancesObject.os = valueInstancesInstance["Os"].asString();
		auto allGroupPath = value["GroupPath"]["groupPath"];
		for (auto value : allGroupPath)
			instancesObject.groupPath.push_back(value.asString());
		instances_.push_back(instancesObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

std::vector<DescribeGroupedInstancesResult::Instance> DescribeGroupedInstancesResult::getInstances()const
{
	return instances_;
}

DescribeGroupedInstancesResult::PageInfo DescribeGroupedInstancesResult::getPageInfo()const
{
	return pageInfo_;
}

