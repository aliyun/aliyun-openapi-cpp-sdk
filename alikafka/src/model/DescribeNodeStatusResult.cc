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

#include <alibabacloud/alikafka/model/DescribeNodeStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alikafka;
using namespace AlibabaCloud::Alikafka::Model;

DescribeNodeStatusResult::DescribeNodeStatusResult() :
	ServiceResult()
{}

DescribeNodeStatusResult::DescribeNodeStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNodeStatusResult::~DescribeNodeStatusResult()
{}

void DescribeNodeStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStatusList = value["StatusList"]["Status"];
	for (const auto &item : allStatusList)
		statusList_.push_back(item.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeNodeStatusResult::getMessage()const
{
	return message_;
}

std::vector<std::string> DescribeNodeStatusResult::getStatusList()const
{
	return statusList_;
}

int DescribeNodeStatusResult::getCode()const
{
	return code_;
}

bool DescribeNodeStatusResult::getSuccess()const
{
	return success_;
}

