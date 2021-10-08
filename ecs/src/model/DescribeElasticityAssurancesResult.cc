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

#include <alibabacloud/ecs/model/DescribeElasticityAssurancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeElasticityAssurancesResult::DescribeElasticityAssurancesResult() :
	ServiceResult()
{}

DescribeElasticityAssurancesResult::DescribeElasticityAssurancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeElasticityAssurancesResult::~DescribeElasticityAssurancesResult()
{}

void DescribeElasticityAssurancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allElasticityAssuranceSetNode = value["ElasticityAssuranceSet"]["ElasticityAssuranceItem"];
	for (auto valueElasticityAssuranceSetElasticityAssuranceItem : allElasticityAssuranceSetNode)
	{
		ElasticityAssuranceItem elasticityAssuranceSetObject;
		if(!valueElasticityAssuranceSetElasticityAssuranceItem["Status"].isNull())
			elasticityAssuranceSetObject.status = valueElasticityAssuranceSetElasticityAssuranceItem["Status"].asString();
		if(!valueElasticityAssuranceSetElasticityAssuranceItem["PrivatePoolOptionsMatchCriteria"].isNull())
			elasticityAssuranceSetObject.privatePoolOptionsMatchCriteria = valueElasticityAssuranceSetElasticityAssuranceItem["PrivatePoolOptionsMatchCriteria"].asString();
		if(!valueElasticityAssuranceSetElasticityAssuranceItem["PrivatePoolOptionsId"].isNull())
			elasticityAssuranceSetObject.privatePoolOptionsId = valueElasticityAssuranceSetElasticityAssuranceItem["PrivatePoolOptionsId"].asString();
		if(!valueElasticityAssuranceSetElasticityAssuranceItem["UsedAssuranceTimes"].isNull())
			elasticityAssuranceSetObject.usedAssuranceTimes = std::stoi(valueElasticityAssuranceSetElasticityAssuranceItem["UsedAssuranceTimes"].asString());
		if(!valueElasticityAssuranceSetElasticityAssuranceItem["LatestStartTime"].isNull())
			elasticityAssuranceSetObject.latestStartTime = valueElasticityAssuranceSetElasticityAssuranceItem["LatestStartTime"].asString();
		if(!valueElasticityAssuranceSetElasticityAssuranceItem["PrivatePoolOptionsName"].isNull())
			elasticityAssuranceSetObject.privatePoolOptionsName = valueElasticityAssuranceSetElasticityAssuranceItem["PrivatePoolOptionsName"].asString();
		if(!valueElasticityAssuranceSetElasticityAssuranceItem["RegionId"].isNull())
			elasticityAssuranceSetObject.regionId = valueElasticityAssuranceSetElasticityAssuranceItem["RegionId"].asString();
		if(!valueElasticityAssuranceSetElasticityAssuranceItem["EndTime"].isNull())
			elasticityAssuranceSetObject.endTime = valueElasticityAssuranceSetElasticityAssuranceItem["EndTime"].asString();
		if(!valueElasticityAssuranceSetElasticityAssuranceItem["StartTime"].isNull())
			elasticityAssuranceSetObject.startTime = valueElasticityAssuranceSetElasticityAssuranceItem["StartTime"].asString();
		if(!valueElasticityAssuranceSetElasticityAssuranceItem["Description"].isNull())
			elasticityAssuranceSetObject.description = valueElasticityAssuranceSetElasticityAssuranceItem["Description"].asString();
		if(!valueElasticityAssuranceSetElasticityAssuranceItem["ResourceGroupId"].isNull())
			elasticityAssuranceSetObject.resourceGroupId = valueElasticityAssuranceSetElasticityAssuranceItem["ResourceGroupId"].asString();
		if(!valueElasticityAssuranceSetElasticityAssuranceItem["TotalAssuranceTimes"].isNull())
			elasticityAssuranceSetObject.totalAssuranceTimes = valueElasticityAssuranceSetElasticityAssuranceItem["TotalAssuranceTimes"].asString();
		auto allAllocatedResourcesNode = valueElasticityAssuranceSetElasticityAssuranceItem["AllocatedResources"]["AllocatedResource"];
		for (auto valueElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource : allAllocatedResourcesNode)
		{
			ElasticityAssuranceItem::AllocatedResource allocatedResourcesObject;
			if(!valueElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource["UsedAmount"].isNull())
				allocatedResourcesObject.usedAmount = std::stoi(valueElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource["UsedAmount"].asString());
			if(!valueElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource["TotalAmount"].isNull())
				allocatedResourcesObject.totalAmount = std::stoi(valueElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource["TotalAmount"].asString());
			if(!valueElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource["zoneId"].isNull())
				allocatedResourcesObject.zoneId = valueElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource["zoneId"].asString();
			if(!valueElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource["InstanceType"].isNull())
				allocatedResourcesObject.instanceType = valueElasticityAssuranceSetElasticityAssuranceItemAllocatedResourcesAllocatedResource["InstanceType"].asString();
			elasticityAssuranceSetObject.allocatedResources.push_back(allocatedResourcesObject);
		}
		auto allTagsNode = valueElasticityAssuranceSetElasticityAssuranceItem["Tags"]["Tag"];
		for (auto valueElasticityAssuranceSetElasticityAssuranceItemTagsTag : allTagsNode)
		{
			ElasticityAssuranceItem::Tag tagsObject;
			if(!valueElasticityAssuranceSetElasticityAssuranceItemTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueElasticityAssuranceSetElasticityAssuranceItemTagsTag["TagValue"].asString();
			if(!valueElasticityAssuranceSetElasticityAssuranceItemTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueElasticityAssuranceSetElasticityAssuranceItemTagsTag["TagKey"].asString();
			elasticityAssuranceSetObject.tags.push_back(tagsObject);
		}
		elasticityAssuranceSet_.push_back(elasticityAssuranceSetObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<DescribeElasticityAssurancesResult::ElasticityAssuranceItem> DescribeElasticityAssurancesResult::getElasticityAssuranceSet()const
{
	return elasticityAssuranceSet_;
}

int DescribeElasticityAssurancesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeElasticityAssurancesResult::getNextToken()const
{
	return nextToken_;
}

int DescribeElasticityAssurancesResult::getMaxResults()const
{
	return maxResults_;
}

