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

#include <alibabacloud/ens/model/DescribeEnsResourceUsageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeEnsResourceUsageResult::DescribeEnsResourceUsageResult() :
	ServiceResult()
{}

DescribeEnsResourceUsageResult::DescribeEnsResourceUsageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnsResourceUsageResult::~DescribeEnsResourceUsageResult()
{}

void DescribeEnsResourceUsageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEnsResourceUsageNode = value["EnsResourceUsage"]["ensResourceUsageItem"];
	for (auto valueEnsResourceUsageensResourceUsageItem : allEnsResourceUsageNode)
	{
		EnsResourceUsageItem ensResourceUsageObject;
		if(!valueEnsResourceUsageensResourceUsageItem["ServiceType"].isNull())
			ensResourceUsageObject.serviceType = valueEnsResourceUsageensResourceUsageItem["ServiceType"].asString();
		if(!valueEnsResourceUsageensResourceUsageItem["InstanceCount"].isNull())
			ensResourceUsageObject.instanceCount = std::stoi(valueEnsResourceUsageensResourceUsageItem["InstanceCount"].asString());
		if(!valueEnsResourceUsageensResourceUsageItem["CpuSum"].isNull())
			ensResourceUsageObject.cpuSum = std::stol(valueEnsResourceUsageensResourceUsageItem["CpuSum"].asString());
		if(!valueEnsResourceUsageensResourceUsageItem["GpuSum"].isNull())
			ensResourceUsageObject.gpuSum = std::stol(valueEnsResourceUsageensResourceUsageItem["GpuSum"].asString());
		if(!valueEnsResourceUsageensResourceUsageItem["DownCount"].isNull())
			ensResourceUsageObject.downCount = std::stoi(valueEnsResourceUsageensResourceUsageItem["DownCount"].asString());
		if(!valueEnsResourceUsageensResourceUsageItem["ExpiredCount"].isNull())
			ensResourceUsageObject.expiredCount = std::stoi(valueEnsResourceUsageensResourceUsageItem["ExpiredCount"].asString());
		if(!valueEnsResourceUsageensResourceUsageItem["ExpiringCount"].isNull())
			ensResourceUsageObject.expiringCount = std::stoi(valueEnsResourceUsageensResourceUsageItem["ExpiringCount"].asString());
		if(!valueEnsResourceUsageensResourceUsageItem["RunningCount"].isNull())
			ensResourceUsageObject.runningCount = std::stoi(valueEnsResourceUsageensResourceUsageItem["RunningCount"].asString());
		if(!valueEnsResourceUsageensResourceUsageItem["DiskCount"].isNull())
			ensResourceUsageObject.diskCount = std::stoi(valueEnsResourceUsageensResourceUsageItem["DiskCount"].asString());
		if(!valueEnsResourceUsageensResourceUsageItem["StorageSum"].isNull())
			ensResourceUsageObject.storageSum = std::stol(valueEnsResourceUsageensResourceUsageItem["StorageSum"].asString());
		if(!valueEnsResourceUsageensResourceUsageItem["ComputeResourceCount"].isNull())
			ensResourceUsageObject.computeResourceCount = std::stoi(valueEnsResourceUsageensResourceUsageItem["ComputeResourceCount"].asString());
		ensResourceUsage_.push_back(ensResourceUsageObject);
	}

}

std::vector<DescribeEnsResourceUsageResult::EnsResourceUsageItem> DescribeEnsResourceUsageResult::getEnsResourceUsage()const
{
	return ensResourceUsage_;
}

