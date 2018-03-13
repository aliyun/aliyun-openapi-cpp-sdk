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
	auto allData = value["Data"]["DataItem"];
	for (auto value : allData)
	{
		DataItem dataObject;
		if(!value["Times"].isNull())
			dataObject.times = std::stoi(value["Times"].asString());
		auto allPoint = value["Point"];
		for (auto value : allPoint)
		{
			DataItem::Point pointObject;
			auto allCpuMaxQuota = value["CpuMaxQuota"];
			for (auto value : allCpuMaxQuota)
			{
				DataItem::Point::CpuMaxQuota cpuMaxQuotaObject;
				if(!value["Min"].isNull())
					cpuMaxQuotaObject.min = std::stof(value["Min"].asString());
				if(!value["Max"].isNull())
					cpuMaxQuotaObject.max = std::stof(value["Max"].asString());
				if(!value["Avg"].isNull())
					cpuMaxQuotaObject.avg = std::stof(value["Avg"].asString());
				pointObject.cpuMaxQuota.push_back(cpuMaxQuotaObject);
			}
			auto allCpuMinQuota = value["CpuMinQuota"];
			for (auto value : allCpuMinQuota)
			{
				DataItem::Point::CpuMinQuota cpuMinQuotaObject;
				if(!value["Min"].isNull())
					cpuMinQuotaObject.min = std::stof(value["Min"].asString());
				if(!value["Max"].isNull())
					cpuMinQuotaObject.max = std::stof(value["Max"].asString());
				if(!value["Avg"].isNull())
					cpuMinQuotaObject.avg = std::stof(value["Avg"].asString());
				pointObject.cpuMinQuota.push_back(cpuMinQuotaObject);
			}
			auto allMemUsed = value["MemUsed"];
			for (auto value : allMemUsed)
			{
				DataItem::Point::MemUsed memUsedObject;
				if(!value["Min"].isNull())
					memUsedObject.min = std::stof(value["Min"].asString());
				if(!value["Max"].isNull())
					memUsedObject.max = std::stof(value["Max"].asString());
				if(!value["Avg"].isNull())
					memUsedObject.avg = std::stof(value["Avg"].asString());
				pointObject.memUsed.push_back(memUsedObject);
			}
			auto allCpuUsed = value["CpuUsed"];
			for (auto value : allCpuUsed)
			{
				DataItem::Point::CpuUsed cpuUsedObject;
				if(!value["Min"].isNull())
					cpuUsedObject.min = std::stof(value["Min"].asString());
				if(!value["Max"].isNull())
					cpuUsedObject.max = std::stof(value["Max"].asString());
				if(!value["Avg"].isNull())
					cpuUsedObject.avg = std::stof(value["Avg"].asString());
				pointObject.cpuUsed.push_back(cpuUsedObject);
			}
			auto allMemMaxQuota = value["MemMaxQuota"];
			for (auto value : allMemMaxQuota)
			{
				DataItem::Point::MemMaxQuota memMaxQuotaObject;
				if(!value["Min"].isNull())
					memMaxQuotaObject.min = std::stof(value["Min"].asString());
				if(!value["Max"].isNull())
					memMaxQuotaObject.max = std::stof(value["Max"].asString());
				if(!value["Avg"].isNull())
					memMaxQuotaObject.avg = std::stof(value["Avg"].asString());
				pointObject.memMaxQuota.push_back(memMaxQuotaObject);
			}
			auto allMemMinQuota = value["MemMinQuota"];
			for (auto value : allMemMinQuota)
			{
				DataItem::Point::MemMinQuota memMinQuotaObject;
				if(!value["Min"].isNull())
					memMinQuotaObject.min = std::stof(value["Min"].asString());
				if(!value["Max"].isNull())
					memMinQuotaObject.max = std::stof(value["Max"].asString());
				if(!value["Avg"].isNull())
					memMinQuotaObject.avg = std::stof(value["Avg"].asString());
				pointObject.memMinQuota.push_back(memMinQuotaObject);
			}
			dataObject.point.push_back(pointObject);
		}
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

