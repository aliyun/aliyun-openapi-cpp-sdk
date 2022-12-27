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

#include <alibabacloud/ens/model/DescribeNCInformationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeNCInformationResult::DescribeNCInformationResult() :
	ServiceResult()
{}

DescribeNCInformationResult::DescribeNCInformationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNCInformationResult::~DescribeNCInformationResult()
{}

void DescribeNCInformationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["Online"].isNull())
			dataObject.online = valueDatadataItem["Online"].asString() == "true";
		if(!valueDatadataItem["Region"].isNull())
			dataObject.region = valueDatadataItem["Region"].asString();
		if(!valueDatadataItem["Virtual"].isNull())
			dataObject._virtual = valueDatadataItem["Virtual"].asString();
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
		auto infoNode = value["Info"];
		if(!infoNode["Ip"].isNull())
			dataObject.info.ip = infoNode["Ip"].asString();
		if(!infoNode["Name"].isNull())
			dataObject.info.name = infoNode["Name"].asString();
		if(!infoNode["Uuid"].isNull())
			dataObject.info.uuid = infoNode["Uuid"].asString();
			auto allTag = infoNode["Tag"]["tags"];
			for (auto value : allTag)
				dataObject.info.tag.push_back(value.asString());
		data_.push_back(dataObject);
	}
	auto pagerNode = value["Pager"];
	if(!pagerNode["Page"].isNull())
		pager_.page = std::stol(pagerNode["Page"].asString());
	if(!pagerNode["Size"].isNull())
		pager_.size = std::stol(pagerNode["Size"].asString());
	if(!pagerNode["Total"].isNull())
		pager_.total = std::stol(pagerNode["Total"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Desc"].isNull())
		desc_ = value["Desc"].asString();

}

std::string DescribeNCInformationResult::getMsg()const
{
	return msg_;
}

std::string DescribeNCInformationResult::getDesc()const
{
	return desc_;
}

int DescribeNCInformationResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeNCInformationResult::getCurrentPage()const
{
	return currentPage_;
}

DescribeNCInformationResult::Pager DescribeNCInformationResult::getPager()const
{
	return pager_;
}

std::vector<DescribeNCInformationResult::DataItem> DescribeNCInformationResult::getData()const
{
	return data_;
}

