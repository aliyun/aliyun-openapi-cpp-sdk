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

#include <alibabacloud/emr/model/ListClusterHostResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterHostResult::ListClusterHostResult() :
	ServiceResult()
{}

ListClusterHostResult::ListClusterHostResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterHostResult::~ListClusterHostResult()
{}

void ListClusterHostResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHostListNode = value["HostList"]["Host"];
	for (auto valueHostListHost : allHostListNode)
	{
		Host hostListObject;
		if(!valueHostListHost["HostName"].isNull())
			hostListObject.hostName = valueHostListHost["HostName"].asString();
		if(!valueHostListHost["PublicIp"].isNull())
			hostListObject.publicIp = valueHostListHost["PublicIp"].asString();
		if(!valueHostListHost["PrivateIp"].isNull())
			hostListObject.privateIp = valueHostListHost["PrivateIp"].asString();
		if(!valueHostListHost["Role"].isNull())
			hostListObject.role = valueHostListHost["Role"].asString();
		if(!valueHostListHost["ZoneId"].isNull())
			hostListObject.zoneId = valueHostListHost["ZoneId"].asString();
		if(!valueHostListHost["InstanceType"].isNull())
			hostListObject.instanceType = valueHostListHost["InstanceType"].asString();
		if(!valueHostListHost["Cpu"].isNull())
			hostListObject.cpu = std::stoi(valueHostListHost["Cpu"].asString());
		if(!valueHostListHost["Memory"].isNull())
			hostListObject.memory = std::stoi(valueHostListHost["Memory"].asString());
		if(!valueHostListHost["Status"].isNull())
			hostListObject.status = valueHostListHost["Status"].asString();
		if(!valueHostListHost["InstanceStatus"].isNull())
			hostListObject.instanceStatus = valueHostListHost["InstanceStatus"].asString();
		if(!valueHostListHost["Type"].isNull())
			hostListObject.type = valueHostListHost["Type"].asString();
		if(!valueHostListHost["HostInstanceId"].isNull())
			hostListObject.hostInstanceId = valueHostListHost["HostInstanceId"].asString();
		if(!valueHostListHost["SerialNumber"].isNull())
			hostListObject.serialNumber = valueHostListHost["SerialNumber"].asString();
		if(!valueHostListHost["ChargeType"].isNull())
			hostListObject.chargeType = valueHostListHost["ChargeType"].asString();
		if(!valueHostListHost["ExpiredTime"].isNull())
			hostListObject.expiredTime = std::stol(valueHostListHost["ExpiredTime"].asString());
		if(!valueHostListHost["HostGroupId"].isNull())
			hostListObject.hostGroupId = valueHostListHost["HostGroupId"].asString();
		if(!valueHostListHost["CreateTime"].isNull())
			hostListObject.createTime = valueHostListHost["CreateTime"].asString();
		if(!valueHostListHost["EmrExpiredTime"].isNull())
			hostListObject.emrExpiredTime = valueHostListHost["EmrExpiredTime"].asString();
		if(!valueHostListHost["SupportIpV6"].isNull())
			hostListObject.supportIpV6 = valueHostListHost["SupportIpV6"].asString() == "true";
		auto allDiskListNode = valueHostListHost["DiskList"]["Disk"];
		for (auto valueHostListHostDiskListDisk : allDiskListNode)
		{
			Host::Disk diskListObject;
			if(!valueHostListHostDiskListDisk["DiskId"].isNull())
				diskListObject.diskId = valueHostListHostDiskListDisk["DiskId"].asString();
			if(!valueHostListHostDiskListDisk["Type"].isNull())
				diskListObject.type = valueHostListHostDiskListDisk["Type"].asString();
			if(!valueHostListHostDiskListDisk["Device"].isNull())
				diskListObject.device = valueHostListHostDiskListDisk["Device"].asString();
			if(!valueHostListHostDiskListDisk["DiskType"].isNull())
				diskListObject.diskType = valueHostListHostDiskListDisk["DiskType"].asString();
			if(!valueHostListHostDiskListDisk["DiskSize"].isNull())
				diskListObject.diskSize = std::stoi(valueHostListHostDiskListDisk["DiskSize"].asString());
			if(!valueHostListHostDiskListDisk["BlockMountPoint"].isNull())
				diskListObject.blockMountPoint = valueHostListHostDiskListDisk["BlockMountPoint"].asString();
			if(!valueHostListHostDiskListDisk["DiskMountPoint"].isNull())
				diskListObject.diskMountPoint = valueHostListHostDiskListDisk["DiskMountPoint"].asString();
			if(!valueHostListHostDiskListDisk["Event"].isNull())
				diskListObject.event = valueHostListHostDiskListDisk["Event"].asString();
			hostListObject.diskList.push_back(diskListObject);
		}
		hostList_.push_back(hostListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListClusterHostResult::getPageSize()const
{
	return pageSize_;
}

int ListClusterHostResult::getPageNumber()const
{
	return pageNumber_;
}

int ListClusterHostResult::getTotal()const
{
	return total_;
}

std::vector<ListClusterHostResult::Host> ListClusterHostResult::getHostList()const
{
	return hostList_;
}

