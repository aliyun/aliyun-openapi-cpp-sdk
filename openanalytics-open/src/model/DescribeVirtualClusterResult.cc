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

#include <alibabacloud/openanalytics-open/model/DescribeVirtualClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

DescribeVirtualClusterResult::DescribeVirtualClusterResult() :
	ServiceResult()
{}

DescribeVirtualClusterResult::DescribeVirtualClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVirtualClusterResult::~DescribeVirtualClusterResult()
{}

void DescribeVirtualClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Name"].isNull())
			dataObject.name = valueDataDataItem["Name"].asString();
		if(!valueDataDataItem["Type"].isNull())
			dataObject.type = valueDataDataItem["Type"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["CreatorId"].isNull())
			dataObject.creatorId = valueDataDataItem["CreatorId"].asString();
		if(!valueDataDataItem["CreateTime"].isNull())
			dataObject.createTime = valueDataDataItem["CreateTime"].asString();
		if(!valueDataDataItem["SparkEngineModuleName"].isNull())
			dataObject.sparkEngineModuleName = valueDataDataItem["SparkEngineModuleName"].asString();
		if(!valueDataDataItem["DefaultExecutorSpecName"].isNull())
			dataObject.defaultExecutorSpecName = valueDataDataItem["DefaultExecutorSpecName"].asString();
		if(!valueDataDataItem["DefaultDriverSpecName"].isNull())
			dataObject.defaultDriverSpecName = valueDataDataItem["DefaultDriverSpecName"].asString();
		if(!valueDataDataItem["DefaultExecutorNumbers"].isNull())
			dataObject.defaultExecutorNumbers = std::stol(valueDataDataItem["DefaultExecutorNumbers"].asString());
		if(!valueDataDataItem["SparkVersionDescription"].isNull())
			dataObject.sparkVersionDescription = valueDataDataItem["SparkVersionDescription"].asString();
		if(!valueDataDataItem["MaxCpu"].isNull())
			dataObject.maxCpu = std::stof(valueDataDataItem["MaxCpu"].asString());
		if(!valueDataDataItem["MaxMemory"].isNull())
			dataObject.maxMemory = std::stof(valueDataDataItem["MaxMemory"].asString());
		if(!valueDataDataItem["MaxCpuLimit"].isNull())
			dataObject.maxCpuLimit = std::stof(valueDataDataItem["MaxCpuLimit"].asString());
		if(!valueDataDataItem["MaxMemoryLimit"].isNull())
			dataObject.maxMemoryLimit = std::stof(valueDataDataItem["MaxMemoryLimit"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<DescribeVirtualClusterResult::DataItem> DescribeVirtualClusterResult::getData()const
{
	return data_;
}

