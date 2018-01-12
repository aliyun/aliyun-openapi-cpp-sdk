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
		ScalingConfiguration scalingConfigurationObject;
		if(!value["ScalingConfigurationId"].isNull())
			scalingConfigurationObject.scalingConfigurationId = value["ScalingConfigurationId"].asString();
		if(!value["ScalingConfigurationName"].isNull())
			scalingConfigurationObject.scalingConfigurationName = value["ScalingConfigurationName"].asString();
		if(!value["ScalingGroupId"].isNull())
			scalingConfigurationObject.scalingGroupId = value["ScalingGroupId"].asString();
		if(!value["InstanceName"].isNull())
			scalingConfigurationObject.instanceName = value["InstanceName"].asString();
		if(!value["ImageId"].isNull())
			scalingConfigurationObject.imageId = value["ImageId"].asString();
		if(!value["InstanceType"].isNull())
			scalingConfigurationObject.instanceType = value["InstanceType"].asString();
		if(!value["InstanceGeneration"].isNull())
			scalingConfigurationObject.instanceGeneration = value["InstanceGeneration"].asString();
		if(!value["SecurityGroupId"].isNull())
			scalingConfigurationObject.securityGroupId = value["SecurityGroupId"].asString();
		if(!value["IoOptimized"].isNull())
			scalingConfigurationObject.ioOptimized = value["IoOptimized"].asString();
		if(!value["InternetChargeType"].isNull())
			scalingConfigurationObject.internetChargeType = value["InternetChargeType"].asString();
		if(!value["InternetMaxBandwidthIn"].isNull())
			scalingConfigurationObject.internetMaxBandwidthIn = std::stoi(value["InternetMaxBandwidthIn"].asString());
		if(!value["InternetMaxBandwidthOut"].isNull())
			scalingConfigurationObject.internetMaxBandwidthOut = std::stoi(value["InternetMaxBandwidthOut"].asString());
		if(!value["SystemDiskCategory"].isNull())
			scalingConfigurationObject.systemDiskCategory = value["SystemDiskCategory"].asString();
		if(!value["SystemDiskSize"].isNull())
			scalingConfigurationObject.systemDiskSize = std::stoi(value["SystemDiskSize"].asString());
		if(!value["LifecycleState"].isNull())
			scalingConfigurationObject.lifecycleState = value["LifecycleState"].asString();
		if(!value["CreationTime"].isNull())
			scalingConfigurationObject.creationTime = value["CreationTime"].asString();
		if(!value["LoadBalancerWeight"].isNull())
			scalingConfigurationObject.loadBalancerWeight = std::stoi(value["LoadBalancerWeight"].asString());
		if(!value["UserData"].isNull())
			scalingConfigurationObject.userData = value["UserData"].asString();
		if(!value["KeyPairName"].isNull())
			scalingConfigurationObject.keyPairName = value["KeyPairName"].asString();
		if(!value["RamRoleName"].isNull())
			scalingConfigurationObject.ramRoleName = value["RamRoleName"].asString();
		if(!value["DeploymentSetId"].isNull())
			scalingConfigurationObject.deploymentSetId = value["DeploymentSetId"].asString();
		if(!value["SecurityEnhancementStrategy"].isNull())
			scalingConfigurationObject.securityEnhancementStrategy = value["SecurityEnhancementStrategy"].asString();
		auto allDataDisks = value["DataDisks"]["DataDisk"];
		for (auto value : allDataDisks)
		{
			ScalingConfiguration::DataDisk dataDiskObject;
			if(!value["Size"].isNull())
				dataDiskObject.size = std::stoi(value["Size"].asString());
			if(!value["Category"].isNull())
				dataDiskObject.category = value["Category"].asString();
			if(!value["SnapshotId"].isNull())
				dataDiskObject.snapshotId = value["SnapshotId"].asString();
			if(!value["Device"].isNull())
				dataDiskObject.device = value["Device"].asString();
			scalingConfigurationObject.dataDisks.push_back(dataDiskObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			ScalingConfiguration::Tag tagObject;
			if(!value["Key"].isNull())
				tagObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagObject.value = value["Value"].asString();
			scalingConfigurationObject.tags.push_back(tagObject);
		}
		auto allInstanceTypes = value["InstanceTypes"]["InstanceType"];
		for (auto value : allInstanceTypes)
			scalingConfigurationObject.instanceTypes.push_back(value.asString());
		scalingConfigurations_.push_back(scalingConfigurationObject);
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

void DescribeScalingConfigurationsResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeScalingConfigurationsResult::getPageSize()const
{
	return pageSize_;
}

void DescribeScalingConfigurationsResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeScalingConfigurationsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeScalingConfigurationsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

