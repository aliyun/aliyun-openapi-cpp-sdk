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

#include <alibabacloud/eais/model/DescribeEaisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eais;
using namespace AlibabaCloud::Eais::Model;

DescribeEaisResult::DescribeEaisResult() :
	ServiceResult()
{}

DescribeEaisResult::DescribeEaisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEaisResult::~DescribeEaisResult()
{}

void DescribeEaisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = valueInstancesInstance["Status"].asString();
		if(!valueInstancesInstance["CreationTime"].isNull())
			instancesObject.creationTime = valueInstancesInstance["CreationTime"].asString();
		if(!valueInstancesInstance["ClientInstanceName"].isNull())
			instancesObject.clientInstanceName = valueInstancesInstance["ClientInstanceName"].asString();
		if(!valueInstancesInstance["Description"].isNull())
			instancesObject.description = valueInstancesInstance["Description"].asString();
		if(!valueInstancesInstance["ElasticAcceleratedInstanceId"].isNull())
			instancesObject.elasticAcceleratedInstanceId = valueInstancesInstance["ElasticAcceleratedInstanceId"].asString();
		if(!valueInstancesInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstance["InstanceName"].asString();
		if(!valueInstancesInstance["ClientInstanceType"].isNull())
			instancesObject.clientInstanceType = valueInstancesInstance["ClientInstanceType"].asString();
		if(!valueInstancesInstance["ClientInstanceId"].isNull())
			instancesObject.clientInstanceId = valueInstancesInstance["ClientInstanceId"].asString();
		if(!valueInstancesInstance["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesInstance["ZoneId"].asString();
		if(!valueInstancesInstance["InstanceType"].isNull())
			instancesObject.instanceType = valueInstancesInstance["InstanceType"].asString();
		if(!valueInstancesInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstance["RegionId"].asString();
		if(!valueInstancesInstance["Category"].isNull())
			instancesObject.category = valueInstancesInstance["Category"].asString();
		if(!valueInstancesInstance["JupyterUrl"].isNull())
			instancesObject.jupyterUrl = valueInstancesInstance["JupyterUrl"].asString();
		if(!valueInstancesInstance["VSwitchId"].isNull())
			instancesObject.vSwitchId = valueInstancesInstance["VSwitchId"].asString();
		if(!valueInstancesInstance["SecurityGroupId"].isNull())
			instancesObject.securityGroupId = valueInstancesInstance["SecurityGroupId"].asString();
		if(!valueInstancesInstance["StartTime"].isNull())
			instancesObject.startTime = valueInstancesInstance["StartTime"].asString();
		if(!valueInstancesInstance["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = valueInstancesInstance["ResourceGroupId"].asString();
		auto allTagsNode = valueInstancesInstance["Tags"]["Tag"];
		for (auto valueInstancesInstanceTagsTag : allTagsNode)
		{
			Instance::Tag tagsObject;
			if(!valueInstancesInstanceTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueInstancesInstanceTagsTag["TagKey"].asString();
			if(!valueInstancesInstanceTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueInstancesInstanceTagsTag["TagValue"].asString();
			instancesObject.tags.push_back(tagsObject);
		}
		instances_.push_back(instancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeEaisResult::Instance> DescribeEaisResult::getInstances()const
{
	return instances_;
}

int DescribeEaisResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeEaisResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEaisResult::getPageNumber()const
{
	return pageNumber_;
}

