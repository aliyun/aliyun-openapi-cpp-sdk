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

#include <alibabacloud/teslamaxcompute/model/GetQuotaHistoryInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::TeslaMaxCompute;
using namespace AlibabaCloud::TeslaMaxCompute::Model;

GetQuotaHistoryInfoResult::GetQuotaHistoryInfoResult() :
	ServiceResult()
{}

GetQuotaHistoryInfoResult::GetQuotaHistoryInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQuotaHistoryInfoResult::~GetQuotaHistoryInfoResult()
{}

void GetQuotaHistoryInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Times"].isNull())
			dataObject.times = std::stoi(valueDataDataItem["Times"].asString());
		auto pointNode = value["Point"];
		auto cpuMaxQuotaNode = pointNode["CpuMaxQuota"];
		if(!cpuMaxQuotaNode["Min"].isNull())
			dataObject.point.cpuMaxQuota.min = std::stof(cpuMaxQuotaNode["Min"].asString());
		if(!cpuMaxQuotaNode["Max"].isNull())
			dataObject.point.cpuMaxQuota.max = std::stof(cpuMaxQuotaNode["Max"].asString());
		if(!cpuMaxQuotaNode["Avg"].isNull())
			dataObject.point.cpuMaxQuota.avg = std::stof(cpuMaxQuotaNode["Avg"].asString());
		auto cpuMinQuotaNode = pointNode["CpuMinQuota"];
		if(!cpuMinQuotaNode["Min"].isNull())
			dataObject.point.cpuMinQuota.min = std::stof(cpuMinQuotaNode["Min"].asString());
		if(!cpuMinQuotaNode["Max"].isNull())
			dataObject.point.cpuMinQuota.max = std::stof(cpuMinQuotaNode["Max"].asString());
		if(!cpuMinQuotaNode["Avg"].isNull())
			dataObject.point.cpuMinQuota.avg = std::stof(cpuMinQuotaNode["Avg"].asString());
		auto memUsedNode = pointNode["MemUsed"];
		if(!memUsedNode["Min"].isNull())
			dataObject.point.memUsed.min = std::stof(memUsedNode["Min"].asString());
		if(!memUsedNode["Max"].isNull())
			dataObject.point.memUsed.max = std::stof(memUsedNode["Max"].asString());
		if(!memUsedNode["Avg"].isNull())
			dataObject.point.memUsed.avg = std::stof(memUsedNode["Avg"].asString());
		auto cpuUsedNode = pointNode["CpuUsed"];
		if(!cpuUsedNode["Min"].isNull())
			dataObject.point.cpuUsed.min = std::stof(cpuUsedNode["Min"].asString());
		if(!cpuUsedNode["Max"].isNull())
			dataObject.point.cpuUsed.max = std::stof(cpuUsedNode["Max"].asString());
		if(!cpuUsedNode["Avg"].isNull())
			dataObject.point.cpuUsed.avg = std::stof(cpuUsedNode["Avg"].asString());
		auto memMaxQuotaNode = pointNode["MemMaxQuota"];
		if(!memMaxQuotaNode["Min"].isNull())
			dataObject.point.memMaxQuota.min = std::stof(memMaxQuotaNode["Min"].asString());
		if(!memMaxQuotaNode["Max"].isNull())
			dataObject.point.memMaxQuota.max = std::stof(memMaxQuotaNode["Max"].asString());
		if(!memMaxQuotaNode["Avg"].isNull())
			dataObject.point.memMaxQuota.avg = std::stof(memMaxQuotaNode["Avg"].asString());
		auto memMinQuotaNode = pointNode["MemMinQuota"];
		if(!memMinQuotaNode["Min"].isNull())
			dataObject.point.memMinQuota.min = std::stof(memMinQuotaNode["Min"].asString());
		if(!memMinQuotaNode["Max"].isNull())
			dataObject.point.memMinQuota.max = std::stof(memMinQuotaNode["Max"].asString());
		if(!memMinQuotaNode["Avg"].isNull())
			dataObject.point.memMinQuota.avg = std::stof(memMinQuotaNode["Avg"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetQuotaHistoryInfoResult::getMessage()const
{
	return message_;
}

std::vector<GetQuotaHistoryInfoResult::DataItem> GetQuotaHistoryInfoResult::getData()const
{
	return data_;
}

int GetQuotaHistoryInfoResult::getCode()const
{
	return code_;
}

