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

#include <alibabacloud/oceanbasepro/model/DescribeAvailableMemResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeAvailableMemResourceResult::DescribeAvailableMemResourceResult() :
	ServiceResult()
{}

DescribeAvailableMemResourceResult::DescribeAvailableMemResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableMemResourceResult::~DescribeAvailableMemResourceResult()
{}

void DescribeAvailableMemResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MinMem"].isNull())
		data_.minMem = std::stol(dataNode["MinMem"].asString());
	if(!dataNode["MaxMem"].isNull())
		data_.maxMem = std::stol(dataNode["MaxMem"].asString());
	if(!dataNode["UsedMem"].isNull())
		data_.usedMem = std::stol(dataNode["UsedMem"].asString());
	if(!dataNode["SafeMem"].isNull())
		data_.safeMem = dataNode["SafeMem"].asString();

}

DescribeAvailableMemResourceResult::Data DescribeAvailableMemResourceResult::getData()const
{
	return data_;
}

