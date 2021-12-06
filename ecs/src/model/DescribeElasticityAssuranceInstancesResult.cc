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

#include <alibabacloud/ecs/model/DescribeElasticityAssuranceInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeElasticityAssuranceInstancesResult::DescribeElasticityAssuranceInstancesResult() :
	ServiceResult()
{}

DescribeElasticityAssuranceInstancesResult::DescribeElasticityAssuranceInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeElasticityAssuranceInstancesResult::~DescribeElasticityAssuranceInstancesResult()
{}

void DescribeElasticityAssuranceInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allElasticityAssuranceItemNode = value["ElasticityAssuranceItem"]["InstanceIdSet"];
	for (auto valueElasticityAssuranceItemInstanceIdSet : allElasticityAssuranceItemNode)
	{
		InstanceIdSet elasticityAssuranceItemObject;
		if(!valueElasticityAssuranceItemInstanceIdSet["InstanceId"].isNull())
			elasticityAssuranceItemObject.instanceId = valueElasticityAssuranceItemInstanceIdSet["InstanceId"].asString();
		elasticityAssuranceItem_.push_back(elasticityAssuranceItemObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int DescribeElasticityAssuranceInstancesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeElasticityAssuranceInstancesResult::getNextToken()const
{
	return nextToken_;
}

int DescribeElasticityAssuranceInstancesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<DescribeElasticityAssuranceInstancesResult::InstanceIdSet> DescribeElasticityAssuranceInstancesResult::getElasticityAssuranceItem()const
{
	return elasticityAssuranceItem_;
}

