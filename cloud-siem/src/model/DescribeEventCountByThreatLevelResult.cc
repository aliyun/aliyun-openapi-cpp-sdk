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

#include <alibabacloud/cloud-siem/model/DescribeEventCountByThreatLevelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeEventCountByThreatLevelResult::DescribeEventCountByThreatLevelResult() :
	ServiceResult()
{}

DescribeEventCountByThreatLevelResult::DescribeEventCountByThreatLevelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventCountByThreatLevelResult::~DescribeEventCountByThreatLevelResult()
{}

void DescribeEventCountByThreatLevelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EventNum"].isNull())
		data_.eventNum = std::stol(dataNode["EventNum"].asString());
	if(!dataNode["UndealEventNum"].isNull())
		data_.undealEventNum = std::stol(dataNode["UndealEventNum"].asString());
	if(!dataNode["HighLevelEventNum"].isNull())
		data_.highLevelEventNum = std::stol(dataNode["HighLevelEventNum"].asString());
	if(!dataNode["MediumLevelEventNum"].isNull())
		data_.mediumLevelEventNum = std::stol(dataNode["MediumLevelEventNum"].asString());
	if(!dataNode["LowLevelEventNum"].isNull())
		data_.lowLevelEventNum = std::stol(dataNode["LowLevelEventNum"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeEventCountByThreatLevelResult::getMessage()const
{
	return message_;
}

DescribeEventCountByThreatLevelResult::Data DescribeEventCountByThreatLevelResult::getData()const
{
	return data_;
}

int DescribeEventCountByThreatLevelResult::getCode()const
{
	return code_;
}

bool DescribeEventCountByThreatLevelResult::getSuccess()const
{
	return success_;
}

