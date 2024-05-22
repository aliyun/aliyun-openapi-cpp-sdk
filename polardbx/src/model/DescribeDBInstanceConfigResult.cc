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

#include <alibabacloud/polardbx/model/DescribeDBInstanceConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeDBInstanceConfigResult::DescribeDBInstanceConfigResult() :
	ServiceResult()
{}

DescribeDBInstanceConfigResult::DescribeDBInstanceConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceConfigResult::~DescribeDBInstanceConfigResult()
{}

void DescribeDBInstanceConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ConfigName"].isNull())
		data_.configName = dataNode["ConfigName"].asString();
	if(!dataNode["DbInstanceName"].isNull())
		data_.dbInstanceName = dataNode["DbInstanceName"].asString();
	if(!dataNode["ConfigValue"].isNull())
		data_.configValue = dataNode["ConfigValue"].asString();

}

DescribeDBInstanceConfigResult::Data DescribeDBInstanceConfigResult::getData()const
{
	return data_;
}

