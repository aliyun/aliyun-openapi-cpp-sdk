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

#include <alibabacloud/rds/model/DescribeGadInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeGadInstancesResult::DescribeGadInstancesResult() :
	ServiceResult()
{}

DescribeGadInstancesResult::DescribeGadInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGadInstancesResult::~DescribeGadInstancesResult()
{}

void DescribeGadInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGadInstancesNode = value["GadInstances"]["GadInstancesItem"];
	for (auto valueGadInstancesGadInstancesItem : allGadInstancesNode)
	{
		GadInstancesItem gadInstancesObject;
		if(!valueGadInstancesGadInstancesItem["CreationTime"].isNull())
			gadInstancesObject.creationTime = valueGadInstancesGadInstancesItem["CreationTime"].asString();
		if(!valueGadInstancesGadInstancesItem["Description"].isNull())
			gadInstancesObject.description = valueGadInstancesGadInstancesItem["Description"].asString();
		if(!valueGadInstancesGadInstancesItem["GadInstanceName"].isNull())
			gadInstancesObject.gadInstanceName = valueGadInstancesGadInstancesItem["GadInstanceName"].asString();
		if(!valueGadInstancesGadInstancesItem["ModificationTime"].isNull())
			gadInstancesObject.modificationTime = valueGadInstancesGadInstancesItem["ModificationTime"].asString();
		if(!valueGadInstancesGadInstancesItem["Service"].isNull())
			gadInstancesObject.service = valueGadInstancesGadInstancesItem["Service"].asString();
		if(!valueGadInstancesGadInstancesItem["Status"].isNull())
			gadInstancesObject.status = valueGadInstancesGadInstancesItem["Status"].asString();
		auto allGadInstanceMembersNode = valueGadInstancesGadInstancesItem["GadInstanceMembers"]["GadInstanceMembersItem"];
		for (auto valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem : allGadInstanceMembersNode)
		{
			GadInstancesItem::GadInstanceMembersItem gadInstanceMembersObject;
			if(!valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["DBInstanceID"].isNull())
				gadInstanceMembersObject.dBInstanceID = valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["DBInstanceID"].asString();
			if(!valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["DtsInstance"].isNull())
				gadInstanceMembersObject.dtsInstance = valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["DtsInstance"].asString();
			if(!valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["Engine"].isNull())
				gadInstanceMembersObject.engine = valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["Engine"].asString();
			if(!valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["EngineVersion"].isNull())
				gadInstanceMembersObject.engineVersion = valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["EngineVersion"].asString();
			if(!valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["RegionId"].isNull())
				gadInstanceMembersObject.regionId = valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["RegionId"].asString();
			if(!valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["ResourceGroupId"].isNull())
				gadInstanceMembersObject.resourceGroupId = valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["ResourceGroupId"].asString();
			if(!valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["Role"].isNull())
				gadInstanceMembersObject.role = valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["Role"].asString();
			if(!valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["Status"].isNull())
				gadInstanceMembersObject.status = valueGadInstancesGadInstancesItemGadInstanceMembersGadInstanceMembersItem["Status"].asString();
			gadInstancesObject.gadInstanceMembers.push_back(gadInstanceMembersObject);
		}
		gadInstances_.push_back(gadInstancesObject);
	}

}

std::vector<DescribeGadInstancesResult::GadInstancesItem> DescribeGadInstancesResult::getGadInstances()const
{
	return gadInstances_;
}

