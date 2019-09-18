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

#include <alibabacloud/green/model/DescribeBizTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeBizTypesResult::DescribeBizTypesResult() :
	ServiceResult()
{}

DescribeBizTypesResult::DescribeBizTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBizTypesResult::~DescribeBizTypesResult()
{}

void DescribeBizTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBizTypeList = value["BizTypeList"]["item"];
	for (const auto &item : allBizTypeList)
		bizTypeList_.push_back(item.asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<std::string> DescribeBizTypesResult::getBizTypeList()const
{
	return bizTypeList_;
}

int DescribeBizTypesResult::getTotalCount()const
{
	return totalCount_;
}

