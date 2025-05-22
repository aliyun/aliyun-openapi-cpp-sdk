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

#include <alibabacloud/rds/model/DescribeRCNodePoolResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCNodePoolResult::DescribeRCNodePoolResult() :
	ServiceResult()
{}

DescribeRCNodePoolResult::DescribeRCNodePoolResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCNodePoolResult::~DescribeRCNodePoolResult()
{}

void DescribeRCNodePoolResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodePoolListNode = value["NodePoolList"]["NodePoolLists"];
	for (auto valueNodePoolListNodePoolLists : allNodePoolListNode)
	{
		NodePoolLists nodePoolListObject;
		if(!valueNodePoolListNodePoolLists["ClusterId"].isNull())
			nodePoolListObject.clusterId = valueNodePoolListNodePoolLists["ClusterId"].asString();
		if(!valueNodePoolListNodePoolLists["NodePoolId"].isNull())
			nodePoolListObject.nodePoolId = valueNodePoolListNodePoolLists["NodePoolId"].asString();
		if(!valueNodePoolListNodePoolLists["SecurityEnhancementStrategy"].isNull())
			nodePoolListObject.securityEnhancementStrategy = valueNodePoolListNodePoolLists["SecurityEnhancementStrategy"].asString();
		if(!valueNodePoolListNodePoolLists["DeploymentSetId"].isNull())
			nodePoolListObject.deploymentSetId = valueNodePoolListNodePoolLists["DeploymentSetId"].asString();
		if(!valueNodePoolListNodePoolLists["Description"].isNull())
			nodePoolListObject.description = valueNodePoolListNodePoolLists["Description"].asString();
		if(!valueNodePoolListNodePoolLists["InstanceName"].isNull())
			nodePoolListObject.instanceName = valueNodePoolListNodePoolLists["InstanceName"].asString();
		if(!valueNodePoolListNodePoolLists["Password"].isNull())
			nodePoolListObject.password = valueNodePoolListNodePoolLists["Password"].asString();
		if(!valueNodePoolListNodePoolLists["VSwitchId"].isNull())
			nodePoolListObject.vSwitchId = valueNodePoolListNodePoolLists["VSwitchId"].asString();
		if(!valueNodePoolListNodePoolLists["HostName"].isNull())
			nodePoolListObject.hostName = valueNodePoolListNodePoolLists["HostName"].asString();
		if(!valueNodePoolListNodePoolLists["InternetChargeType"].isNull())
			nodePoolListObject.internetChargeType = valueNodePoolListNodePoolLists["InternetChargeType"].asString();
		if(!valueNodePoolListNodePoolLists["ImageId"].isNull())
			nodePoolListObject.imageId = valueNodePoolListNodePoolLists["ImageId"].asString();
		if(!valueNodePoolListNodePoolLists["InstanceType"].isNull())
			nodePoolListObject.instanceType = valueNodePoolListNodePoolLists["InstanceType"].asString();
		if(!valueNodePoolListNodePoolLists["InternetMaxBandwidthOut"].isNull())
			nodePoolListObject.internetMaxBandwidthOut = std::stoi(valueNodePoolListNodePoolLists["InternetMaxBandwidthOut"].asString());
		if(!valueNodePoolListNodePoolLists["IoOptimized"].isNull())
			nodePoolListObject.ioOptimized = valueNodePoolListNodePoolLists["IoOptimized"].asString();
		if(!valueNodePoolListNodePoolLists["KeyPairName"].isNull())
			nodePoolListObject.keyPairName = valueNodePoolListNodePoolLists["KeyPairName"].asString();
		if(!valueNodePoolListNodePoolLists["RegionId"].isNull())
			nodePoolListObject.regionId = valueNodePoolListNodePoolLists["RegionId"].asString();
		if(!valueNodePoolListNodePoolLists["SecurityGroupId"].isNull())
			nodePoolListObject.securityGroupId = valueNodePoolListNodePoolLists["SecurityGroupId"].asString();
		if(!valueNodePoolListNodePoolLists["AutoPay"].isNull())
			nodePoolListObject.autoPay = valueNodePoolListNodePoolLists["AutoPay"].asString() == "true";
		if(!valueNodePoolListNodePoolLists["ZoneId"].isNull())
			nodePoolListObject.zoneId = valueNodePoolListNodePoolLists["ZoneId"].asString();
		if(!valueNodePoolListNodePoolLists["ResourceGroupId"].isNull())
			nodePoolListObject.resourceGroupId = valueNodePoolListNodePoolLists["ResourceGroupId"].asString();
		if(!valueNodePoolListNodePoolLists["InstanceChargeType"].isNull())
			nodePoolListObject.instanceChargeType = valueNodePoolListNodePoolLists["InstanceChargeType"].asString();
		if(!valueNodePoolListNodePoolLists["SpotStrategy"].isNull())
			nodePoolListObject.spotStrategy = valueNodePoolListNodePoolLists["SpotStrategy"].asString();
		if(!valueNodePoolListNodePoolLists["CreateMode"].isNull())
			nodePoolListObject.createMode = valueNodePoolListNodePoolLists["CreateMode"].asString();
		if(!valueNodePoolListNodePoolLists["Period"].isNull())
			nodePoolListObject.period = std::stoi(valueNodePoolListNodePoolLists["Period"].asString());
		if(!valueNodePoolListNodePoolLists["PeriodUnit"].isNull())
			nodePoolListObject.periodUnit = valueNodePoolListNodePoolLists["PeriodUnit"].asString();
		if(!valueNodePoolListNodePoolLists["AutoRenew"].isNull())
			nodePoolListObject.autoRenew = valueNodePoolListNodePoolLists["AutoRenew"].asString() == "true";
		if(!valueNodePoolListNodePoolLists["NodePoolName"].isNull())
			nodePoolListObject.nodePoolName = valueNodePoolListNodePoolLists["NodePoolName"].asString();
		auto allDataDiskNode = valueNodePoolListNodePoolLists["DataDisk"]["DataDiskItem"];
		for (auto valueNodePoolListNodePoolListsDataDiskDataDiskItem : allDataDiskNode)
		{
			NodePoolLists::DataDiskItem dataDiskObject;
			if(!valueNodePoolListNodePoolListsDataDiskDataDiskItem["Category"].isNull())
				dataDiskObject.category = valueNodePoolListNodePoolListsDataDiskDataDiskItem["Category"].asString();
			if(!valueNodePoolListNodePoolListsDataDiskDataDiskItem["DeleteWithInstance"].isNull())
				dataDiskObject.deleteWithInstance = valueNodePoolListNodePoolListsDataDiskDataDiskItem["DeleteWithInstance"].asString() == "true";
			if(!valueNodePoolListNodePoolListsDataDiskDataDiskItem["Encrypted"].isNull())
				dataDiskObject.encrypted = valueNodePoolListNodePoolListsDataDiskDataDiskItem["Encrypted"].asString();
			if(!valueNodePoolListNodePoolListsDataDiskDataDiskItem["PerformanceLevel"].isNull())
				dataDiskObject.performanceLevel = valueNodePoolListNodePoolListsDataDiskDataDiskItem["PerformanceLevel"].asString();
			if(!valueNodePoolListNodePoolListsDataDiskDataDiskItem["Size"].isNull())
				dataDiskObject.size = std::stoi(valueNodePoolListNodePoolListsDataDiskDataDiskItem["Size"].asString());
			nodePoolListObject.dataDisk.push_back(dataDiskObject);
		}
		auto allTagNode = valueNodePoolListNodePoolLists["Tag"]["TagItem"];
		for (auto valueNodePoolListNodePoolListsTagTagItem : allTagNode)
		{
			NodePoolLists::TagItem tagObject;
			if(!valueNodePoolListNodePoolListsTagTagItem["Key"].isNull())
				tagObject.key = valueNodePoolListNodePoolListsTagTagItem["Key"].asString();
			if(!valueNodePoolListNodePoolListsTagTagItem["Value"].isNull())
				tagObject.value = valueNodePoolListNodePoolListsTagTagItem["Value"].asString();
			nodePoolListObject.tag.push_back(tagObject);
		}
		auto systemDiskNode = value["SystemDisk"];
		if(!systemDiskNode["Category"].isNull())
			nodePoolListObject.systemDisk.category = systemDiskNode["Category"].asString();
		if(!systemDiskNode["Size"].isNull())
			nodePoolListObject.systemDisk.size = std::stoi(systemDiskNode["Size"].asString());
		if(!systemDiskNode["PerformanceLevel"].isNull())
			nodePoolListObject.systemDisk.performanceLevel = systemDiskNode["PerformanceLevel"].asString();
		nodePoolList_.push_back(nodePoolListObject);
	}

}

std::vector<DescribeRCNodePoolResult::NodePoolLists> DescribeRCNodePoolResult::getNodePoolList()const
{
	return nodePoolList_;
}

