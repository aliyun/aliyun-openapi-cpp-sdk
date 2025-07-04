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

#include <alibabacloud/rds/model/DescribeRCInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCInstancesResult::DescribeRCInstancesResult() :
	ServiceResult()
{}

DescribeRCInstancesResult::DescribeRCInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCInstancesResult::~DescribeRCInstancesResult()
{}

void DescribeRCInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRCInstancesNode = value["RCInstances"]["rCInstancesItem"];
	for (auto valueRCInstancesrCInstancesItem : allRCInstancesNode)
	{
		RCInstancesItem rCInstancesObject;
		if(!valueRCInstancesrCInstancesItem["HostIp"].isNull())
			rCInstancesObject.hostIp = valueRCInstancesrCInstancesItem["HostIp"].asString();
		if(!valueRCInstancesrCInstancesItem["HostName"].isNull())
			rCInstancesObject.hostName = valueRCInstancesrCInstancesItem["HostName"].asString();
		if(!valueRCInstancesrCInstancesItem["ClusterName"].isNull())
			rCInstancesObject.clusterName = valueRCInstancesrCInstancesItem["ClusterName"].asString();
		if(!valueRCInstancesrCInstancesItem["DbType"].isNull())
			rCInstancesObject.dbType = valueRCInstancesrCInstancesItem["DbType"].asString();
		if(!valueRCInstancesrCInstancesItem["Status"].isNull())
			rCInstancesObject.status = valueRCInstancesrCInstancesItem["Status"].asString();
		if(!valueRCInstancesrCInstancesItem["RegionId"].isNull())
			rCInstancesObject.regionId = valueRCInstancesrCInstancesItem["RegionId"].asString();
		if(!valueRCInstancesrCInstancesItem["VpcId"].isNull())
			rCInstancesObject.vpcId = valueRCInstancesrCInstancesItem["VpcId"].asString();
		if(!valueRCInstancesrCInstancesItem["InstanceId"].isNull())
			rCInstancesObject.instanceId = valueRCInstancesrCInstancesItem["InstanceId"].asString();
		if(!valueRCInstancesrCInstancesItem["Description"].isNull())
			rCInstancesObject.description = valueRCInstancesrCInstancesItem["Description"].asString();
		if(!valueRCInstancesrCInstancesItem["GmtCreated"].isNull())
			rCInstancesObject.gmtCreated = valueRCInstancesrCInstancesItem["GmtCreated"].asString();
		if(!valueRCInstancesrCInstancesItem["InstanceChargeType"].isNull())
			rCInstancesObject.instanceChargeType = valueRCInstancesrCInstancesItem["InstanceChargeType"].asString();
		if(!valueRCInstancesrCInstancesItem["CreateMode"].isNull())
			rCInstancesObject.createMode = valueRCInstancesrCInstancesItem["CreateMode"].asString();
		if(!valueRCInstancesrCInstancesItem["ZoneId"].isNull())
			rCInstancesObject.zoneId = valueRCInstancesrCInstancesItem["ZoneId"].asString();
		if(!valueRCInstancesrCInstancesItem["SpotStrategy"].isNull())
			rCInstancesObject.spotStrategy = valueRCInstancesrCInstancesItem["SpotStrategy"].asString();
		if(!valueRCInstancesrCInstancesItem["PublicIp"].isNull())
			rCInstancesObject.publicIp = valueRCInstancesrCInstancesItem["PublicIp"].asString();
		if(!valueRCInstancesrCInstancesItem["InstanceType"].isNull())
			rCInstancesObject.instanceType = valueRCInstancesrCInstancesItem["InstanceType"].asString();
		if(!valueRCInstancesrCInstancesItem["InstanceTypeFamily"].isNull())
			rCInstancesObject.instanceTypeFamily = valueRCInstancesrCInstancesItem["InstanceTypeFamily"].asString();
		if(!valueRCInstancesrCInstancesItem["SecurityGroupId"].isNull())
			rCInstancesObject.securityGroupId = valueRCInstancesrCInstancesItem["SecurityGroupId"].asString();
		if(!valueRCInstancesrCInstancesItem["Cpu"].isNull())
			rCInstancesObject.cpu = std::stoi(valueRCInstancesrCInstancesItem["Cpu"].asString());
		if(!valueRCInstancesrCInstancesItem["Memory"].isNull())
			rCInstancesObject.memory = std::stoi(valueRCInstancesrCInstancesItem["Memory"].asString());
		if(!valueRCInstancesrCInstancesItem["ExpiredTime"].isNull())
			rCInstancesObject.expiredTime = valueRCInstancesrCInstancesItem["ExpiredTime"].asString();
		if(!valueRCInstancesrCInstancesItem["DeploymentSetId"].isNull())
			rCInstancesObject.deploymentSetId = valueRCInstancesrCInstancesItem["DeploymentSetId"].asString();
		if(!valueRCInstancesrCInstancesItem["ImageId"].isNull())
			rCInstancesObject.imageId = valueRCInstancesrCInstancesItem["ImageId"].asString();
		if(!valueRCInstancesrCInstancesItem["NodeType"].isNull())
			rCInstancesObject.nodeType = valueRCInstancesrCInstancesItem["NodeType"].asString();
		auto allTagResourcesNode = valueRCInstancesrCInstancesItem["TagResources"]["TagResource"];
		for (auto valueRCInstancesrCInstancesItemTagResourcesTagResource : allTagResourcesNode)
		{
			RCInstancesItem::TagResource tagResourcesObject;
			if(!valueRCInstancesrCInstancesItemTagResourcesTagResource["ResourceId"].isNull())
				tagResourcesObject.resourceId = valueRCInstancesrCInstancesItemTagResourcesTagResource["ResourceId"].asString();
			if(!valueRCInstancesrCInstancesItemTagResourcesTagResource["ResourceType"].isNull())
				tagResourcesObject.resourceType = valueRCInstancesrCInstancesItemTagResourcesTagResource["ResourceType"].asString();
			if(!valueRCInstancesrCInstancesItemTagResourcesTagResource["TagKey"].isNull())
				tagResourcesObject.tagKey = valueRCInstancesrCInstancesItemTagResourcesTagResource["TagKey"].asString();
			if(!valueRCInstancesrCInstancesItemTagResourcesTagResource["TagValue"].isNull())
				tagResourcesObject.tagValue = valueRCInstancesrCInstancesItemTagResourcesTagResource["TagValue"].asString();
			rCInstancesObject.tagResources.push_back(tagResourcesObject);
		}
		auto allTagsNode = valueRCInstancesrCInstancesItem["Tags"]["Tag"];
		for (auto valueRCInstancesrCInstancesItemTagsTag : allTagsNode)
		{
			RCInstancesItem::Tag tagsObject;
			if(!valueRCInstancesrCInstancesItemTagsTag["ResourceId"].isNull())
				tagsObject.resourceId = valueRCInstancesrCInstancesItemTagsTag["ResourceId"].asString();
			if(!valueRCInstancesrCInstancesItemTagsTag["ResourceType"].isNull())
				tagsObject.resourceType = valueRCInstancesrCInstancesItemTagsTag["ResourceType"].asString();
			if(!valueRCInstancesrCInstancesItemTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueRCInstancesrCInstancesItemTagsTag["TagKey"].asString();
			if(!valueRCInstancesrCInstancesItemTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueRCInstancesrCInstancesItemTagsTag["TagValue"].asString();
			rCInstancesObject.tags.push_back(tagsObject);
		}
		auto vpcAttributesNode = value["VpcAttributes"];
		if(!vpcAttributesNode["NatIpAddress"].isNull())
			rCInstancesObject.vpcAttributes.natIpAddress = vpcAttributesNode["NatIpAddress"].asString();
		if(!vpcAttributesNode["VSwitchId"].isNull())
			rCInstancesObject.vpcAttributes.vSwitchId = vpcAttributesNode["VSwitchId"].asString();
		if(!vpcAttributesNode["VpcId"].isNull())
			rCInstancesObject.vpcAttributes.vpcId = vpcAttributesNode["VpcId"].asString();
			auto allPrivateIpAddress = vpcAttributesNode["PrivateIpAddress"]["IpAddress"];
			for (auto value : allPrivateIpAddress)
				rCInstancesObject.vpcAttributes.privateIpAddress.push_back(value.asString());
		rCInstances_.push_back(rCInstancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRCInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRCInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRCInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRCInstancesResult::RCInstancesItem> DescribeRCInstancesResult::getRCInstances()const
{
	return rCInstances_;
}

