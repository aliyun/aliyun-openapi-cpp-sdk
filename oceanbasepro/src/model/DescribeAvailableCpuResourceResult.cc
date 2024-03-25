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

#include <alibabacloud/oceanbasepro/model/DescribeAvailableCpuResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeAvailableCpuResourceResult::DescribeAvailableCpuResourceResult() :
	ServiceResult()
{}

DescribeAvailableCpuResourceResult::DescribeAvailableCpuResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableCpuResourceResult::~DescribeAvailableCpuResourceResult()
{}

void DescribeAvailableCpuResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["UnitNum"].isNull())
			dataObject.unitNum = std::stol(valueDataDataItem["UnitNum"].asString());
		if(!valueDataDataItem["MinCpu"].isNull())
			dataObject.minCpu = std::stol(valueDataDataItem["MinCpu"].asString());
		if(!valueDataDataItem["MaxCpu"].isNull())
			dataObject.maxCpu = std::stol(valueDataDataItem["MaxCpu"].asString());
		if(!valueDataDataItem["ReviewCode"].isNull())
			dataObject.reviewCode = valueDataDataItem["ReviewCode"].asString();
		if(!valueDataDataItem["Comment"].isNull())
			dataObject.comment = valueDataDataItem["Comment"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeAvailableCpuResourceResult::DataItem> DescribeAvailableCpuResourceResult::getData()const
{
	return data_;
}

