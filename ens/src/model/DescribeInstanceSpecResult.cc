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

#include <alibabacloud/ens/model/DescribeInstanceSpecResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeInstanceSpecResult::DescribeInstanceSpecResult() :
	ServiceResult()
{}

DescribeInstanceSpecResult::DescribeInstanceSpecResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceSpecResult::~DescribeInstanceSpecResult()
{}

void DescribeInstanceSpecResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceSpecsNode = value["InstanceSpecs"]["InstanceSpec"];
	for (auto valueInstanceSpecsInstanceSpec : allInstanceSpecsNode)
	{
		InstanceSpec instanceSpecsObject;
		if(!valueInstanceSpecsInstanceSpec["Core"].isNull())
			instanceSpecsObject.core = valueInstanceSpecsInstanceSpec["Core"].asString();
		if(!valueInstanceSpecsInstanceSpec["DisplayName"].isNull())
			instanceSpecsObject.displayName = valueInstanceSpecsInstanceSpec["DisplayName"].asString();
		if(!valueInstanceSpecsInstanceSpec["InstanceType"].isNull())
			instanceSpecsObject.instanceType = valueInstanceSpecsInstanceSpec["InstanceType"].asString();
		if(!valueInstanceSpecsInstanceSpec["Memory"].isNull())
			instanceSpecsObject.memory = valueInstanceSpecsInstanceSpec["Memory"].asString();
		instanceSpecs_.push_back(instanceSpecsObject);
	}
	if(!value["BandwidthLimit"].isNull())
		bandwidthLimit_ = std::stoi(value["BandwidthLimit"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["DataDiskMaxSize"].isNull())
		dataDiskMaxSize_ = std::stoi(value["DataDiskMaxSize"].asString());
	if(!value["DataDiskMinSize"].isNull())
		dataDiskMinSize_ = std::stoi(value["DataDiskMinSize"].asString());
	if(!value["SystemDiskMaxSize"].isNull())
		systemDiskMaxSize_ = std::stoi(value["SystemDiskMaxSize"].asString());

}

int DescribeInstanceSpecResult::getDataDiskMinSize()const
{
	return dataDiskMinSize_;
}

int DescribeInstanceSpecResult::getSystemDiskMaxSize()const
{
	return systemDiskMaxSize_;
}

int DescribeInstanceSpecResult::getDataDiskMaxSize()const
{
	return dataDiskMaxSize_;
}

int DescribeInstanceSpecResult::getCode()const
{
	return code_;
}

std::vector<DescribeInstanceSpecResult::InstanceSpec> DescribeInstanceSpecResult::getInstanceSpecs()const
{
	return instanceSpecs_;
}

int DescribeInstanceSpecResult::getBandwidthLimit()const
{
	return bandwidthLimit_;
}

