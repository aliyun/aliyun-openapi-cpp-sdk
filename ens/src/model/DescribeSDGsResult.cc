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

#include <alibabacloud/ens/model/DescribeSDGsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeSDGsResult::DescribeSDGsResult() :
	ServiceResult()
{}

DescribeSDGsResult::DescribeSDGsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSDGsResult::~DescribeSDGsResult()
{}

void DescribeSDGsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSDGsNode = value["SDGs"]["SDGsItem"];
	for (auto valueSDGsSDGsItem : allSDGsNode)
	{
		SDGsItem sDGsObject;
		if(!valueSDGsSDGsItem["CreationInstanceId"].isNull())
			sDGsObject.creationInstanceId = valueSDGsSDGsItem["CreationInstanceId"].asString();
		if(!valueSDGsSDGsItem["CreationRegionId"].isNull())
			sDGsObject.creationRegionId = valueSDGsSDGsItem["CreationRegionId"].asString();
		if(!valueSDGsSDGsItem["CreationTime"].isNull())
			sDGsObject.creationTime = valueSDGsSDGsItem["CreationTime"].asString();
		if(!valueSDGsSDGsItem["Description"].isNull())
			sDGsObject.description = valueSDGsSDGsItem["Description"].asString();
		if(!valueSDGsSDGsItem["ParentSDGId"].isNull())
			sDGsObject.parentSDGId = valueSDGsSDGsItem["ParentSDGId"].asString();
		if(!valueSDGsSDGsItem["SDGId"].isNull())
			sDGsObject.sDGId = valueSDGsSDGsItem["SDGId"].asString();
		if(!valueSDGsSDGsItem["Size"].isNull())
			sDGsObject.size = std::stol(valueSDGsSDGsItem["Size"].asString());
		if(!valueSDGsSDGsItem["Status"].isNull())
			sDGsObject.status = valueSDGsSDGsItem["Status"].asString();
		if(!valueSDGsSDGsItem["UpdateTime"].isNull())
			sDGsObject.updateTime = valueSDGsSDGsItem["UpdateTime"].asString();
		auto allAvaliableRegionIdsNode = valueSDGsSDGsItem["AvaliableRegionIds"]["AvaliableRegionIdsItem"];
		for (auto valueSDGsSDGsItemAvaliableRegionIdsAvaliableRegionIdsItem : allAvaliableRegionIdsNode)
		{
			SDGsItem::AvaliableRegionIdsItem avaliableRegionIdsObject;
			if(!valueSDGsSDGsItemAvaliableRegionIdsAvaliableRegionIdsItem["CreationTime"].isNull())
				avaliableRegionIdsObject.creationTime = valueSDGsSDGsItemAvaliableRegionIdsAvaliableRegionIdsItem["CreationTime"].asString();
			if(!valueSDGsSDGsItemAvaliableRegionIdsAvaliableRegionIdsItem["RegionId"].isNull())
				avaliableRegionIdsObject.regionId = valueSDGsSDGsItemAvaliableRegionIdsAvaliableRegionIdsItem["RegionId"].asString();
			if(!valueSDGsSDGsItemAvaliableRegionIdsAvaliableRegionIdsItem["SnapshotId"].isNull())
				avaliableRegionIdsObject.snapshotId = valueSDGsSDGsItemAvaliableRegionIdsAvaliableRegionIdsItem["SnapshotId"].asString();
			if(!valueSDGsSDGsItemAvaliableRegionIdsAvaliableRegionIdsItem["Status"].isNull())
				avaliableRegionIdsObject.status = valueSDGsSDGsItemAvaliableRegionIdsAvaliableRegionIdsItem["Status"].asString();
			sDGsObject.avaliableRegionIds.push_back(avaliableRegionIdsObject);
		}
		auto allDeployedInstanceIdsNode = valueSDGsSDGsItem["DeployedInstanceIds"]["DeployedInstanceIdsItem"];
		for (auto valueSDGsSDGsItemDeployedInstanceIdsDeployedInstanceIdsItem : allDeployedInstanceIdsNode)
		{
			SDGsItem::DeployedInstanceIdsItem deployedInstanceIdsObject;
			if(!valueSDGsSDGsItemDeployedInstanceIdsDeployedInstanceIdsItem["CreationTime"].isNull())
				deployedInstanceIdsObject.creationTime = valueSDGsSDGsItemDeployedInstanceIdsDeployedInstanceIdsItem["CreationTime"].asString();
			if(!valueSDGsSDGsItemDeployedInstanceIdsDeployedInstanceIdsItem["InstanceId"].isNull())
				deployedInstanceIdsObject.instanceId = valueSDGsSDGsItemDeployedInstanceIdsDeployedInstanceIdsItem["InstanceId"].asString();
			if(!valueSDGsSDGsItemDeployedInstanceIdsDeployedInstanceIdsItem["Status"].isNull())
				deployedInstanceIdsObject.status = valueSDGsSDGsItemDeployedInstanceIdsDeployedInstanceIdsItem["Status"].asString();
			if(!valueSDGsSDGsItemDeployedInstanceIdsDeployedInstanceIdsItem["DeploymentType"].isNull())
				deployedInstanceIdsObject.deploymentType = valueSDGsSDGsItemDeployedInstanceIdsDeployedInstanceIdsItem["DeploymentType"].asString();
			sDGsObject.deployedInstanceIds.push_back(deployedInstanceIdsObject);
		}
		sDGs_.push_back(sDGsObject);
	}

}

std::vector<DescribeSDGsResult::SDGsItem> DescribeSDGsResult::getSDGs()const
{
	return sDGs_;
}

