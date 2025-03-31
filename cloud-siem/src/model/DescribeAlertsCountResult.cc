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

#include <alibabacloud/cloud-siem/model/DescribeAlertsCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeAlertsCountResult::DescribeAlertsCountResult() :
	ServiceResult()
{}

DescribeAlertsCountResult::DescribeAlertsCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlertsCountResult::~DescribeAlertsCountResult()
{}

void DescribeAlertsCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["High"].isNull())
		data_.high = std::stol(dataNode["High"].asString());
	if(!dataNode["Medium"].isNull())
		data_.medium = std::stol(dataNode["Medium"].asString());
	if(!dataNode["Low"].isNull())
		data_.low = std::stol(dataNode["Low"].asString());
	if(!dataNode["All"].isNull())
		data_.all = std::stol(dataNode["All"].asString());
	if(!dataNode["ProductNum"].isNull())
		data_.productNum = std::stoi(dataNode["ProductNum"].asString());
	if(!dataNode["CountMap"].isNull())
		data_.countMap = dataNode["CountMap"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeAlertsCountResult::getMessage()const
{
	return message_;
}

DescribeAlertsCountResult::Data DescribeAlertsCountResult::getData()const
{
	return data_;
}

int DescribeAlertsCountResult::getCode()const
{
	return code_;
}

bool DescribeAlertsCountResult::getSuccess()const
{
	return success_;
}

