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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allHostList = value["HostList"]["Host"];
	for (auto value : allHostList)
	{
		Host hostListObject;
		if(!value["HostName"].isNull())
			hostListObject.hostName = value["HostName"].asString();
		if(!value["PublicIp"].isNull())
			hostListObject.publicIp = value["PublicIp"].asString();
		if(!value["PrivateIp"].isNull())
			hostListObject.privateIp = value["PrivateIp"].asString();
		if(!value["Role"].isNull())
			hostListObject.role = value["Role"].asString();
		if(!value["ZoneId"].isNull())
			hostListObject.zoneId = value["ZoneId"].asString();
		if(!value["InstanceType"].isNull())
			hostListObject.instanceType = value["InstanceType"].asString();
		if(!value["Cpu"].isNull())
			hostListObject.cpu = std::stoi(value["Cpu"].asString());
		if(!value["Memory"].isNull())
			hostListObject.memory = std::stoi(value["Memory"].asString());
		if(!value["Status"].isNull())
			hostListObject.status = value["Status"].asString();
		if(!value["InstanceStatus"].isNull())
			hostListObject.instanceStatus = value["InstanceStatus"].asString();
		if(!value["Type"].isNull())
			hostListObject.type = value["Type"].asString();
		if(!value["HostInstanceId"].isNull())
			hostListObject.hostInstanceId = value["HostInstanceId"].asString();
		if(!value["SerialNumber"].isNull())
			hostListObject.serialNumber = value["SerialNumber"].asString();
		if(!value["ChargeType"].isNull())
			hostListObject.chargeType = value["ChargeType"].asString();
		if(!value["ExpiredTime"].isNull())
			hostListObject.expiredTime = std::stol(value["ExpiredTime"].asString());
		if(!value["HostGroupId"].isNull())
			hostListObject.hostGroupId = value["HostGroupId"].asString();
		if(!value["CreateTime"].isNull())
			hostListObject.createTime = value["CreateTime"].asString();
		if(!value["EmrExpiredTime"].isNull())
			hostListObject.emrExpiredTime = value["EmrExpiredTime"].asString();
		if(!value["SupportIpV6"].isNull())
			hostListObject.supportIpV6 = value["SupportIpV6"].asString() == "true";
		auto allDiskList = value["DiskList"]["Disk"];
		for (auto value : allDiskList)
		{
			Host::Disk diskListObject;
			if(!value["DiskId"].isNull())
				diskListObject.diskId = value["DiskId"].asString();
			if(!value["Type"].isNull())
				diskListObject.type = value["Type"].asString();
			if(!value["Device"].isNull())
				diskListObject.device = value["Device"].asString();
			if(!value["DiskType"].isNull())
				diskListObject.diskType = value["DiskType"].asString();
			if(!value["DiskSize"].isNull())
				diskListObject.diskSize = std::stoi(value["DiskSize"].asString());
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

