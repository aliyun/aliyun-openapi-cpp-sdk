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

#include <alibabacloud/ddoscoo/model/DescribeBatchSlsDispatchStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeBatchSlsDispatchStatusResult::DescribeBatchSlsDispatchStatusResult() :
	ServiceResult()
{}

DescribeBatchSlsDispatchStatusResult::DescribeBatchSlsDispatchStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBatchSlsDispatchStatusResult::~DescribeBatchSlsDispatchStatusResult()
{}

void DescribeBatchSlsDispatchStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSlsConfigStatusListNode = value["SlsConfigStatusList"]["SlsConfigStatus"];
	for (auto valueSlsConfigStatusListSlsConfigStatus : allSlsConfigStatusListNode)
	{
		SlsConfigStatus slsConfigStatusListObject;
		if(!valueSlsConfigStatusListSlsConfigStatus["Enable"].isNull())
			slsConfigStatusListObject.enable = valueSlsConfigStatusListSlsConfigStatus["Enable"].asString() == "true";
		if(!valueSlsConfigStatusListSlsConfigStatus["Domain"].isNull())
			slsConfigStatusListObject.domain = valueSlsConfigStatusListSlsConfigStatus["Domain"].asString();
		slsConfigStatusList_.push_back(slsConfigStatusListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeBatchSlsDispatchStatusResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeBatchSlsDispatchStatusResult::SlsConfigStatus> DescribeBatchSlsDispatchStatusResult::getSlsConfigStatusList()const
{
	return slsConfigStatusList_;
}

