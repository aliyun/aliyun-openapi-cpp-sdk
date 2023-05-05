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

#include <alibabacloud/ecd/model/DescribeDesktopGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeDesktopGroupsResult::DescribeDesktopGroupsResult() :
	ServiceResult()
{}

DescribeDesktopGroupsResult::DescribeDesktopGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDesktopGroupsResult::~DescribeDesktopGroupsResult()
{}

void DescribeDesktopGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDesktopGroupsNode = value["DesktopGroups"]["DesktopGroup"];
	for (auto valueDesktopGroupsDesktopGroup : allDesktopGroupsNode)
	{
		DesktopGroup desktopGroupsObject;
		if(!valueDesktopGroupsDesktopGroup["CreateTime"].isNull())
			desktopGroupsObject.createTime = valueDesktopGroupsDesktopGroup["CreateTime"].asString();
		if(!valueDesktopGroupsDesktopGroup["PayType"].isNull())
			desktopGroupsObject.payType = valueDesktopGroupsDesktopGroup["PayType"].asString();
		if(!valueDesktopGroupsDesktopGroup["PolicyGroupName"].isNull())
			desktopGroupsObject.policyGroupName = valueDesktopGroupsDesktopGroup["PolicyGroupName"].asString();
		if(!valueDesktopGroupsDesktopGroup["Creator"].isNull())
			desktopGroupsObject.creator = valueDesktopGroupsDesktopGroup["Creator"].asString();
		if(!valueDesktopGroupsDesktopGroup["MaxDesktopsCount"].isNull())
			desktopGroupsObject.maxDesktopsCount = std::stoi(valueDesktopGroupsDesktopGroup["MaxDesktopsCount"].asString());
		if(!valueDesktopGroupsDesktopGroup["SystemDiskSize"].isNull())
			desktopGroupsObject.systemDiskSize = std::stoi(valueDesktopGroupsDesktopGroup["SystemDiskSize"].asString());
		if(!valueDesktopGroupsDesktopGroup["PolicyGroupId"].isNull())
			desktopGroupsObject.policyGroupId = valueDesktopGroupsDesktopGroup["PolicyGroupId"].asString();
		if(!valueDesktopGroupsDesktopGroup["OwnBundleId"].isNull())
			desktopGroupsObject.ownBundleId = valueDesktopGroupsDesktopGroup["OwnBundleId"].asString();
		if(!valueDesktopGroupsDesktopGroup["GpuCount"].isNull())
			desktopGroupsObject.gpuCount = std::stof(valueDesktopGroupsDesktopGroup["GpuCount"].asString());
		if(!valueDesktopGroupsDesktopGroup["Memory"].isNull())
			desktopGroupsObject.memory = std::stol(valueDesktopGroupsDesktopGroup["Memory"].asString());
		if(!valueDesktopGroupsDesktopGroup["GpuSpec"].isNull())
			desktopGroupsObject.gpuSpec = valueDesktopGroupsDesktopGroup["GpuSpec"].asString();
		if(!valueDesktopGroupsDesktopGroup["DirectoryId"].isNull())
			desktopGroupsObject.directoryId = valueDesktopGroupsDesktopGroup["DirectoryId"].asString();
		if(!valueDesktopGroupsDesktopGroup["OwnBundleName"].isNull())
			desktopGroupsObject.ownBundleName = valueDesktopGroupsDesktopGroup["OwnBundleName"].asString();
		if(!valueDesktopGroupsDesktopGroup["DataDiskCategory"].isNull())
			desktopGroupsObject.dataDiskCategory = valueDesktopGroupsDesktopGroup["DataDiskCategory"].asString();
		if(!valueDesktopGroupsDesktopGroup["DesktopGroupName"].isNull())
			desktopGroupsObject.desktopGroupName = valueDesktopGroupsDesktopGroup["DesktopGroupName"].asString();
		if(!valueDesktopGroupsDesktopGroup["SystemDiskCategory"].isNull())
			desktopGroupsObject.systemDiskCategory = valueDesktopGroupsDesktopGroup["SystemDiskCategory"].asString();
		if(!valueDesktopGroupsDesktopGroup["OfficeSiteId"].isNull())
			desktopGroupsObject.officeSiteId = valueDesktopGroupsDesktopGroup["OfficeSiteId"].asString();
		if(!valueDesktopGroupsDesktopGroup["KeepDuration"].isNull())
			desktopGroupsObject.keepDuration = std::stol(valueDesktopGroupsDesktopGroup["KeepDuration"].asString());
		if(!valueDesktopGroupsDesktopGroup["MinDesktopsCount"].isNull())
			desktopGroupsObject.minDesktopsCount = std::stoi(valueDesktopGroupsDesktopGroup["MinDesktopsCount"].asString());
		if(!valueDesktopGroupsDesktopGroup["EndUserCount"].isNull())
			desktopGroupsObject.endUserCount = std::stoi(valueDesktopGroupsDesktopGroup["EndUserCount"].asString());
		if(!valueDesktopGroupsDesktopGroup["DataDiskSize"].isNull())
			desktopGroupsObject.dataDiskSize = valueDesktopGroupsDesktopGroup["DataDiskSize"].asString();
		if(!valueDesktopGroupsDesktopGroup["DesktopGroupId"].isNull())
			desktopGroupsObject.desktopGroupId = valueDesktopGroupsDesktopGroup["DesktopGroupId"].asString();
		if(!valueDesktopGroupsDesktopGroup["OfficeSiteName"].isNull())
			desktopGroupsObject.officeSiteName = valueDesktopGroupsDesktopGroup["OfficeSiteName"].asString();
		if(!valueDesktopGroupsDesktopGroup["DirectoryType"].isNull())
			desktopGroupsObject.directoryType = valueDesktopGroupsDesktopGroup["DirectoryType"].asString();
		if(!valueDesktopGroupsDesktopGroup["Cpu"].isNull())
			desktopGroupsObject.cpu = std::stoi(valueDesktopGroupsDesktopGroup["Cpu"].asString());
		if(!valueDesktopGroupsDesktopGroup["ExpiredTime"].isNull())
			desktopGroupsObject.expiredTime = valueDesktopGroupsDesktopGroup["ExpiredTime"].asString();
		if(!valueDesktopGroupsDesktopGroup["Comments"].isNull())
			desktopGroupsObject.comments = valueDesktopGroupsDesktopGroup["Comments"].asString();
		if(!valueDesktopGroupsDesktopGroup["OfficeSiteType"].isNull())
			desktopGroupsObject.officeSiteType = valueDesktopGroupsDesktopGroup["OfficeSiteType"].asString();
		if(!valueDesktopGroupsDesktopGroup["Status"].isNull())
			desktopGroupsObject.status = std::stoi(valueDesktopGroupsDesktopGroup["Status"].asString());
		if(!valueDesktopGroupsDesktopGroup["ResetType"].isNull())
			desktopGroupsObject.resetType = std::stol(valueDesktopGroupsDesktopGroup["ResetType"].asString());
		if(!valueDesktopGroupsDesktopGroup["LoadPolicy"].isNull())
			desktopGroupsObject.loadPolicy = std::stol(valueDesktopGroupsDesktopGroup["LoadPolicy"].asString());
		if(!valueDesktopGroupsDesktopGroup["BindAmount"].isNull())
			desktopGroupsObject.bindAmount = std::stol(valueDesktopGroupsDesktopGroup["BindAmount"].asString());
		if(!valueDesktopGroupsDesktopGroup["OwnType"].isNull())
			desktopGroupsObject.ownType = std::stol(valueDesktopGroupsDesktopGroup["OwnType"].asString());
		if(!valueDesktopGroupsDesktopGroup["ImageId"].isNull())
			desktopGroupsObject.imageId = valueDesktopGroupsDesktopGroup["ImageId"].asString();
		if(!valueDesktopGroupsDesktopGroup["VolumeEncryptionEnabled"].isNull())
			desktopGroupsObject.volumeEncryptionEnabled = valueDesktopGroupsDesktopGroup["VolumeEncryptionEnabled"].asString() == "true";
		if(!valueDesktopGroupsDesktopGroup["VolumeEncryptionKey"].isNull())
			desktopGroupsObject.volumeEncryptionKey = valueDesktopGroupsDesktopGroup["VolumeEncryptionKey"].asString();
		if(!valueDesktopGroupsDesktopGroup["RatioThreshold"].isNull())
			desktopGroupsObject.ratioThreshold = std::stof(valueDesktopGroupsDesktopGroup["RatioThreshold"].asString());
		if(!valueDesktopGroupsDesktopGroup["ConnectDuration"].isNull())
			desktopGroupsObject.connectDuration = std::stol(valueDesktopGroupsDesktopGroup["ConnectDuration"].asString());
		if(!valueDesktopGroupsDesktopGroup["IdleDisconnectDuration"].isNull())
			desktopGroupsObject.idleDisconnectDuration = std::stol(valueDesktopGroupsDesktopGroup["IdleDisconnectDuration"].asString());
		if(!valueDesktopGroupsDesktopGroup["Version"].isNull())
			desktopGroupsObject.version = std::stoi(valueDesktopGroupsDesktopGroup["Version"].asString());
		if(!valueDesktopGroupsDesktopGroup["StopDuration"].isNull())
			desktopGroupsObject.stopDuration = std::stol(valueDesktopGroupsDesktopGroup["StopDuration"].asString());
		if(!valueDesktopGroupsDesktopGroup["ProtocolType"].isNull())
			desktopGroupsObject.protocolType = valueDesktopGroupsDesktopGroup["ProtocolType"].asString();
		if(!valueDesktopGroupsDesktopGroup["OsType"].isNull())
			desktopGroupsObject.osType = valueDesktopGroupsDesktopGroup["OsType"].asString();
		if(!valueDesktopGroupsDesktopGroup["BuyDesktopsCount"].isNull())
			desktopGroupsObject.buyDesktopsCount = std::stoi(valueDesktopGroupsDesktopGroup["BuyDesktopsCount"].asString());
		desktopGroups_.push_back(desktopGroupsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<DescribeDesktopGroupsResult::DesktopGroup> DescribeDesktopGroupsResult::getDesktopGroups()const
{
	return desktopGroups_;
}

std::string DescribeDesktopGroupsResult::getNextToken()const
{
	return nextToken_;
}

