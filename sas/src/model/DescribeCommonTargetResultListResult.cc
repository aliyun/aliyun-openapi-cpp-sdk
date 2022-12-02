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

#include <alibabacloud/sas/model/DescribeCommonTargetResultListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeCommonTargetResultListResult::DescribeCommonTargetResultListResult() :
	ServiceResult()
{}

DescribeCommonTargetResultListResult::DescribeCommonTargetResultListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCommonTargetResultListResult::~DescribeCommonTargetResultListResult()
{}

void DescribeCommonTargetResultListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto targetConfigNode = value["TargetConfig"];
	if(!targetConfigNode["Type"].isNull())
		targetConfig_.type = targetConfigNode["Type"].asString();
	if(!targetConfigNode["Flag"].isNull())
		targetConfig_.flag = targetConfigNode["Flag"].asString();
	if(!targetConfigNode["TotalCount"].isNull())
		targetConfig_.totalCount = targetConfigNode["TotalCount"].asString();
	if(!targetConfigNode["TargetDefault"].isNull())
		targetConfig_.targetDefault = targetConfigNode["TargetDefault"].asString();
	if(!targetConfigNode["TargetType"].isNull())
		targetConfig_.targetType = targetConfigNode["TargetType"].asString();
		auto allTargetList = targetConfigNode["TargetList"]["StringItem"];
		for (auto value : allTargetList)
			targetConfig_.targetList.push_back(value.asString());

}

DescribeCommonTargetResultListResult::TargetConfig DescribeCommonTargetResultListResult::getTargetConfig()const
{
	return targetConfig_;
}

