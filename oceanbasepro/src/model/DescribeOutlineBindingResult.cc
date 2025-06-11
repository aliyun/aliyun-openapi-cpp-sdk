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

#include <alibabacloud/oceanbasepro/model/DescribeOutlineBindingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeOutlineBindingResult::DescribeOutlineBindingResult() :
	ServiceResult()
{}

DescribeOutlineBindingResult::DescribeOutlineBindingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOutlineBindingResult::~DescribeOutlineBindingResult()
{}

void DescribeOutlineBindingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto outlineBindingNode = value["OutlineBinding"];
	if(!outlineBindingNode["BindPlan"].isNull())
		outlineBinding_.bindPlan = outlineBindingNode["BindPlan"].asString();
	if(!outlineBindingNode["OutlineId"].isNull())
		outlineBinding_.outlineId = std::stol(outlineBindingNode["OutlineId"].asString());
	if(!outlineBindingNode["BindIndex"].isNull())
		outlineBinding_.bindIndex = outlineBindingNode["BindIndex"].asString();
	if(!outlineBindingNode["MaxConcurrent"].isNull())
		outlineBinding_.maxConcurrent = std::stoi(outlineBindingNode["MaxConcurrent"].asString());
	if(!outlineBindingNode["TableName"].isNull())
		outlineBinding_.tableName = outlineBindingNode["TableName"].asString();
	if(!outlineBindingNode["SqlText"].isNull())
		outlineBinding_.sqlText = outlineBindingNode["SqlText"].asString();
	if(!outlineBindingNode["SqlTextConcurrentNum"].isNull())
		outlineBinding_.sqlTextConcurrentNum = std::stol(outlineBindingNode["SqlTextConcurrentNum"].asString());

}

DescribeOutlineBindingResult::OutlineBinding DescribeOutlineBindingResult::getOutlineBinding()const
{
	return outlineBinding_;
}

