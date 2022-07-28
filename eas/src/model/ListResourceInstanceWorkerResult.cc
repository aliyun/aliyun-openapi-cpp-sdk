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

#include <alibabacloud/eas/model/ListResourceInstanceWorkerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

ListResourceInstanceWorkerResult::ListResourceInstanceWorkerResult() :
	ServiceResult()
{}

ListResourceInstanceWorkerResult::ListResourceInstanceWorkerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceInstanceWorkerResult::~ListResourceInstanceWorkerResult()
{}

void ListResourceInstanceWorkerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPodsNode = value["Pods"]["PodsItem"];
	for (auto valuePodsPodsItem : allPodsNode)
	{
		PodsItem podsObject;
		if(!valuePodsPodsItem["Name"].isNull())
			podsObject.name = valuePodsPodsItem["Name"].asString();
		if(!valuePodsPodsItem["ServiceName"].isNull())
			podsObject.serviceName = valuePodsPodsItem["ServiceName"].asString();
		if(!valuePodsPodsItem["Status"].isNull())
			podsObject.status = valuePodsPodsItem["Status"].asString();
		if(!valuePodsPodsItem["Ready"].isNull())
			podsObject.ready = valuePodsPodsItem["Ready"].asString() == "true";
		if(!valuePodsPodsItem["CpuRequest"].isNull())
			podsObject.cpuRequest = std::stoi(valuePodsPodsItem["CpuRequest"].asString());
		if(!valuePodsPodsItem["GpuRequest"].isNull())
			podsObject.gpuRequest = std::stoi(valuePodsPodsItem["GpuRequest"].asString());
		if(!valuePodsPodsItem["MemoryRquest"].isNull())
			podsObject.memoryRquest = std::stoi(valuePodsPodsItem["MemoryRquest"].asString());
		if(!valuePodsPodsItem["CpuLimit"].isNull())
			podsObject.cpuLimit = std::stoi(valuePodsPodsItem["CpuLimit"].asString());
		if(!valuePodsPodsItem["GpuLimit"].isNull())
			podsObject.gpuLimit = std::stoi(valuePodsPodsItem["GpuLimit"].asString());
		if(!valuePodsPodsItem["MemoryLimit"].isNull())
			podsObject.memoryLimit = std::stoi(valuePodsPodsItem["MemoryLimit"].asString());
		if(!valuePodsPodsItem["RestartCount"].isNull())
			podsObject.restartCount = std::stoi(valuePodsPodsItem["RestartCount"].asString());
		if(!valuePodsPodsItem["StartTime"].isNull())
			podsObject.startTime = valuePodsPodsItem["StartTime"].asString();
		pods_.push_back(podsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListResourceInstanceWorkerResult::getTotalCount()const
{
	return totalCount_;
}

int ListResourceInstanceWorkerResult::getPageSize()const
{
	return pageSize_;
}

int ListResourceInstanceWorkerResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListResourceInstanceWorkerResult::PodsItem> ListResourceInstanceWorkerResult::getPods()const
{
	return pods_;
}

