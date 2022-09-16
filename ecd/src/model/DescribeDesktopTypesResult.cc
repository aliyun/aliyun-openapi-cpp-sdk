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

#include <alibabacloud/ecd/model/DescribeDesktopTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeDesktopTypesResult::DescribeDesktopTypesResult() :
	ServiceResult()
{}

DescribeDesktopTypesResult::DescribeDesktopTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDesktopTypesResult::~DescribeDesktopTypesResult()
{}

void DescribeDesktopTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDesktopTypesNode = value["DesktopTypes"]["DesktopType"];
	for (auto valueDesktopTypesDesktopType : allDesktopTypesNode)
	{
		DesktopType desktopTypesObject;
		if(!valueDesktopTypesDesktopType["SystemDiskSize"].isNull())
			desktopTypesObject.systemDiskSize = valueDesktopTypesDesktopType["SystemDiskSize"].asString();
		if(!valueDesktopTypesDesktopType["DesktopTypeId"].isNull())
			desktopTypesObject.desktopTypeId = valueDesktopTypesDesktopType["DesktopTypeId"].asString();
		if(!valueDesktopTypesDesktopType["DataDiskSize"].isNull())
			desktopTypesObject.dataDiskSize = valueDesktopTypesDesktopType["DataDiskSize"].asString();
		if(!valueDesktopTypesDesktopType["CpuCount"].isNull())
			desktopTypesObject.cpuCount = valueDesktopTypesDesktopType["CpuCount"].asString();
		if(!valueDesktopTypesDesktopType["GpuCount"].isNull())
			desktopTypesObject.gpuCount = std::stof(valueDesktopTypesDesktopType["GpuCount"].asString());
		if(!valueDesktopTypesDesktopType["GpuSpec"].isNull())
			desktopTypesObject.gpuSpec = valueDesktopTypesDesktopType["GpuSpec"].asString();
		if(!valueDesktopTypesDesktopType["InstanceTypeFamily"].isNull())
			desktopTypesObject.instanceTypeFamily = valueDesktopTypesDesktopType["InstanceTypeFamily"].asString();
		if(!valueDesktopTypesDesktopType["MemorySize"].isNull())
			desktopTypesObject.memorySize = valueDesktopTypesDesktopType["MemorySize"].asString();
		if(!valueDesktopTypesDesktopType["DesktopTypeStatus"].isNull())
			desktopTypesObject.desktopTypeStatus = valueDesktopTypesDesktopType["DesktopTypeStatus"].asString();
		auto allAllowDiskSizeNode = valueDesktopTypesDesktopType["AllowDiskSize"]["AllowDiskSizeItem"];
		for (auto valueDesktopTypesDesktopTypeAllowDiskSizeAllowDiskSizeItem : allAllowDiskSizeNode)
		{
			DesktopType::AllowDiskSizeItem allowDiskSizeObject;
			if(!valueDesktopTypesDesktopTypeAllowDiskSizeAllowDiskSizeItem["DataDiskSize"].isNull())
				allowDiskSizeObject.dataDiskSize = std::stoi(valueDesktopTypesDesktopTypeAllowDiskSizeAllowDiskSizeItem["DataDiskSize"].asString());
			if(!valueDesktopTypesDesktopTypeAllowDiskSizeAllowDiskSizeItem["SystemDiskSize"].isNull())
				allowDiskSizeObject.systemDiskSize = std::stoi(valueDesktopTypesDesktopTypeAllowDiskSizeAllowDiskSizeItem["SystemDiskSize"].asString());
			if(!valueDesktopTypesDesktopTypeAllowDiskSizeAllowDiskSizeItem["DefaultDataDiskSize"].isNull())
				allowDiskSizeObject.defaultDataDiskSize = std::stoi(valueDesktopTypesDesktopTypeAllowDiskSizeAllowDiskSizeItem["DefaultDataDiskSize"].asString());
			desktopTypesObject.allowDiskSize.push_back(allowDiskSizeObject);
		}
		desktopTypes_.push_back(desktopTypesObject);
	}

}

std::vector<DescribeDesktopTypesResult::DesktopType> DescribeDesktopTypesResult::getDesktopTypes()const
{
	return desktopTypes_;
}

