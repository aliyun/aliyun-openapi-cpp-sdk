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

#include <alibabacloud/ens/model/DescribeRegionResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeRegionResourceResult::DescribeRegionResourceResult() :
	ServiceResult()
{}

DescribeRegionResourceResult::DescribeRegionResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRegionResourceResult::~DescribeRegionResourceResult()
{}

void DescribeRegionResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["AreaCode"].isNull())
			dataObject.areaCode = valueDatadataItem["AreaCode"].asString();
		if(!valueDatadataItem["AreaName"].isNull())
			dataObject.areaName = valueDatadataItem["AreaName"].asString();
		if(!valueDatadataItem["CountryCode"].isNull())
			dataObject.countryCode = valueDatadataItem["CountryCode"].asString();
		if(!valueDatadataItem["CountryName"].isNull())
			dataObject.countryName = valueDatadataItem["CountryName"].asString();
		if(!valueDatadataItem["HouseId"].isNull())
			dataObject.houseId = valueDatadataItem["HouseId"].asString();
		if(!valueDatadataItem["Name"].isNull())
			dataObject.name = valueDatadataItem["Name"].asString();
		if(!valueDatadataItem["Poc"].isNull())
			dataObject.poc = valueDatadataItem["Poc"].asString() == "true";
		if(!valueDatadataItem["ProvinceCode"].isNull())
			dataObject.provinceCode = valueDatadataItem["ProvinceCode"].asString();
		if(!valueDatadataItem["ProvinceName"].isNull())
			dataObject.provinceName = valueDatadataItem["ProvinceName"].asString();
		if(!valueDatadataItem["ReserveDisable"].isNull())
			dataObject.reserveDisable = valueDatadataItem["ReserveDisable"].asString() == "true";
		if(!valueDatadataItem["StatusDisable"].isNull())
			dataObject.statusDisable = valueDatadataItem["StatusDisable"].asString() == "true";
		if(!valueDatadataItem["Type"].isNull())
			dataObject.type = valueDatadataItem["Type"].asString();
		if(!valueDatadataItem["Uuid"].isNull())
			dataObject.uuid = valueDatadataItem["Uuid"].asString();
		if(!valueDatadataItem["Virtual"].isNull())
			dataObject._virtual = valueDatadataItem["Virtual"].asString();
		auto allIpv4sNode = valueDatadataItem["Ipv4s"]["ipv4sItem"];
		for (auto valueDatadataItemIpv4sipv4sItem : allIpv4sNode)
		{
			DataItem::Ipv4sItem ipv4sObject;
			if(!valueDatadataItemIpv4sipv4sItem["Display"].isNull())
				ipv4sObject.display = valueDatadataItemIpv4sipv4sItem["Display"].asString();
			if(!valueDatadataItemIpv4sipv4sItem["Isp"].isNull())
				ipv4sObject.isp = valueDatadataItemIpv4sipv4sItem["Isp"].asString();
			if(!valueDatadataItemIpv4sipv4sItem["OversellRatio"].isNull())
				ipv4sObject.oversellRatio = std::stol(valueDatadataItemIpv4sipv4sItem["OversellRatio"].asString());
			if(!valueDatadataItemIpv4sipv4sItem["Remain"].isNull())
				ipv4sObject.remain = std::stol(valueDatadataItemIpv4sipv4sItem["Remain"].asString());
			if(!valueDatadataItemIpv4sipv4sItem["Reserved"].isNull())
				ipv4sObject.reserved = std::stol(valueDatadataItemIpv4sipv4sItem["Reserved"].asString());
			if(!valueDatadataItemIpv4sipv4sItem["ReserveDisable"].isNull())
				ipv4sObject.reserveDisable = valueDatadataItemIpv4sipv4sItem["ReserveDisable"].asString() == "true";
			if(!valueDatadataItemIpv4sipv4sItem["ReserveDisableTotal"].isNull())
				ipv4sObject.reserveDisableTotal = std::stol(valueDatadataItemIpv4sipv4sItem["ReserveDisableTotal"].asString());
			if(!valueDatadataItemIpv4sipv4sItem["StatusDisable"].isNull())
				ipv4sObject.statusDisable = valueDatadataItemIpv4sipv4sItem["StatusDisable"].asString() == "true";
			if(!valueDatadataItemIpv4sipv4sItem["StatusDisableTotal"].isNull())
				ipv4sObject.statusDisableTotal = std::stol(valueDatadataItemIpv4sipv4sItem["StatusDisableTotal"].asString());
			if(!valueDatadataItemIpv4sipv4sItem["Total"].isNull())
				ipv4sObject.total = std::stol(valueDatadataItemIpv4sipv4sItem["Total"].asString());
			if(!valueDatadataItemIpv4sipv4sItem["Type"].isNull())
				ipv4sObject.type = valueDatadataItemIpv4sipv4sItem["Type"].asString();
			if(!valueDatadataItemIpv4sipv4sItem["Used"].isNull())
				ipv4sObject.used = std::stol(valueDatadataItemIpv4sipv4sItem["Used"].asString());
			if(!valueDatadataItemIpv4sipv4sItem["UsedRatio"].isNull())
				ipv4sObject.usedRatio = std::stol(valueDatadataItemIpv4sipv4sItem["UsedRatio"].asString());
			if(!valueDatadataItemIpv4sipv4sItem["Vlan"].isNull())
				ipv4sObject.vlan = valueDatadataItemIpv4sipv4sItem["Vlan"].asString();
			dataObject.ipv4s.push_back(ipv4sObject);
		}
		auto allIpv6sNode = valueDatadataItem["Ipv6s"]["ipv6sItem"];
		for (auto valueDatadataItemIpv6sipv6sItem : allIpv6sNode)
		{
			DataItem::Ipv6sItem ipv6sObject;
			if(!valueDatadataItemIpv6sipv6sItem["Display"].isNull())
				ipv6sObject.display = valueDatadataItemIpv6sipv6sItem["Display"].asString();
			if(!valueDatadataItemIpv6sipv6sItem["Isp"].isNull())
				ipv6sObject.isp = valueDatadataItemIpv6sipv6sItem["Isp"].asString();
			if(!valueDatadataItemIpv6sipv6sItem["OversellRatio"].isNull())
				ipv6sObject.oversellRatio = std::stol(valueDatadataItemIpv6sipv6sItem["OversellRatio"].asString());
			if(!valueDatadataItemIpv6sipv6sItem["Remain"].isNull())
				ipv6sObject.remain = std::stol(valueDatadataItemIpv6sipv6sItem["Remain"].asString());
			if(!valueDatadataItemIpv6sipv6sItem["Reserved"].isNull())
				ipv6sObject.reserved = std::stol(valueDatadataItemIpv6sipv6sItem["Reserved"].asString());
			if(!valueDatadataItemIpv6sipv6sItem["ReserveDisable"].isNull())
				ipv6sObject.reserveDisable = valueDatadataItemIpv6sipv6sItem["ReserveDisable"].asString() == "true";
			if(!valueDatadataItemIpv6sipv6sItem["ReserveDisableTotal"].isNull())
				ipv6sObject.reserveDisableTotal = std::stol(valueDatadataItemIpv6sipv6sItem["ReserveDisableTotal"].asString());
			if(!valueDatadataItemIpv6sipv6sItem["StatusDisable"].isNull())
				ipv6sObject.statusDisable = valueDatadataItemIpv6sipv6sItem["StatusDisable"].asString() == "true";
			if(!valueDatadataItemIpv6sipv6sItem["StatusDisableTotal"].isNull())
				ipv6sObject.statusDisableTotal = std::stol(valueDatadataItemIpv6sipv6sItem["StatusDisableTotal"].asString());
			if(!valueDatadataItemIpv6sipv6sItem["Total"].isNull())
				ipv6sObject.total = std::stol(valueDatadataItemIpv6sipv6sItem["Total"].asString());
			if(!valueDatadataItemIpv6sipv6sItem["Type"].isNull())
				ipv6sObject.type = valueDatadataItemIpv6sipv6sItem["Type"].asString();
			if(!valueDatadataItemIpv6sipv6sItem["Used"].isNull())
				ipv6sObject.used = std::stol(valueDatadataItemIpv6sipv6sItem["Used"].asString());
			if(!valueDatadataItemIpv6sipv6sItem["UsedRatio"].isNull())
				ipv6sObject.usedRatio = std::stol(valueDatadataItemIpv6sipv6sItem["UsedRatio"].asString());
			if(!valueDatadataItemIpv6sipv6sItem["Vlan"].isNull())
				ipv6sObject.vlan = valueDatadataItemIpv6sipv6sItem["Vlan"].asString();
			dataObject.ipv6s.push_back(ipv6sObject);
		}
		auto armCardNode = value["ArmCard"];
		if(!armCardNode["Display"].isNull())
			dataObject.armCard.display = armCardNode["Display"].asString() == "true";
		if(!armCardNode["OversellRatio"].isNull())
			dataObject.armCard.oversellRatio = std::stol(armCardNode["OversellRatio"].asString());
		if(!armCardNode["Remain"].isNull())
			dataObject.armCard.remain = std::stol(armCardNode["Remain"].asString());
		if(!armCardNode["Reserved"].isNull())
			dataObject.armCard.reserved = std::stol(armCardNode["Reserved"].asString());
		if(!armCardNode["ReserveDisable"].isNull())
			dataObject.armCard.reserveDisable = armCardNode["ReserveDisable"].asString() == "true";
		if(!armCardNode["ReserveDisableTotal"].isNull())
			dataObject.armCard.reserveDisableTotal = std::stol(armCardNode["ReserveDisableTotal"].asString());
		if(!armCardNode["StatusDisable"].isNull())
			dataObject.armCard.statusDisable = armCardNode["StatusDisable"].asString() == "true";
		if(!armCardNode["StatusDisableTotal"].isNull())
			dataObject.armCard.statusDisableTotal = std::stol(armCardNode["StatusDisableTotal"].asString());
		if(!armCardNode["Total"].isNull())
			dataObject.armCard.total = std::stol(armCardNode["Total"].asString());
		if(!armCardNode["Type"].isNull())
			dataObject.armCard.type = armCardNode["Type"].asString();
		if(!armCardNode["Used"].isNull())
			dataObject.armCard.used = std::stol(armCardNode["Used"].asString());
		if(!armCardNode["UsedRatio"].isNull())
			dataObject.armCard.usedRatio = std::stol(armCardNode["UsedRatio"].asString());
		auto bandwidthNode = value["Bandwidth"];
		if(!bandwidthNode["Display"].isNull())
			dataObject.bandwidth.display = bandwidthNode["Display"].asString() == "true";
		if(!bandwidthNode["OversellRatio"].isNull())
			dataObject.bandwidth.oversellRatio = std::stol(bandwidthNode["OversellRatio"].asString());
		if(!bandwidthNode["Remain"].isNull())
			dataObject.bandwidth.remain = std::stol(bandwidthNode["Remain"].asString());
		if(!bandwidthNode["Reserved"].isNull())
			dataObject.bandwidth.reserved = std::stol(bandwidthNode["Reserved"].asString());
		if(!bandwidthNode["ReserveDisable"].isNull())
			dataObject.bandwidth.reserveDisable = bandwidthNode["ReserveDisable"].asString() == "true";
		if(!bandwidthNode["ReserveDisableTotal"].isNull())
			dataObject.bandwidth.reserveDisableTotal = std::stol(bandwidthNode["ReserveDisableTotal"].asString());
		if(!bandwidthNode["StatusDisable"].isNull())
			dataObject.bandwidth.statusDisable = bandwidthNode["StatusDisable"].asString() == "true";
		if(!bandwidthNode["StatusDisableTotal"].isNull())
			dataObject.bandwidth.statusDisableTotal = std::stol(bandwidthNode["StatusDisableTotal"].asString());
		if(!bandwidthNode["Total"].isNull())
			dataObject.bandwidth.total = std::stol(bandwidthNode["Total"].asString());
		if(!bandwidthNode["Type"].isNull())
			dataObject.bandwidth.type = bandwidthNode["Type"].asString();
		if(!bandwidthNode["Used"].isNull())
			dataObject.bandwidth.used = std::stol(bandwidthNode["Used"].asString());
		if(!bandwidthNode["UsedRatio"].isNull())
			dataObject.bandwidth.usedRatio = std::stol(bandwidthNode["UsedRatio"].asString());
		auto blockStorageNode = value["BlockStorage"];
		if(!blockStorageNode["Display"].isNull())
			dataObject.blockStorage.display = blockStorageNode["Display"].asString() == "true";
		if(!blockStorageNode["OversellRatio"].isNull())
			dataObject.blockStorage.oversellRatio = std::stol(blockStorageNode["OversellRatio"].asString());
		if(!blockStorageNode["Remain"].isNull())
			dataObject.blockStorage.remain = std::stol(blockStorageNode["Remain"].asString());
		if(!blockStorageNode["Reserved"].isNull())
			dataObject.blockStorage.reserved = std::stol(blockStorageNode["Reserved"].asString());
		if(!blockStorageNode["ReserveDisable"].isNull())
			dataObject.blockStorage.reserveDisable = blockStorageNode["ReserveDisable"].asString() == "true";
		if(!blockStorageNode["ReserveDisableTotal"].isNull())
			dataObject.blockStorage.reserveDisableTotal = std::stol(blockStorageNode["ReserveDisableTotal"].asString());
		if(!blockStorageNode["StatusDisable"].isNull())
			dataObject.blockStorage.statusDisable = blockStorageNode["StatusDisable"].asString() == "true";
		if(!blockStorageNode["StatusDisableTotal"].isNull())
			dataObject.blockStorage.statusDisableTotal = std::stol(blockStorageNode["StatusDisableTotal"].asString());
		if(!blockStorageNode["Total"].isNull())
			dataObject.blockStorage.total = std::stol(blockStorageNode["Total"].asString());
		if(!blockStorageNode["Type"].isNull())
			dataObject.blockStorage.type = blockStorageNode["Type"].asString();
		if(!blockStorageNode["Used"].isNull())
			dataObject.blockStorage.used = std::stol(blockStorageNode["Used"].asString());
		if(!blockStorageNode["UsedRatio"].isNull())
			dataObject.blockStorage.usedRatio = std::stol(blockStorageNode["UsedRatio"].asString());
		auto cpuNode = value["Cpu"];
		if(!cpuNode["Display"].isNull())
			dataObject.cpu.display = cpuNode["Display"].asString() == "true";
		if(!cpuNode["OversellRatio"].isNull())
			dataObject.cpu.oversellRatio = std::stol(cpuNode["OversellRatio"].asString());
		if(!cpuNode["Remain"].isNull())
			dataObject.cpu.remain = std::stol(cpuNode["Remain"].asString());
		if(!cpuNode["Reserved"].isNull())
			dataObject.cpu.reserved = std::stol(cpuNode["Reserved"].asString());
		if(!cpuNode["ReserveDisable"].isNull())
			dataObject.cpu.reserveDisable = cpuNode["ReserveDisable"].asString() == "true";
		if(!cpuNode["ReserveDisableTotal"].isNull())
			dataObject.cpu.reserveDisableTotal = std::stol(cpuNode["ReserveDisableTotal"].asString());
		if(!cpuNode["StatusDisable"].isNull())
			dataObject.cpu.statusDisable = cpuNode["StatusDisable"].asString() == "true";
		if(!cpuNode["StatusDisableTotal"].isNull())
			dataObject.cpu.statusDisableTotal = std::stol(cpuNode["StatusDisableTotal"].asString());
		if(!cpuNode["Total"].isNull())
			dataObject.cpu.total = std::stol(cpuNode["Total"].asString());
		if(!cpuNode["Type"].isNull())
			dataObject.cpu.type = cpuNode["Type"].asString();
		if(!cpuNode["Used"].isNull())
			dataObject.cpu.used = std::stol(cpuNode["Used"].asString());
		if(!cpuNode["UsedRatio"].isNull())
			dataObject.cpu.usedRatio = std::stol(cpuNode["UsedRatio"].asString());
		auto memoryNode = value["Memory"];
		if(!memoryNode["Display"].isNull())
			dataObject.memory.display = memoryNode["Display"].asString() == "true";
		if(!memoryNode["OversellRatio"].isNull())
			dataObject.memory.oversellRatio = std::stol(memoryNode["OversellRatio"].asString());
		if(!memoryNode["Remain"].isNull())
			dataObject.memory.remain = std::stol(memoryNode["Remain"].asString());
		if(!memoryNode["Reserved"].isNull())
			dataObject.memory.reserved = std::stol(memoryNode["Reserved"].asString());
		if(!memoryNode["ReserveDisable"].isNull())
			dataObject.memory.reserveDisable = memoryNode["ReserveDisable"].asString() == "true";
		if(!memoryNode["ReserveDisableTotal"].isNull())
			dataObject.memory.reserveDisableTotal = std::stol(memoryNode["ReserveDisableTotal"].asString());
		if(!memoryNode["StatusDisable"].isNull())
			dataObject.memory.statusDisable = memoryNode["StatusDisable"].asString() == "true";
		if(!memoryNode["StatusDisableTotal"].isNull())
			dataObject.memory.statusDisableTotal = std::stol(memoryNode["StatusDisableTotal"].asString());
		if(!memoryNode["Total"].isNull())
			dataObject.memory.total = std::stol(memoryNode["Total"].asString());
		if(!memoryNode["Type"].isNull())
			dataObject.memory.type = memoryNode["Type"].asString();
		if(!memoryNode["Used"].isNull())
			dataObject.memory.used = std::stol(memoryNode["Used"].asString());
		if(!memoryNode["UsedRatio"].isNull())
			dataObject.memory.usedRatio = std::stol(memoryNode["UsedRatio"].asString());
		auto gpuNode = value["Gpu"];
		if(!gpuNode["Display"].isNull())
			dataObject.gpu.display = gpuNode["Display"].asString() == "true";
		if(!gpuNode["OversellRatio"].isNull())
			dataObject.gpu.oversellRatio = std::stol(gpuNode["OversellRatio"].asString());
		if(!gpuNode["Remain"].isNull())
			dataObject.gpu.remain = std::stol(gpuNode["Remain"].asString());
		if(!gpuNode["Reserved"].isNull())
			dataObject.gpu.reserved = std::stol(gpuNode["Reserved"].asString());
		if(!gpuNode["ReserveDisable"].isNull())
			dataObject.gpu.reserveDisable = gpuNode["ReserveDisable"].asString() == "true";
		if(!gpuNode["ReserveDisableTotal"].isNull())
			dataObject.gpu.reserveDisableTotal = std::stol(gpuNode["ReserveDisableTotal"].asString());
		if(!gpuNode["StatusDisable"].isNull())
			dataObject.gpu.statusDisable = gpuNode["StatusDisable"].asString() == "true";
		if(!gpuNode["StatusDisableTotal"].isNull())
			dataObject.gpu.statusDisableTotal = std::stol(gpuNode["StatusDisableTotal"].asString());
		if(!gpuNode["Total"].isNull())
			dataObject.gpu.total = std::stol(gpuNode["Total"].asString());
		if(!gpuNode["Type"].isNull())
			dataObject.gpu.type = gpuNode["Type"].asString();
		if(!gpuNode["Used"].isNull())
			dataObject.gpu.used = std::stol(gpuNode["Used"].asString());
		if(!gpuNode["UsedRatio"].isNull())
			dataObject.gpu.usedRatio = std::stol(gpuNode["UsedRatio"].asString());
		auto hddNode = value["Hdd"];
		if(!hddNode["Display"].isNull())
			dataObject.hdd.display = hddNode["Display"].asString() == "true";
		if(!hddNode["OversellRatio"].isNull())
			dataObject.hdd.oversellRatio = std::stol(hddNode["OversellRatio"].asString());
		if(!hddNode["Remain"].isNull())
			dataObject.hdd.remain = std::stol(hddNode["Remain"].asString());
		if(!hddNode["Reserved"].isNull())
			dataObject.hdd.reserved = std::stol(hddNode["Reserved"].asString());
		if(!hddNode["ReserveDisable"].isNull())
			dataObject.hdd.reserveDisable = hddNode["ReserveDisable"].asString() == "true";
		if(!hddNode["ReserveDisableTotal"].isNull())
			dataObject.hdd.reserveDisableTotal = std::stol(hddNode["ReserveDisableTotal"].asString());
		if(!hddNode["StatusDisable"].isNull())
			dataObject.hdd.statusDisable = hddNode["StatusDisable"].asString() == "true";
		if(!hddNode["StatusDisableTotal"].isNull())
			dataObject.hdd.statusDisableTotal = std::stol(hddNode["StatusDisableTotal"].asString());
		if(!hddNode["Total"].isNull())
			dataObject.hdd.total = std::stol(hddNode["Total"].asString());
		if(!hddNode["Type"].isNull())
			dataObject.hdd.type = hddNode["Type"].asString();
		if(!hddNode["Used"].isNull())
			dataObject.hdd.used = std::stol(hddNode["Used"].asString());
		if(!hddNode["UsedRatio"].isNull())
			dataObject.hdd.usedRatio = std::stol(hddNode["UsedRatio"].asString());
		auto ssdNode = value["Ssd"];
		if(!ssdNode["Display"].isNull())
			dataObject.ssd.display = ssdNode["Display"].asString() == "true";
		if(!ssdNode["OversellRatio"].isNull())
			dataObject.ssd.oversellRatio = std::stol(ssdNode["OversellRatio"].asString());
		if(!ssdNode["Remain"].isNull())
			dataObject.ssd.remain = std::stol(ssdNode["Remain"].asString());
		if(!ssdNode["Reserved"].isNull())
			dataObject.ssd.reserved = std::stol(ssdNode["Reserved"].asString());
		if(!ssdNode["ReserveDisable"].isNull())
			dataObject.ssd.reserveDisable = ssdNode["ReserveDisable"].asString() == "true";
		if(!ssdNode["ReserveDisableTotal"].isNull())
			dataObject.ssd.reserveDisableTotal = std::stol(ssdNode["ReserveDisableTotal"].asString());
		if(!ssdNode["StatusDisable"].isNull())
			dataObject.ssd.statusDisable = ssdNode["StatusDisable"].asString() == "true";
		if(!ssdNode["StatusDisableTotal"].isNull())
			dataObject.ssd.statusDisableTotal = std::stol(ssdNode["StatusDisableTotal"].asString());
		if(!ssdNode["Total"].isNull())
			dataObject.ssd.total = std::stol(ssdNode["Total"].asString());
		if(!ssdNode["Type"].isNull())
			dataObject.ssd.type = ssdNode["Type"].asString();
		if(!ssdNode["Used"].isNull())
			dataObject.ssd.used = std::stol(ssdNode["Used"].asString());
		if(!ssdNode["UsedRatio"].isNull())
			dataObject.ssd.usedRatio = std::stol(ssdNode["UsedRatio"].asString());
		auto nvmeNode = value["Nvme"];
		if(!nvmeNode["Display"].isNull())
			dataObject.nvme.display = nvmeNode["Display"].asString() == "true";
		if(!nvmeNode["OversellRatio"].isNull())
			dataObject.nvme.oversellRatio = std::stol(nvmeNode["OversellRatio"].asString());
		if(!nvmeNode["Remain"].isNull())
			dataObject.nvme.remain = std::stol(nvmeNode["Remain"].asString());
		if(!nvmeNode["Reserved"].isNull())
			dataObject.nvme.reserved = std::stol(nvmeNode["Reserved"].asString());
		if(!nvmeNode["ReserveDisable"].isNull())
			dataObject.nvme.reserveDisable = nvmeNode["ReserveDisable"].asString() == "true";
		if(!nvmeNode["ReserveDisableTotal"].isNull())
			dataObject.nvme.reserveDisableTotal = std::stol(nvmeNode["ReserveDisableTotal"].asString());
		if(!nvmeNode["StatusDisable"].isNull())
			dataObject.nvme.statusDisable = nvmeNode["StatusDisable"].asString() == "true";
		if(!nvmeNode["StatusDisableTotal"].isNull())
			dataObject.nvme.statusDisableTotal = std::stol(nvmeNode["StatusDisableTotal"].asString());
		if(!nvmeNode["Total"].isNull())
			dataObject.nvme.total = std::stol(nvmeNode["Total"].asString());
		if(!nvmeNode["Type"].isNull())
			dataObject.nvme.type = nvmeNode["Type"].asString();
		if(!nvmeNode["Used"].isNull())
			dataObject.nvme.used = std::stol(nvmeNode["Used"].asString());
		if(!nvmeNode["UsedRatio"].isNull())
			dataObject.nvme.usedRatio = std::stol(nvmeNode["UsedRatio"].asString());
		auto ossStorageNode = value["OssStorage"];
		if(!ossStorageNode["Display"].isNull())
			dataObject.ossStorage.display = ossStorageNode["Display"].asString() == "true";
		if(!ossStorageNode["OversellRatio"].isNull())
			dataObject.ossStorage.oversellRatio = std::stol(ossStorageNode["OversellRatio"].asString());
		if(!ossStorageNode["Remain"].isNull())
			dataObject.ossStorage.remain = std::stol(ossStorageNode["Remain"].asString());
		if(!ossStorageNode["Reserved"].isNull())
			dataObject.ossStorage.reserved = std::stol(ossStorageNode["Reserved"].asString());
		if(!ossStorageNode["ReserveDisable"].isNull())
			dataObject.ossStorage.reserveDisable = ossStorageNode["ReserveDisable"].asString() == "true";
		if(!ossStorageNode["ReserveDisableTotal"].isNull())
			dataObject.ossStorage.reserveDisableTotal = std::stol(ossStorageNode["ReserveDisableTotal"].asString());
		if(!ossStorageNode["StatusDisable"].isNull())
			dataObject.ossStorage.statusDisable = ossStorageNode["StatusDisable"].asString() == "true";
		if(!ossStorageNode["StatusDisableTotal"].isNull())
			dataObject.ossStorage.statusDisableTotal = std::stol(ossStorageNode["StatusDisableTotal"].asString());
		if(!ossStorageNode["Total"].isNull())
			dataObject.ossStorage.total = std::stol(ossStorageNode["Total"].asString());
		if(!ossStorageNode["Type"].isNull())
			dataObject.ossStorage.type = ossStorageNode["Type"].asString();
		if(!ossStorageNode["Used"].isNull())
			dataObject.ossStorage.used = std::stol(ossStorageNode["Used"].asString());
		if(!ossStorageNode["UsedRatio"].isNull())
			dataObject.ossStorage.usedRatio = std::stol(ossStorageNode["UsedRatio"].asString());
		auto panguNode = value["Pangu"];
		if(!panguNode["Display"].isNull())
			dataObject.pangu.display = panguNode["Display"].asString() == "true";
		if(!panguNode["OversellRatio"].isNull())
			dataObject.pangu.oversellRatio = std::stol(panguNode["OversellRatio"].asString());
		if(!panguNode["Remain"].isNull())
			dataObject.pangu.remain = std::stol(panguNode["Remain"].asString());
		if(!panguNode["Reserved"].isNull())
			dataObject.pangu.reserved = std::stol(panguNode["Reserved"].asString());
		if(!panguNode["ReserveDisable"].isNull())
			dataObject.pangu.reserveDisable = panguNode["ReserveDisable"].asString() == "true";
		if(!panguNode["ReserveDisableTotal"].isNull())
			dataObject.pangu.reserveDisableTotal = std::stol(panguNode["ReserveDisableTotal"].asString());
		if(!panguNode["StatusDisable"].isNull())
			dataObject.pangu.statusDisable = panguNode["StatusDisable"].asString() == "true";
		if(!panguNode["StatusDisableTotal"].isNull())
			dataObject.pangu.statusDisableTotal = std::stol(panguNode["StatusDisableTotal"].asString());
		if(!panguNode["Total"].isNull())
			dataObject.pangu.total = std::stol(panguNode["Total"].asString());
		if(!panguNode["Type"].isNull())
			dataObject.pangu.type = panguNode["Type"].asString();
		if(!panguNode["Used"].isNull())
			dataObject.pangu.used = std::stol(panguNode["Used"].asString());
		if(!panguNode["UsedRatio"].isNull())
			dataObject.pangu.usedRatio = std::stol(panguNode["UsedRatio"].asString());
		auto pcfarmNumNode = value["PcfarmNum"];
		if(!pcfarmNumNode["Display"].isNull())
			dataObject.pcfarmNum.display = pcfarmNumNode["Display"].asString() == "true";
		if(!pcfarmNumNode["OversellRatio"].isNull())
			dataObject.pcfarmNum.oversellRatio = std::stol(pcfarmNumNode["OversellRatio"].asString());
		if(!pcfarmNumNode["Remain"].isNull())
			dataObject.pcfarmNum.remain = std::stol(pcfarmNumNode["Remain"].asString());
		if(!pcfarmNumNode["Reserved"].isNull())
			dataObject.pcfarmNum.reserved = std::stol(pcfarmNumNode["Reserved"].asString());
		if(!pcfarmNumNode["ReserveDisable"].isNull())
			dataObject.pcfarmNum.reserveDisable = pcfarmNumNode["ReserveDisable"].asString() == "true";
		if(!pcfarmNumNode["ReserveDisableTotal"].isNull())
			dataObject.pcfarmNum.reserveDisableTotal = std::stol(pcfarmNumNode["ReserveDisableTotal"].asString());
		if(!pcfarmNumNode["StatusDisable"].isNull())
			dataObject.pcfarmNum.statusDisable = pcfarmNumNode["StatusDisable"].asString() == "true";
		if(!pcfarmNumNode["StatusDisableTotal"].isNull())
			dataObject.pcfarmNum.statusDisableTotal = std::stol(pcfarmNumNode["StatusDisableTotal"].asString());
		if(!pcfarmNumNode["Total"].isNull())
			dataObject.pcfarmNum.total = std::stol(pcfarmNumNode["Total"].asString());
		if(!pcfarmNumNode["Type"].isNull())
			dataObject.pcfarmNum.type = pcfarmNumNode["Type"].asString();
		if(!pcfarmNumNode["Used"].isNull())
			dataObject.pcfarmNum.used = std::stol(pcfarmNumNode["Used"].asString());
		if(!pcfarmNumNode["UsedRatio"].isNull())
			dataObject.pcfarmNum.usedRatio = std::stol(pcfarmNumNode["UsedRatio"].asString());
		auto allAttributes = value["Attributes"]["attributes"];
		for (auto value : allAttributes)
			dataObject.attributes.push_back(value.asString());
		auto allIspTypes = value["IspTypes"]["ispTypes"];
		for (auto value : allIspTypes)
			dataObject.ispTypes.push_back(value.asString());
		data_.push_back(dataObject);
	}
	auto pagerNode = value["Pager"];
	if(!pagerNode["Page"].isNull())
		pager_.page = std::stol(pagerNode["Page"].asString());
	if(!pagerNode["Size"].isNull())
		pager_.size = std::stol(pagerNode["Size"].asString());
	if(!pagerNode["Total"].isNull())
		pager_.total = std::stol(pagerNode["Total"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Desc"].isNull())
		desc_ = value["Desc"].asString();

}

std::string DescribeRegionResourceResult::getMsg()const
{
	return msg_;
}

std::string DescribeRegionResourceResult::getDesc()const
{
	return desc_;
}

DescribeRegionResourceResult::Pager DescribeRegionResourceResult::getPager()const
{
	return pager_;
}

std::vector<DescribeRegionResourceResult::DataItem> DescribeRegionResourceResult::getData()const
{
	return data_;
}

