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

#include <alibabacloud/ecd/model/DescribeDesktopsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeDesktopsResult::DescribeDesktopsResult() :
	ServiceResult()
{}

DescribeDesktopsResult::DescribeDesktopsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDesktopsResult::~DescribeDesktopsResult()
{}

void DescribeDesktopsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDesktopsNode = value["Desktops"]["Desktop"];
	for (auto valueDesktopsDesktop : allDesktopsNode)
	{
		Desktop desktopsObject;
		if(!valueDesktopsDesktop["CreationTime"].isNull())
			desktopsObject.creationTime = valueDesktopsDesktop["CreationTime"].asString();
		if(!valueDesktopsDesktop["ChargeType"].isNull())
			desktopsObject.chargeType = valueDesktopsDesktop["ChargeType"].asString();
		if(!valueDesktopsDesktop["DesktopName"].isNull())
			desktopsObject.desktopName = valueDesktopsDesktop["DesktopName"].asString();
		if(!valueDesktopsDesktop["PolicyGroupName"].isNull())
			desktopsObject.policyGroupName = valueDesktopsDesktop["PolicyGroupName"].asString();
		if(!valueDesktopsDesktop["SystemDiskSize"].isNull())
			desktopsObject.systemDiskSize = std::stoi(valueDesktopsDesktop["SystemDiskSize"].asString());
		if(!valueDesktopsDesktop["PolicyGroupId"].isNull())
			desktopsObject.policyGroupId = valueDesktopsDesktop["PolicyGroupId"].asString();
		if(!valueDesktopsDesktop["DesktopStatus"].isNull())
			desktopsObject.desktopStatus = valueDesktopsDesktop["DesktopStatus"].asString();
		if(!valueDesktopsDesktop["DesktopType"].isNull())
			desktopsObject.desktopType = valueDesktopsDesktop["DesktopType"].asString();
		if(!valueDesktopsDesktop["GpuCount"].isNull())
			desktopsObject.gpuCount = std::stof(valueDesktopsDesktop["GpuCount"].asString());
		if(!valueDesktopsDesktop["ProtocolType"].isNull())
			desktopsObject.protocolType = valueDesktopsDesktop["ProtocolType"].asString();
		if(!valueDesktopsDesktop["Memory"].isNull())
			desktopsObject.memory = std::stol(valueDesktopsDesktop["Memory"].asString());
		if(!valueDesktopsDesktop["GpuSpec"].isNull())
			desktopsObject.gpuSpec = valueDesktopsDesktop["GpuSpec"].asString();
		if(!valueDesktopsDesktop["ImageId"].isNull())
			desktopsObject.imageId = valueDesktopsDesktop["ImageId"].asString();
		if(!valueDesktopsDesktop["DirectoryId"].isNull())
			desktopsObject.directoryId = valueDesktopsDesktop["DirectoryId"].asString();
		if(!valueDesktopsDesktop["ManagementFlag"].isNull())
			desktopsObject.managementFlag = valueDesktopsDesktop["ManagementFlag"].asString();
		if(!valueDesktopsDesktop["DataDiskCategory"].isNull())
			desktopsObject.dataDiskCategory = valueDesktopsDesktop["DataDiskCategory"].asString();
		if(!valueDesktopsDesktop["SystemDiskCategory"].isNull())
			desktopsObject.systemDiskCategory = valueDesktopsDesktop["SystemDiskCategory"].asString();
		if(!valueDesktopsDesktop["NetworkInterfaceId"].isNull())
			desktopsObject.networkInterfaceId = valueDesktopsDesktop["NetworkInterfaceId"].asString();
		if(!valueDesktopsDesktop["OfficeSiteId"].isNull())
			desktopsObject.officeSiteId = valueDesktopsDesktop["OfficeSiteId"].asString();
		if(!valueDesktopsDesktop["DataDiskSize"].isNull())
			desktopsObject.dataDiskSize = valueDesktopsDesktop["DataDiskSize"].asString();
		if(!valueDesktopsDesktop["DesktopGroupId"].isNull())
			desktopsObject.desktopGroupId = valueDesktopsDesktop["DesktopGroupId"].asString();
		if(!valueDesktopsDesktop["DesktopId"].isNull())
			desktopsObject.desktopId = valueDesktopsDesktop["DesktopId"].asString();
		if(!valueDesktopsDesktop["OfficeSiteName"].isNull())
			desktopsObject.officeSiteName = valueDesktopsDesktop["OfficeSiteName"].asString();
		if(!valueDesktopsDesktop["StartTime"].isNull())
			desktopsObject.startTime = valueDesktopsDesktop["StartTime"].asString();
		if(!valueDesktopsDesktop["DirectoryType"].isNull())
			desktopsObject.directoryType = valueDesktopsDesktop["DirectoryType"].asString();
		if(!valueDesktopsDesktop["Cpu"].isNull())
			desktopsObject.cpu = std::stoi(valueDesktopsDesktop["Cpu"].asString());
		if(!valueDesktopsDesktop["NetworkInterfaceIp"].isNull())
			desktopsObject.networkInterfaceIp = valueDesktopsDesktop["NetworkInterfaceIp"].asString();
		if(!valueDesktopsDesktop["ExpiredTime"].isNull())
			desktopsObject.expiredTime = valueDesktopsDesktop["ExpiredTime"].asString();
		if(!valueDesktopsDesktop["OsType"].isNull())
			desktopsObject.osType = valueDesktopsDesktop["OsType"].asString();
		if(!valueDesktopsDesktop["ConnectionStatus"].isNull())
			desktopsObject.connectionStatus = valueDesktopsDesktop["ConnectionStatus"].asString();
		if(!valueDesktopsDesktop["BundleId"].isNull())
			desktopsObject.bundleId = valueDesktopsDesktop["BundleId"].asString();
		if(!valueDesktopsDesktop["BundleName"].isNull())
			desktopsObject.bundleName = valueDesktopsDesktop["BundleName"].asString();
		if(!valueDesktopsDesktop["OfficeSiteType"].isNull())
			desktopsObject.officeSiteType = valueDesktopsDesktop["OfficeSiteType"].asString();
		if(!valueDesktopsDesktop["HostName"].isNull())
			desktopsObject.hostName = valueDesktopsDesktop["HostName"].asString();
		if(!valueDesktopsDesktop["DowngradeQuota"].isNull())
			desktopsObject.downgradeQuota = std::stol(valueDesktopsDesktop["DowngradeQuota"].asString());
		if(!valueDesktopsDesktop["DowngradedTimes"].isNull())
			desktopsObject.downgradedTimes = std::stol(valueDesktopsDesktop["DowngradedTimes"].asString());
		if(!valueDesktopsDesktop["GpuCategory"].isNull())
			desktopsObject.gpuCategory = std::stol(valueDesktopsDesktop["GpuCategory"].asString());
		if(!valueDesktopsDesktop["GpuDriverVersion"].isNull())
			desktopsObject.gpuDriverVersion = valueDesktopsDesktop["GpuDriverVersion"].asString();
		if(!valueDesktopsDesktop["ZoneType"].isNull())
			desktopsObject.zoneType = valueDesktopsDesktop["ZoneType"].asString();
		if(!valueDesktopsDesktop["Progress"].isNull())
			desktopsObject.progress = valueDesktopsDesktop["Progress"].asString();
		if(!valueDesktopsDesktop["VolumeEncryptionEnabled"].isNull())
			desktopsObject.volumeEncryptionEnabled = valueDesktopsDesktop["VolumeEncryptionEnabled"].asString() == "true";
		if(!valueDesktopsDesktop["VolumeEncryptionKey"].isNull())
			desktopsObject.volumeEncryptionKey = valueDesktopsDesktop["VolumeEncryptionKey"].asString();
		if(!valueDesktopsDesktop["OfficeSiteVpcType"].isNull())
			desktopsObject.officeSiteVpcType = valueDesktopsDesktop["OfficeSiteVpcType"].asString();
		if(!valueDesktopsDesktop["Platform"].isNull())
			desktopsObject.platform = valueDesktopsDesktop["Platform"].asString();
		if(!valueDesktopsDesktop["SessionType"].isNull())
			desktopsObject.sessionType = valueDesktopsDesktop["SessionType"].asString();
		if(!valueDesktopsDesktop["SnapshotPolicyId"].isNull())
			desktopsObject.snapshotPolicyId = valueDesktopsDesktop["SnapshotPolicyId"].asString();
		if(!valueDesktopsDesktop["SnapshotPolicyName"].isNull())
			desktopsObject.snapshotPolicyName = valueDesktopsDesktop["SnapshotPolicyName"].asString();
		if(!valueDesktopsDesktop["BindAmount"].isNull())
			desktopsObject.bindAmount = std::stoi(valueDesktopsDesktop["BindAmount"].asString());
		if(!valueDesktopsDesktop["HibernationOptionsConfigured"].isNull())
			desktopsObject.hibernationOptionsConfigured = valueDesktopsDesktop["HibernationOptionsConfigured"].asString() == "true";
		if(!valueDesktopsDesktop["SupportHibernation"].isNull())
			desktopsObject.supportHibernation = valueDesktopsDesktop["SupportHibernation"].asString() == "true";
		auto allDisksNode = valueDesktopsDesktop["Disks"]["Disk"];
		for (auto valueDesktopsDesktopDisksDisk : allDisksNode)
		{
			Desktop::Disk disksObject;
			if(!valueDesktopsDesktopDisksDisk["DiskType"].isNull())
				disksObject.diskType = valueDesktopsDesktopDisksDisk["DiskType"].asString();
			if(!valueDesktopsDesktopDisksDisk["DiskId"].isNull())
				disksObject.diskId = valueDesktopsDesktopDisksDisk["DiskId"].asString();
			if(!valueDesktopsDesktopDisksDisk["DiskSize"].isNull())
				disksObject.diskSize = std::stoi(valueDesktopsDesktopDisksDisk["DiskSize"].asString());
			if(!valueDesktopsDesktopDisksDisk["PerformanceLevel"].isNull())
				disksObject.performanceLevel = valueDesktopsDesktopDisksDisk["PerformanceLevel"].asString();
			desktopsObject.disks.push_back(disksObject);
		}
		auto allTagsNode = valueDesktopsDesktop["Tags"]["Tag"];
		for (auto valueDesktopsDesktopTagsTag : allTagsNode)
		{
			Desktop::Tag tagsObject;
			if(!valueDesktopsDesktopTagsTag["Key"].isNull())
				tagsObject.key = valueDesktopsDesktopTagsTag["Key"].asString();
			if(!valueDesktopsDesktopTagsTag["Value"].isNull())
				tagsObject.value = valueDesktopsDesktopTagsTag["Value"].asString();
			desktopsObject.tags.push_back(tagsObject);
		}
		auto allSessionsNode = valueDesktopsDesktop["Sessions"]["Session"];
		for (auto valueDesktopsDesktopSessionsSession : allSessionsNode)
		{
			Desktop::Session sessionsObject;
			if(!valueDesktopsDesktopSessionsSession["EndUserId"].isNull())
				sessionsObject.endUserId = valueDesktopsDesktopSessionsSession["EndUserId"].asString();
			if(!valueDesktopsDesktopSessionsSession["EstablishmentTime"].isNull())
				sessionsObject.establishmentTime = valueDesktopsDesktopSessionsSession["EstablishmentTime"].asString();
			if(!valueDesktopsDesktopSessionsSession["ExternalUserName"].isNull())
				sessionsObject.externalUserName = valueDesktopsDesktopSessionsSession["ExternalUserName"].asString();
			desktopsObject.sessions.push_back(sessionsObject);
		}
		auto fotaUpdateNode = value["FotaUpdate"];
		if(!fotaUpdateNode["CurrentAppVersion"].isNull())
			desktopsObject.fotaUpdate.currentAppVersion = fotaUpdateNode["CurrentAppVersion"].asString();
		if(!fotaUpdateNode["NewAppVersion"].isNull())
			desktopsObject.fotaUpdate.newAppVersion = fotaUpdateNode["NewAppVersion"].asString();
		if(!fotaUpdateNode["ReleaseNote"].isNull())
			desktopsObject.fotaUpdate.releaseNote = fotaUpdateNode["ReleaseNote"].asString();
		if(!fotaUpdateNode["Size"].isNull())
			desktopsObject.fotaUpdate.size = std::stol(fotaUpdateNode["Size"].asString());
		auto allEndUserIds = value["EndUserIds"]["EndUserId"];
		for (auto value : allEndUserIds)
			desktopsObject.endUserIds.push_back(value.asString());
		auto allManagementFlags = value["ManagementFlags"]["mgtFlag"];
		for (auto value : allManagementFlags)
			desktopsObject.managementFlags.push_back(value.asString());
		auto allPolicyGroupIdList = value["PolicyGroupIdList"]["policyGroupId"];
		for (auto value : allPolicyGroupIdList)
			desktopsObject.policyGroupIdList.push_back(value.asString());
		auto allPolicyGroupNameList = value["PolicyGroupNameList"]["policyGroupName"];
		for (auto value : allPolicyGroupNameList)
			desktopsObject.policyGroupNameList.push_back(value.asString());
		desktops_.push_back(desktopsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDesktopsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeDesktopsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeDesktopsResult::Desktop> DescribeDesktopsResult::getDesktops()const
{
	return desktops_;
}

