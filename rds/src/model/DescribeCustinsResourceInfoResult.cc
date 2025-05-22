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

#include <alibabacloud/rds/model/DescribeCustinsResourceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeCustinsResourceInfoResult::DescribeCustinsResourceInfoResult() :
	ServiceResult()
{}

DescribeCustinsResourceInfoResult::DescribeCustinsResourceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustinsResourceInfoResult::~DescribeCustinsResourceInfoResult()
{}

void DescribeCustinsResourceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["CpuAdjustDeadline"].isNull())
			dataObject.cpuAdjustDeadline = valueDataDataItem["CpuAdjustDeadline"].asString();
		if(!valueDataDataItem["CpuAdjustableMaxRatio"].isNull())
			dataObject.cpuAdjustableMaxRatio = valueDataDataItem["CpuAdjustableMaxRatio"].asString();
		if(!valueDataDataItem["CpuAdjustableMaxValue"].isNull())
			dataObject.cpuAdjustableMaxValue = valueDataDataItem["CpuAdjustableMaxValue"].asString();
		if(!valueDataDataItem["CpuIncreaseRatio"].isNull())
			dataObject.cpuIncreaseRatio = valueDataDataItem["CpuIncreaseRatio"].asString();
		if(!valueDataDataItem["CpuIncreaseRatioValue"].isNull())
			dataObject.cpuIncreaseRatioValue = valueDataDataItem["CpuIncreaseRatioValue"].asString();
		if(!valueDataDataItem["DBInstanceId"].isNull())
			dataObject.dBInstanceId = valueDataDataItem["DBInstanceId"].asString();
		if(!valueDataDataItem["IopsAdjustableMaxValue"].isNull())
			dataObject.iopsAdjustableMaxValue = valueDataDataItem["IopsAdjustableMaxValue"].asString();
		if(!valueDataDataItem["MaxConnAdjustDeadline"].isNull())
			dataObject.maxConnAdjustDeadline = valueDataDataItem["MaxConnAdjustDeadline"].asString();
		if(!valueDataDataItem["MaxConnAdjustableMaxValue"].isNull())
			dataObject.maxConnAdjustableMaxValue = valueDataDataItem["MaxConnAdjustableMaxValue"].asString();
		if(!valueDataDataItem["MaxConnIncreaseRatio"].isNull())
			dataObject.maxConnIncreaseRatio = valueDataDataItem["MaxConnIncreaseRatio"].asString();
		if(!valueDataDataItem["MaxConnIncreaseRatioValue"].isNull())
			dataObject.maxConnIncreaseRatioValue = valueDataDataItem["MaxConnIncreaseRatioValue"].asString();
		if(!valueDataDataItem["MaxIopsAdjustDeadline"].isNull())
			dataObject.maxIopsAdjustDeadline = valueDataDataItem["MaxIopsAdjustDeadline"].asString();
		if(!valueDataDataItem["MaxIopsIncreaseRatio"].isNull())
			dataObject.maxIopsIncreaseRatio = valueDataDataItem["MaxIopsIncreaseRatio"].asString();
		if(!valueDataDataItem["MaxIopsIncreaseRatioValue"].isNull())
			dataObject.maxIopsIncreaseRatioValue = valueDataDataItem["MaxIopsIncreaseRatioValue"].asString();
		if(!valueDataDataItem["MemAdjustableMaxRatio"].isNull())
			dataObject.memAdjustableMaxRatio = valueDataDataItem["MemAdjustableMaxRatio"].asString();
		if(!valueDataDataItem["MemAdjustableMaxValue"].isNull())
			dataObject.memAdjustableMaxValue = valueDataDataItem["MemAdjustableMaxValue"].asString();
		if(!valueDataDataItem["MemoryAdjustDeadline"].isNull())
			dataObject.memoryAdjustDeadline = valueDataDataItem["MemoryAdjustDeadline"].asString();
		if(!valueDataDataItem["MemoryIncreaseRatio"].isNull())
			dataObject.memoryIncreaseRatio = valueDataDataItem["MemoryIncreaseRatio"].asString();
		if(!valueDataDataItem["MemoryIncreaseRatioValue"].isNull())
			dataObject.memoryIncreaseRatioValue = valueDataDataItem["MemoryIncreaseRatioValue"].asString();
		if(!valueDataDataItem["OriginCpu"].isNull())
			dataObject.originCpu = valueDataDataItem["OriginCpu"].asString();
		if(!valueDataDataItem["OriginMaxConn"].isNull())
			dataObject.originMaxConn = valueDataDataItem["OriginMaxConn"].asString();
		if(!valueDataDataItem["OriginMaxIops"].isNull())
			dataObject.originMaxIops = valueDataDataItem["OriginMaxIops"].asString();
		if(!valueDataDataItem["OriginMemory"].isNull())
			dataObject.originMemory = valueDataDataItem["OriginMemory"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeCustinsResourceInfoResult::DataItem> DescribeCustinsResourceInfoResult::getData()const
{
	return data_;
}

