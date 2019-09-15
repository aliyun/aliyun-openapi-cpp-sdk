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

#include <alibabacloud/aegis/model/DescribeVulLevelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeVulLevelResult::DescribeVulLevelResult() :
	ServiceResult()
{}

DescribeVulLevelResult::DescribeVulLevelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVulLevelResult::~DescribeVulLevelResult()
{}

void DescribeVulLevelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConcernLevels = value["ConcernLevels"]["ConcernLevel"];
	for (const auto &item : allConcernLevels)
		concernLevels_.push_back(item.asString());

}

std::vector<std::string> DescribeVulLevelResult::getConcernLevels()const
{
	return concernLevels_;
}

