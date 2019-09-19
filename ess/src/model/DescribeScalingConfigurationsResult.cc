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

#include <alibabacloud/ess/model/DescribeScalingConfigurationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeScalingConfigurationsResult::DescribeScalingConfigurationsResult() :
	ServiceResult()
{}

DescribeScalingConfigurationsResult::DescribeScalingConfigurationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScalingConfigurationsResult::~DescribeScalingConfigurationsResult()
{}

void DescribeScalingConfigurationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScalingConfigurationsNode = value["ScalingConfigurations"]["ScalingConfiguration"];
	for (auto valueScalingConfigurationsScalingConfiguration : allScalingConfigurationsNode)
	{
		ScalingConfiguration scalingConfigurationsObject;
		if(!valueScalingConfigurationsScalingConfiguration["ScalingConfigurationId"].isNull())
			scalingConfigurationsObject.scalingConfigurationId = valueScalingConfigurationsScalingConfiguration["ScalingConfigurationId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ScalingConfigurationName"].isNull())
			scalingConfigurationsObject.scalingConfigurationName = valueScalingConfigurationsScalingConfiguration["ScalingConfigurationName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ScalingGroupId"].isNull())
			scalingConfigurationsObject.scalingGroupId = valueScalingConfigurationsScalingConfiguration["ScalingGroupId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["InstanceName"].isNull())
			scalingConfigurationsObject.instanceName = valueScalingConfigurationsScalingConfiguration["InstanceName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ImageId"].isNull())
			scalingConfigurationsObject.imageId = valueScalingConfigurationsScalingConfiguration["ImageId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ImageName"].isNull())
			scalingConfigurationsObject.imageName = valueScalingConfigurationsScalingConfiguration["ImageName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["HostName"].isNull())
			scalingConfigurationsObject.hostName = valueScalingConfigurationsScalingConfiguration["HostName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["InstanceType"].isNull())
			scalingConfigurationsObject.instanceType = valueScalingConfigurationsScalingConfiguration["InstanceType"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["Cpu"].isNull())
			scalingConfigurationsObject.cpu = std::stoi(valueScalingConfigurationsScalingConfiguration["Cpu"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["Memory"].isNull())
			scalingConfigurationsObject.memory = std::stoi(valueScalingConfigurationsScalingConfiguration["Memory"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["InstanceGeneration"].isNull())
			scalingConfigurationsObject.instanceGeneration = valueScalingConfigurationsScalingConfiguration["InstanceGeneration"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SecurityGroupId"].isNull())
			scalingConfigurationsObject.securityGroupId = valueScalingConfigurationsScalingConfiguration["SecurityGroupId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["IoOptimized"].isNull())
			scalingConfigurationsObject.ioOptimized = valueScalingConfigurationsScalingConfiguration["IoOptimized"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["InternetChargeType"].isNull())
			scalingConfigurationsObject.internetChargeType = valueScalingConfigurationsScalingConfiguration["InternetChargeType"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["InternetMaxBandwidthIn"].isNull())
			scalingConfigurationsObject.internetMaxBandwidthIn = std::stoi(valueScalingConfigurationsScalingConfiguration["InternetMaxBandwidthIn"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["InternetMaxBandwidthOut"].isNull())
			scalingConfigurationsObject.internetMaxBandwidthOut = std::stoi(valueScalingConfigurationsScalingConfiguration["InternetMaxBandwidthOut"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["SystemDiskCategory"].isNull())
			scalingConfigurationsObject.systemDiskCategory = valueScalingConfigurationsScalingConfiguration["SystemDiskCategory"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SystemDiskSize"].isNull())
			scalingConfigurationsObject.systemDiskSize = std::stoi(valueScalingConfigurationsScalingConfiguration["SystemDiskSize"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["SystemDiskName"].isNull())
			scalingConfigurationsObject.systemDiskName = valueScalingConfigurationsScalingConfiguration["SystemDiskName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SystemDiskDescription"].isNull())
			scalingConfigurationsObject.systemDiskDescription = valueScalingConfigurationsScalingConfiguration["SystemDiskDescription"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["LifecycleState"].isNull())
			scalingConfigurationsObject.lifecycleState = valueScalingConfigurationsScalingConfiguration["LifecycleState"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["CreationTime"].isNull())
			scalingConfigurationsObject.creationTime = valueScalingConfigurationsScalingConfiguration["CreationTime"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["LoadBalancerWeight"].isNull())
			scalingConfigurationsObject.loadBalancerWeight = std::stoi(valueScalingConfigurationsScalingConfiguration["LoadBalancerWeight"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["UserData"].isNull())
			scalingConfigurationsObject.userData = valueScalingConfigurationsScalingConfiguration["UserData"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["KeyPairName"].isNull())
			scalingConfigurationsObject.keyPairName = valueScalingConfigurationsScalingConfiguration["KeyPairName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["RamRoleName"].isNull())
			scalingConfigurationsObject.ramRoleName = valueScalingConfigurationsScalingConfiguration["RamRoleName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["DeploymentSetId"].isNull())
			scalingConfigurationsObject.deploymentSetId = valueScalingConfigurationsScalingConfiguration["DeploymentSetId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SecurityEnhancementStrategy"].isNull())
			scalingConfigurationsObject.securityEnhancementStrategy = valueScalingConfigurationsScalingConfiguration["SecurityEnhancementStrategy"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SpotStrategy"].isNull())
			scalingConfigurationsObject.spotStrategy = valueScalingConfigurationsScalingConfiguration["SpotStrategy"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["PasswordInherit"].isNull())
			scalingConfigurationsObject.passwordInherit = valueScalingConfigurationsScalingConfiguration["PasswordInherit"].asString() == "true";
		if(!valueScalingConfigurationsScalingConfiguration["ResourceGroupId"].isNull())
			scalingConfigurationsObject.resourceGroupId = valueScalingConfigurationsScalingConfiguration["ResourceGroupId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["HpcClusterId"].isNull())
			scalingConfigurationsObject.hpcClusterId = valueScalingConfigurationsScalingConfiguration["HpcClusterId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["InstanceDescription"].isNull())
			scalingConfigurationsObject.instanceDescription = valueScalingConfigurationsScalingConfiguration["InstanceDescription"].asString();
		auto allDataDisksNode = allScalingConfigurationsNode["DataDisks"]["DataDisk"];
		for (auto allScalingConfigurationsNodeDataDisksDataDisk : allDataDisksNode)
		{
			ScalingConfiguration::DataDisk dataDisksObject;
			if(!allScalingConfigurationsNodeDataDisksDataDisk["Size"].isNull())
				dataDisksObject.size = std::stoi(allScalingConfigurationsNodeDataDisksDataDisk["Size"].asString());
			if(!allScalingConfigurationsNodeDataDisksDataDisk["Category"].isNull())
				dataDisksObject.category = allScalingConfigurationsNodeDataDisksDataDisk["Category"].asString();
			if(!allScalingConfigurationsNodeDataDisksDataDisk["SnapshotId"].isNull())
				dataDisksObject.snapshotId = allScalingConfigurationsNodeDataDisksDataDisk["SnapshotId"].asString();
			if(!allScalingConfigurationsNodeDataDisksDataDisk["Device"].isNull())
				dataDisksObject.device = allScalingConfigurationsNodeDataDisksDataDisk["Device"].asString();
			if(!allScalingConfigurationsNodeDataDisksDataDisk["DeleteWithInstance"].isNull())
				dataDisksObject.deleteWithInstance = allScalingConfigurationsNodeDataDisksDataDisk["DeleteWithInstance"].asString() == "true";
			if(!allScalingConfigurationsNodeDataDisksDataDisk["Encrypted"].isNull())
				dataDisksObject.encrypted = allScalingConfigurationsNodeDataDisksDataDisk["Encrypted"].asString();
			if(!allScalingConfigurationsNodeDataDisksDataDisk["KMSKeyId"].isNull())
				dataDisksObject.kMSKeyId = allScalingConfigurationsNodeDataDisksDataDisk["KMSKeyId"].asString();
			if(!allScalingConfigurationsNodeDataDisksDataDisk["DiskName"].isNull())
				dataDisksObject.diskName = allScalingConfigurationsNodeDataDisksDataDisk["DiskName"].asString();
			if(!allScalingConfigurationsNodeDataDisksDataDisk["Description"].isNull())
				dataDisksObject.description = allScalingConfigurationsNodeDataDisksDataDisk["Description"].asString();
			scalingConfigurationsObject.dataDisks.push_back(dataDisksObject);
		}
		auto allTagsNode = allScalingConfigurationsNode["Tags"]["Tag"];
		for (auto allScalingConfigurationsNodeTagsTag : allTagsNode)
		{
			ScalingConfiguration::Tag tagsObject;
			if(!allScalingConfigurationsNodeTagsTag["Key"].isNull())
				tagsObject.key = allScalingConfigurationsNodeTagsTag["Key"].asString();
			if(!allScalingConfigurationsNodeTagsTag["Value"].isNull())
				tagsObject.value = allScalingConfigurationsNodeTagsTag["Value"].asString();
			scalingConfigurationsObject.tags.push_back(tagsObject);
		}
		auto allSpotPriceLimitNode = allScalingConfigurationsNode["SpotPriceLimit"]["SpotPriceModel"];
		for (auto allScalingConfigurationsNodeSpotPriceLimitSpotPriceModel : allSpotPriceLimitNode)
		{
			ScalingConfiguration::SpotPriceModel spotPriceLimitObject;
			if(!allScalingConfigurationsNodeSpotPriceLimitSpotPriceModel["InstanceType"].isNull())
				spotPriceLimitObject.instanceType = allScalingConfigurationsNodeSpotPriceLimitSpotPriceModel["InstanceType"].asString();
			if(!allScalingConfigurationsNodeSpotPriceLimitSpotPriceModel["PriceLimit"].isNull())
				spotPriceLimitObject.priceLimit = std::stof(allScalingConfigurationsNodeSpotPriceLimitSpotPriceModel["PriceLimit"].asString());
			scalingConfigurationsObject.spotPriceLimit.push_back(spotPriceLimitObject);
		}
		auto allInstanceTypes = value["InstanceTypes"]["InstanceType"];
		for (auto value : allInstanceTypes)
			scalingConfigurationsObject.instanceTypes.push_back(value.asString());
		auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
		for (auto value : allSecurityGroupIds)
			scalingConfigurationsObject.securityGroupIds.push_back(value.asString());
		scalingConfigurations_.push_back(scalingConfigurationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeScalingConfigurationsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeScalingConfigurationsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeScalingConfigurationsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeScalingConfigurationsResult::ScalingConfiguration> DescribeScalingConfigurationsResult::getScalingConfigurations()const
{
	return scalingConfigurations_;
}

