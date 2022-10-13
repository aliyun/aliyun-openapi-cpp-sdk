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

#include <alibabacloud/ens/model/DescribePrePaidInstanceStockResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribePrePaidInstanceStockResult::DescribePrePaidInstanceStockResult() :
	ServiceResult()
{}

DescribePrePaidInstanceStockResult::DescribePrePaidInstanceStockResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePrePaidInstanceStockResult::~DescribePrePaidInstanceStockResult()
{}

void DescribePrePaidInstanceStockResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AvaliableCount"].isNull())
		avaliableCount_ = std::stoi(value["AvaliableCount"].asString());
	if(!value["Cores"].isNull())
		cores_ = std::stoi(value["Cores"].asString());
	if(!value["DataDiskSize"].isNull())
		dataDiskSize_ = std::stoi(value["DataDiskSize"].asString());
	if(!value["EnsRegionId"].isNull())
		ensRegionId_ = value["EnsRegionId"].asString();
	if(!value["InstanceSpec"].isNull())
		instanceSpec_ = value["InstanceSpec"].asString();
	if(!value["Memory"].isNull())
		memory_ = std::stoi(value["Memory"].asString());
	if(!value["SystemDiskSize"].isNull())
		systemDiskSize_ = std::stoi(value["SystemDiskSize"].asString());
	if(!value["ResourceGap"].isNull())
		resourceGap_ = value["ResourceGap"].asString();

}

int DescribePrePaidInstanceStockResult::getCores()const
{
	return cores_;
}

int DescribePrePaidInstanceStockResult::getAvaliableCount()const
{
	return avaliableCount_;
}

std::string DescribePrePaidInstanceStockResult::getInstanceSpec()const
{
	return instanceSpec_;
}

int DescribePrePaidInstanceStockResult::getSystemDiskSize()const
{
	return systemDiskSize_;
}

int DescribePrePaidInstanceStockResult::getMemory()const
{
	return memory_;
}

std::string DescribePrePaidInstanceStockResult::getResourceGap()const
{
	return resourceGap_;
}

int DescribePrePaidInstanceStockResult::getDataDiskSize()const
{
	return dataDiskSize_;
}

std::string DescribePrePaidInstanceStockResult::getEnsRegionId()const
{
	return ensRegionId_;
}

