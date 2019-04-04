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
	auto allScalingConfigurations = value["ScalingConfigurations"]["ScalingConfiguration"];
	for (auto value : allScalingConfigurations)
	{
		ScalingConfiguration scalingConfigurationsObject;
		if(!value["ScalingConfigurationId"].isNull())
			scalingConfigurationsObject.scalingConfigurationId = value["ScalingConfigurationId"].asString();
		if(!value["ScalingConfigurationName"].isNull())
			scalingConfigurationsObject.scalingConfigurationName = value["ScalingConfigurationName"].asString();
		if(!value["ScalingGroupId"].isNull())
			scalingConfigurationsObject.scalingGroupId = value["ScalingGroupId"].asString();
		if(!value["InstanceName"].isNull())
			scalingConfigurationsObject.instanceName = value["InstanceName"].asString();
		if(!value["ImageId"].isNull())
			scalingConfigurationsObject.imageId = value["ImageId"].asString();
		if(!value["ImageName"].isNull())
			scalingConfigurationsObject.imageName = value["ImageName"].asString();
		if(!value["HostName"].isNull())
			scalingConfigurationsObject.hostName = value["HostName"].asString();
		if(!value["InstanceType"].isNull())
			scalingConfigurationsObject.instanceType = value["InstanceType"].asString();
		if(!value["Cpu"].isNull())
			scalingConfigurationsObject.cpu = std::stoi(value["Cpu"].asString());
		if(!value["Memory"].isNull())
			scalingConfigurationsObject.memory = std::stoi(value["Memory"].asString());
		if(!value["InstanceGeneration"].isNull())
			scalingConfigurationsObject.instanceGeneration = value["InstanceGeneration"].asString();
		if(!value["SecurityGroupId"].isNull())
			scalingConfigurationsObject.securityGroupId = value["SecurityGroupId"].asString();
		if(!value["IoOptimized"].isNull())
			scalingConfigurationsObject.ioOptimized = value["IoOptimized"].asString();
		if(!value["InternetChargeType"].isNull())
			scalingConfigurationsObject.internetChargeType = value["InternetChargeType"].asString();
		if(!value["InternetMaxBandwidthIn"].isNull())
			scalingConfigurationsObject.internetMaxBandwidthIn = std::stoi(value["InternetMaxBandwidthIn"].asString());
		if(!value["InternetMaxBandwidthOut"].isNull())
			scalingConfigurationsObject.internetMaxBandwidthOut = std::stoi(value["InternetMaxBandwidthOut"].asString());
		if(!value["SystemDiskCategory"].isNull())
			scalingConfigurationsObject.systemDiskCategory = value["SystemDiskCategory"].asString();
		if(!value["SystemDiskSize"].isNull())
			scalingConfigurationsObject.systemDiskSize = std::stoi(value["SystemDiskSize"].asString());
		if(!value["SystemDiskName"].isNull())
			scalingConfigurationsObject.systemDiskName = value["SystemDiskName"].asString();
		if(!value["SystemDiskDescription"].isNull())
			scalingConfigurationsObject.systemDiskDescription = value["SystemDiskDescription"].asString();
		if(!value["LifecycleState"].isNull())
			scalingConfigurationsObject.lifecycleState = value["LifecycleState"].asString();
		if(!value["CreationTime"].isNull())
			scalingConfigurationsObject.creationTime = value["CreationTime"].asString();
		if(!value["LoadBalancerWeight"].isNull())
			scalingConfigurationsObject.loadBalancerWeight = std::stoi(value["LoadBalancerWeight"].asString());
		if(!value["UserData"].isNull())
			scalingConfigurationsObject.userData = value["UserData"].asString();
		if(!value["KeyPairName"].isNull())
			scalingConfigurationsObject.keyPairName = value["KeyPairName"].asString();
		if(!value["RamRoleName"].isNull())
			scalingConfigurationsObject.ramRoleName = value["RamRoleName"].asString();
		if(!value["DeploymentSetId"].isNull())
			scalingConfigurationsObject.deploymentSetId = value["DeploymentSetId"].asString();
		if(!value["SecurityEnhancementStrategy"].isNull())
			scalingConfigurationsObject.securityEnhancementStrategy = value["SecurityEnhancementStrategy"].asString();
		if(!value["SpotStrategy"].isNull())
			scalingConfigurationsObject.spotStrategy = value["SpotStrategy"].asString();
		if(!value["PasswordInherit"].isNull())
			scalingConfigurationsObject.passwordInherit = value["PasswordInherit"].asString() == "true";
		if(!value["ResourceGroupId"].isNull())
			scalingConfigurationsObject.resourceGroupId = value["ResourceGroupId"].asString();
		auto allDataDisks = value["DataDisks"]["DataDisk"];
		for (auto value : allDataDisks)
		{
			ScalingConfiguration::DataDisk dataDisksObject;
			if(!value["Size"].isNull())
				dataDisksObject.size = std::stoi(value["Size"].asString());
			if(!value["Category"].isNull())
				dataDisksObject.category = value["Category"].asString();
			if(!value["SnapshotId"].isNull())
				dataDisksObject.snapshotId = value["SnapshotId"].asString();
			if(!value["Device"].isNull())
				dataDisksObject.device = value["Device"].asString();
			if(!value["DeleteWithInstance"].isNull())
				dataDisksObject.deleteWithInstance = value["DeleteWithInstance"].asString() == "true";
			if(!value["Encrypted"].isNull())
				dataDisksObject.encrypted = value["Encrypted"].asString();
			if(!value["KMSKeyId"].isNull())
				dataDisksObject.kMSKeyId = value["KMSKeyId"].asString();
			if(!value["DiskName"].isNull())
				dataDisksObject.diskName = value["DiskName"].asString();
			if(!value["Description"].isNull())
				dataDisksObject.description = value["Description"].asString();
			scalingConfigurationsObject.dataDisks.push_back(dataDisksObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			ScalingConfiguration::Tag tagsObject;
			if(!value["Key"].isNull())
				tagsObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagsObject.value = value["Value"].asString();
			scalingConfigurationsObject.tags.push_back(tagsObject);
		}
		auto allSpotPriceLimit = value["SpotPriceLimit"]["SpotPriceModel"];
		for (auto value : allSpotPriceLimit)
		{
			ScalingConfiguration::SpotPriceModel spotPriceLimitObject;
			if(!value["InstanceType"].isNull())
				spotPriceLimitObject.instanceType = value["InstanceType"].asString();
			if(!value["PriceLimit"].isNull())
				spotPriceLimitObject.priceLimit = std::stof(value["PriceLimit"].asString());
			scalingConfigurationsObject.spotPriceLimit.push_back(spotPriceLimitObject);
		}
		auto allInstanceTypes = value["InstanceTypes"]["InstanceType"];
		for (auto value : allInstanceTypes)
			scalingConfigurationsObject.instanceTypes.push_back(value.asString());
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

