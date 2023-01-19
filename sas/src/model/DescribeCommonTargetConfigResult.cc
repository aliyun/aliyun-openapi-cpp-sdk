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

#include <alibabacloud/sas/model/DescribeCommonTargetConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeCommonTargetConfigResult::DescribeCommonTargetConfigResult() :
	ServiceResult()
{}

DescribeCommonTargetConfigResult::DescribeCommonTargetConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCommonTargetConfigResult::~DescribeCommonTargetConfigResult()
{}

void DescribeCommonTargetConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTargetListNode = value["TargetList"]["TargetInfo"];
	for (auto valueTargetListTargetInfo : allTargetListNode)
	{
		TargetInfo targetListObject;
		if(!valueTargetListTargetInfo["Flag"].isNull())
			targetListObject.flag = valueTargetListTargetInfo["Flag"].asString();
		if(!valueTargetListTargetInfo["Target"].isNull())
			targetListObject.target = valueTargetListTargetInfo["Target"].asString();
		if(!valueTargetListTargetInfo["TargetType"].isNull())
			targetListObject.targetType = valueTargetListTargetInfo["TargetType"].asString();
		targetList_.push_back(targetListObject);
	}

}

std::vector<DescribeCommonTargetConfigResult::TargetInfo> DescribeCommonTargetConfigResult::getTargetList()const
{
	return targetList_;
}

