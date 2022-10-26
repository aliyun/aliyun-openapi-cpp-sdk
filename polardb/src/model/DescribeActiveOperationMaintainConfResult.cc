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

#include <alibabacloud/polardb/model/DescribeActiveOperationMaintainConfResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeActiveOperationMaintainConfResult::DescribeActiveOperationMaintainConfResult() :
	ServiceResult()
{}

DescribeActiveOperationMaintainConfResult::DescribeActiveOperationMaintainConfResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeActiveOperationMaintainConfResult::~DescribeActiveOperationMaintainConfResult()
{}

void DescribeActiveOperationMaintainConfResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto configNode = value["Config"];
	if(!configNode["CycleType"].isNull())
		config_.cycleType = std::stoi(configNode["CycleType"].asString());
	if(!configNode["CycleTime"].isNull())
		config_.cycleTime = configNode["CycleTime"].asString();
	if(!configNode["MaintainStartTime"].isNull())
		config_.maintainStartTime = configNode["MaintainStartTime"].asString();
	if(!configNode["MaintainEndTime"].isNull())
		config_.maintainEndTime = configNode["MaintainEndTime"].asString();
	if(!configNode["Status"].isNull())
		config_.status = std::stol(configNode["Status"].asString());
	if(!configNode["ModifiedTime"].isNull())
		config_.modifiedTime = configNode["ModifiedTime"].asString();
	if(!configNode["CreatedTime"].isNull())
		config_.createdTime = configNode["CreatedTime"].asString();
	if(!value["HasConfig"].isNull())
		hasConfig_ = std::stol(value["HasConfig"].asString());

}

DescribeActiveOperationMaintainConfResult::Config DescribeActiveOperationMaintainConfResult::getConfig()const
{
	return config_;
}

long DescribeActiveOperationMaintainConfResult::getHasConfig()const
{
	return hasConfig_;
}

