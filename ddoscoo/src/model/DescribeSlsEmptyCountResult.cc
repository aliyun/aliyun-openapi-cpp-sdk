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

#include <alibabacloud/ddoscoo/model/DescribeSlsEmptyCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeSlsEmptyCountResult::DescribeSlsEmptyCountResult() :
	ServiceResult()
{}

DescribeSlsEmptyCountResult::DescribeSlsEmptyCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSlsEmptyCountResult::~DescribeSlsEmptyCountResult()
{}

void DescribeSlsEmptyCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AvailableCount"].isNull())
		availableCount_ = std::stoi(value["AvailableCount"].asString());

}

int DescribeSlsEmptyCountResult::getAvailableCount()const
{
	return availableCount_;
}

