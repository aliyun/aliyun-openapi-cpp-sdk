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

#include <alibabacloud/appstream-center/model/ListNodeInstanceTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Appstream_center;
using namespace AlibabaCloud::Appstream_center::Model;

ListNodeInstanceTypeResult::ListNodeInstanceTypeResult() :
	ServiceResult()
{}

ListNodeInstanceTypeResult::ListNodeInstanceTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodeInstanceTypeResult::~ListNodeInstanceTypeResult()
{}

void ListNodeInstanceTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNodeInstanceTypeModelsNode = value["NodeInstanceTypeModels"]["node"];
	for (auto valueNodeInstanceTypeModelsnode : allNodeInstanceTypeModelsNode)
	{
		Node nodeInstanceTypeModelsObject;
		if(!valueNodeInstanceTypeModelsnode["NodeInstanceType"].isNull())
			nodeInstanceTypeModelsObject.nodeInstanceType = valueNodeInstanceTypeModelsnode["NodeInstanceType"].asString();
		if(!valueNodeInstanceTypeModelsnode["NodeInstanceTypeFamily"].isNull())
			nodeInstanceTypeModelsObject.nodeInstanceTypeFamily = valueNodeInstanceTypeModelsnode["NodeInstanceTypeFamily"].asString();
		if(!valueNodeInstanceTypeModelsnode["Cpu"].isNull())
			nodeInstanceTypeModelsObject.cpu = valueNodeInstanceTypeModelsnode["Cpu"].asString();
		if(!valueNodeInstanceTypeModelsnode["Gpu"].isNull())
			nodeInstanceTypeModelsObject.gpu = valueNodeInstanceTypeModelsnode["Gpu"].asString();
		if(!valueNodeInstanceTypeModelsnode["Memory"].isNull())
			nodeInstanceTypeModelsObject.memory = std::stol(valueNodeInstanceTypeModelsnode["Memory"].asString());
		if(!valueNodeInstanceTypeModelsnode["SystemDiskSize"].isNull())
			nodeInstanceTypeModelsObject.systemDiskSize = std::stol(valueNodeInstanceTypeModelsnode["SystemDiskSize"].asString());
		if(!valueNodeInstanceTypeModelsnode["DataDiskSize"].isNull())
			nodeInstanceTypeModelsObject.dataDiskSize = std::stol(valueNodeInstanceTypeModelsnode["DataDiskSize"].asString());
		if(!valueNodeInstanceTypeModelsnode["GpuMemory"].isNull())
			nodeInstanceTypeModelsObject.gpuMemory = std::stol(valueNodeInstanceTypeModelsnode["GpuMemory"].asString());
		if(!valueNodeInstanceTypeModelsnode["MaxCapacity"].isNull())
			nodeInstanceTypeModelsObject.maxCapacity = std::stoi(valueNodeInstanceTypeModelsnode["MaxCapacity"].asString());
		if(!valueNodeInstanceTypeModelsnode["NodeTypeName"].isNull())
			nodeInstanceTypeModelsObject.nodeTypeName = valueNodeInstanceTypeModelsnode["NodeTypeName"].asString();
		nodeInstanceTypeModels_.push_back(nodeInstanceTypeModelsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<ListNodeInstanceTypeResult::Node> ListNodeInstanceTypeResult::getNodeInstanceTypeModels()const
{
	return nodeInstanceTypeModels_;
}

int ListNodeInstanceTypeResult::getTotalCount()const
{
	return totalCount_;
}

int ListNodeInstanceTypeResult::getPageSize()const
{
	return pageSize_;
}

int ListNodeInstanceTypeResult::getPageNumber()const
{
	return pageNumber_;
}

