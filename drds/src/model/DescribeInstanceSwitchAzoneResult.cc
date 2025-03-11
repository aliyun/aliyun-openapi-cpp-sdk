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

#include <alibabacloud/drds/model/DescribeInstanceSwitchAzoneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeInstanceSwitchAzoneResult::DescribeInstanceSwitchAzoneResult() :
	ServiceResult()
{}

DescribeInstanceSwitchAzoneResult::DescribeInstanceSwitchAzoneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceSwitchAzoneResult::~DescribeInstanceSwitchAzoneResult()
{}

void DescribeInstanceSwitchAzoneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["OriginAzoneId"].isNull())
		result_.originAzoneId = resultNode["OriginAzoneId"].asString();
	if(!resultNode["SwitchAble"].isNull())
		result_.switchAble = resultNode["SwitchAble"].asString() == "true";
	if(!resultNode["RegionId"].isNull())
		result_.regionId = resultNode["RegionId"].asString();
		auto allTargetAzones = resultNode["TargetAzones"]["TargetAzone"];
		for (auto value : allTargetAzones)
			result_.targetAzones.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool DescribeInstanceSwitchAzoneResult::getSuccess()const
{
	return success_;
}

DescribeInstanceSwitchAzoneResult::Result DescribeInstanceSwitchAzoneResult::getResult()const
{
	return result_;
}

