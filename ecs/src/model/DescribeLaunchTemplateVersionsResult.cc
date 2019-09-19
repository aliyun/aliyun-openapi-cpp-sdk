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

#include <alibabacloud/ecs/model/DescribeLaunchTemplateVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeLaunchTemplateVersionsResult::DescribeLaunchTemplateVersionsResult() :
	ServiceResult()
{}

DescribeLaunchTemplateVersionsResult::DescribeLaunchTemplateVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLaunchTemplateVersionsResult::~DescribeLaunchTemplateVersionsResult()
{}

void DescribeLaunchTemplateVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLaunchTemplateVersionSetsNode = value["LaunchTemplateVersionSets"]["LaunchTemplateVersionSet"];
	for (auto valueLaunchTemplateVersionSetsLaunchTemplateVersionSet : allLaunchTemplateVersionSetsNode)
	{
		LaunchTemplateVersionSet launchTemplateVersionSetsObject;
		if(!valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["CreateTime"].isNull())
			launchTemplateVersionSetsObject.createTime = valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["CreateTime"].asString();
		if(!valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["ModifiedTime"].isNull())
			launchTemplateVersionSetsObject.modifiedTime = valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["ModifiedTime"].asString();
		if(!valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["LaunchTemplateId"].isNull())
			launchTemplateVersionSetsObject.launchTemplateId = valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["LaunchTemplateId"].asString();
		if(!valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["LaunchTemplateName"].isNull())
			launchTemplateVersionSetsObject.launchTemplateName = valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["LaunchTemplateName"].asString();
		if(!valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["DefaultVersion"].isNull())
			launchTemplateVersionSetsObject.defaultVersion = valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["DefaultVersion"].asString() == "true";
		if(!valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["VersionNumber"].isNull())
			launchTemplateVersionSetsObject.versionNumber = std::stol(valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["VersionNumber"].asString());
		if(!valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["VersionDescription"].isNull())
			launchTemplateVersionSetsObject.versionDescription = valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["VersionDescription"].asString();
		if(!valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["CreatedBy"].isNull())
			launchTemplateVersionSetsObject.createdBy = valueLaunchTemplateVersionSetsLaunchTemplateVersionSet["CreatedBy"].asString();
		auto launchTemplateDataNode = value["LaunchTemplateData"];
		if(!launchTemplateDataNode["ImageId"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.imageId = launchTemplateDataNode["ImageId"].asString();
		if(!launchTemplateDataNode["ImageOwnerAlias"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.imageOwnerAlias = launchTemplateDataNode["ImageOwnerAlias"].asString();
		if(!launchTemplateDataNode["PasswordInherit"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.passwordInherit = launchTemplateDataNode["PasswordInherit"].asString() == "true";
		if(!launchTemplateDataNode["InstanceType"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.instanceType = launchTemplateDataNode["InstanceType"].asString();
		if(!launchTemplateDataNode["SecurityGroupId"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.securityGroupId = launchTemplateDataNode["SecurityGroupId"].asString();
		if(!launchTemplateDataNode["VpcId"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.vpcId = launchTemplateDataNode["VpcId"].asString();
		if(!launchTemplateDataNode["VSwitchId"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.vSwitchId = launchTemplateDataNode["VSwitchId"].asString();
		if(!launchTemplateDataNode["InstanceName"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.instanceName = launchTemplateDataNode["InstanceName"].asString();
		if(!launchTemplateDataNode["Description"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.description = launchTemplateDataNode["Description"].asString();
		if(!launchTemplateDataNode["InternetMaxBandwidthIn"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.internetMaxBandwidthIn = std::stoi(launchTemplateDataNode["InternetMaxBandwidthIn"].asString());
		if(!launchTemplateDataNode["InternetMaxBandwidthOut"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.internetMaxBandwidthOut = std::stoi(launchTemplateDataNode["InternetMaxBandwidthOut"].asString());
		if(!launchTemplateDataNode["HostName"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.hostName = launchTemplateDataNode["HostName"].asString();
		if(!launchTemplateDataNode["ZoneId"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.zoneId = launchTemplateDataNode["ZoneId"].asString();
		if(!launchTemplateDataNode["SystemDisk.Size"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.systemDiskSize = std::stoi(launchTemplateDataNode["SystemDisk.Size"].asString());
		if(!launchTemplateDataNode["SystemDisk.Category"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.systemDiskCategory = launchTemplateDataNode["SystemDisk.Category"].asString();
		if(!launchTemplateDataNode["SystemDisk.DiskName"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.systemDiskDiskName = launchTemplateDataNode["SystemDisk.DiskName"].asString();
		if(!launchTemplateDataNode["SystemDisk.Description"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.systemDiskDescription = launchTemplateDataNode["SystemDisk.Description"].asString();
		if(!launchTemplateDataNode["SystemDisk.Iops"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.systemDiskIops = std::stoi(launchTemplateDataNode["SystemDisk.Iops"].asString());
		if(!launchTemplateDataNode["IoOptimized"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.ioOptimized = launchTemplateDataNode["IoOptimized"].asString();
		if(!launchTemplateDataNode["InstanceChargeType"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.instanceChargeType = launchTemplateDataNode["InstanceChargeType"].asString();
		if(!launchTemplateDataNode["Period"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.period = std::stoi(launchTemplateDataNode["Period"].asString());
		if(!launchTemplateDataNode["InternetChargeType"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.internetChargeType = launchTemplateDataNode["InternetChargeType"].asString();
		if(!launchTemplateDataNode["EnableVmOsConfig"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.enableVmOsConfig = launchTemplateDataNode["EnableVmOsConfig"].asString() == "true";
		if(!launchTemplateDataNode["NetworkType"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.networkType = launchTemplateDataNode["NetworkType"].asString();
		if(!launchTemplateDataNode["UserData"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.userData = launchTemplateDataNode["UserData"].asString();
		if(!launchTemplateDataNode["KeyPairName"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.keyPairName = launchTemplateDataNode["KeyPairName"].asString();
		if(!launchTemplateDataNode["RamRoleName"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.ramRoleName = launchTemplateDataNode["RamRoleName"].asString();
		if(!launchTemplateDataNode["AutoReleaseTime"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.autoReleaseTime = launchTemplateDataNode["AutoReleaseTime"].asString();
		if(!launchTemplateDataNode["SpotStrategy"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.spotStrategy = launchTemplateDataNode["SpotStrategy"].asString();
		if(!launchTemplateDataNode["SpotPriceLimit"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.spotPriceLimit = std::stof(launchTemplateDataNode["SpotPriceLimit"].asString());
		if(!launchTemplateDataNode["SpotDuration"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.spotDuration = std::stoi(launchTemplateDataNode["SpotDuration"].asString());
		if(!launchTemplateDataNode["ResourceGroupId"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.resourceGroupId = launchTemplateDataNode["ResourceGroupId"].asString();
		if(!launchTemplateDataNode["SecurityEnhancementStrategy"].isNull())
			launchTemplateVersionSetsObject.launchTemplateData.securityEnhancementStrategy = launchTemplateDataNode["SecurityEnhancementStrategy"].asString();
		auto allDataDisksNode = launchTemplateDataNode["DataDisks"]["DataDisk"];
		for (auto launchTemplateDataNodeDataDisksDataDisk : allDataDisksNode)
		{
			LaunchTemplateVersionSet::LaunchTemplateData::DataDisk dataDiskObject;
			if(!launchTemplateDataNodeDataDisksDataDisk["Size"].isNull())
				dataDiskObject.size = std::stoi(launchTemplateDataNodeDataDisksDataDisk["Size"].asString());
			if(!launchTemplateDataNodeDataDisksDataDisk["SnapshotId"].isNull())
				dataDiskObject.snapshotId = launchTemplateDataNodeDataDisksDataDisk["SnapshotId"].asString();
			if(!launchTemplateDataNodeDataDisksDataDisk["Category"].isNull())
				dataDiskObject.category = launchTemplateDataNodeDataDisksDataDisk["Category"].asString();
			if(!launchTemplateDataNodeDataDisksDataDisk["Encrypted"].isNull())
				dataDiskObject.encrypted = launchTemplateDataNodeDataDisksDataDisk["Encrypted"].asString();
			if(!launchTemplateDataNodeDataDisksDataDisk["DiskName"].isNull())
				dataDiskObject.diskName = launchTemplateDataNodeDataDisksDataDisk["DiskName"].asString();
			if(!launchTemplateDataNodeDataDisksDataDisk["Description"].isNull())
				dataDiskObject.description = launchTemplateDataNodeDataDisksDataDisk["Description"].asString();
			if(!launchTemplateDataNodeDataDisksDataDisk["DeleteWithInstance"].isNull())
				dataDiskObject.deleteWithInstance = launchTemplateDataNodeDataDisksDataDisk["DeleteWithInstance"].asString() == "true";
			if(!launchTemplateDataNodeDataDisksDataDisk["Device"].isNull())
				dataDiskObject.device = launchTemplateDataNodeDataDisksDataDisk["Device"].asString();
			launchTemplateVersionSetsObject.launchTemplateData.dataDisks.push_back(dataDiskObject);
		}
		auto allNetworkInterfacesNode = launchTemplateDataNode["NetworkInterfaces"]["NetworkInterface"];
		for (auto launchTemplateDataNodeNetworkInterfacesNetworkInterface : allNetworkInterfacesNode)
		{
			LaunchTemplateVersionSet::LaunchTemplateData::NetworkInterface networkInterfaceObject;
			if(!launchTemplateDataNodeNetworkInterfacesNetworkInterface["PrimaryIpAddress"].isNull())
				networkInterfaceObject.primaryIpAddress = launchTemplateDataNodeNetworkInterfacesNetworkInterface["PrimaryIpAddress"].asString();
			if(!launchTemplateDataNodeNetworkInterfacesNetworkInterface["VSwitchId"].isNull())
				networkInterfaceObject.vSwitchId = launchTemplateDataNodeNetworkInterfacesNetworkInterface["VSwitchId"].asString();
			if(!launchTemplateDataNodeNetworkInterfacesNetworkInterface["SecurityGroupId"].isNull())
				networkInterfaceObject.securityGroupId = launchTemplateDataNodeNetworkInterfacesNetworkInterface["SecurityGroupId"].asString();
			if(!launchTemplateDataNodeNetworkInterfacesNetworkInterface["NetworkInterfaceName"].isNull())
				networkInterfaceObject.networkInterfaceName = launchTemplateDataNodeNetworkInterfacesNetworkInterface["NetworkInterfaceName"].asString();
			if(!launchTemplateDataNodeNetworkInterfacesNetworkInterface["Description"].isNull())
				networkInterfaceObject.description = launchTemplateDataNodeNetworkInterfacesNetworkInterface["Description"].asString();
			launchTemplateVersionSetsObject.launchTemplateData.networkInterfaces.push_back(networkInterfaceObject);
		}
		auto allTagsNode = launchTemplateDataNode["Tags"]["InstanceTag"];
		for (auto launchTemplateDataNodeTagsInstanceTag : allTagsNode)
		{
			LaunchTemplateVersionSet::LaunchTemplateData::InstanceTag instanceTagObject;
			if(!launchTemplateDataNodeTagsInstanceTag["Key"].isNull())
				instanceTagObject.key = launchTemplateDataNodeTagsInstanceTag["Key"].asString();
			if(!launchTemplateDataNodeTagsInstanceTag["Value"].isNull())
				instanceTagObject.value = launchTemplateDataNodeTagsInstanceTag["Value"].asString();
			launchTemplateVersionSetsObject.launchTemplateData.tags.push_back(instanceTagObject);
		}
		launchTemplateVersionSets_.push_back(launchTemplateVersionSetsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeLaunchTemplateVersionsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeLaunchTemplateVersionsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLaunchTemplateVersionsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeLaunchTemplateVersionsResult::LaunchTemplateVersionSet> DescribeLaunchTemplateVersionsResult::getLaunchTemplateVersionSets()const
{
	return launchTemplateVersionSets_;
}

