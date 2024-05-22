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

#include <alibabacloud/polardbx/model/DescribeDBInstanceHAResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeDBInstanceHAResult::DescribeDBInstanceHAResult() :
	ServiceResult()
{}

DescribeDBInstanceHAResult::DescribeDBInstanceHAResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceHAResult::~DescribeDBInstanceHAResult()
{}

void DescribeDBInstanceHAResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TopologyType"].isNull())
		data_.topologyType = dataNode["TopologyType"].asString();
	if(!dataNode["PrimaryRegionId"].isNull())
		data_.primaryRegionId = dataNode["PrimaryRegionId"].asString();
	if(!dataNode["PrimaryAzoneId"].isNull())
		data_.primaryAzoneId = dataNode["PrimaryAzoneId"].asString();
	if(!dataNode["SecondaryRegionId"].isNull())
		data_.secondaryRegionId = dataNode["SecondaryRegionId"].asString();
	if(!dataNode["SecondaryAzoneId"].isNull())
		data_.secondaryAzoneId = dataNode["SecondaryAzoneId"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeDBInstanceHAResult::getMessage()const
{
	return message_;
}

DescribeDBInstanceHAResult::Data DescribeDBInstanceHAResult::getData()const
{
	return data_;
}

bool DescribeDBInstanceHAResult::getSuccess()const
{
	return success_;
}

