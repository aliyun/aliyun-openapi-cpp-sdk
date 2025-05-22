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

#include <alibabacloud/rds/model/DescribeHostGroupElasticStrategyParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeHostGroupElasticStrategyParametersResult::DescribeHostGroupElasticStrategyParametersResult() :
	ServiceResult()
{}

DescribeHostGroupElasticStrategyParametersResult::DescribeHostGroupElasticStrategyParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHostGroupElasticStrategyParametersResult::~DescribeHostGroupElasticStrategyParametersResult()
{}

void DescribeHostGroupElasticStrategyParametersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CpuShar"].isNull())
		cpuShar_ = std::stoi(value["CpuShar"].asString());
	if(!value["CpuZoom"].isNull())
		cpuZoom_ = std::stoi(value["CpuZoom"].asString());
	if(!value["IopsZoom"].isNull())
		iopsZoom_ = std::stoi(value["IopsZoom"].asString());
	if(!value["MaxConnZoom"].isNull())
		maxConnZoom_ = std::stoi(value["MaxConnZoom"].asString());
	if(!value["MemoryZoom"].isNull())
		memoryZoom_ = std::stoi(value["MemoryZoom"].asString());

}

int DescribeHostGroupElasticStrategyParametersResult::getCpuZoom()const
{
	return cpuZoom_;
}

int DescribeHostGroupElasticStrategyParametersResult::getMaxConnZoom()const
{
	return maxConnZoom_;
}

int DescribeHostGroupElasticStrategyParametersResult::getMemoryZoom()const
{
	return memoryZoom_;
}

int DescribeHostGroupElasticStrategyParametersResult::getCpuShar()const
{
	return cpuShar_;
}

int DescribeHostGroupElasticStrategyParametersResult::getIopsZoom()const
{
	return iopsZoom_;
}

