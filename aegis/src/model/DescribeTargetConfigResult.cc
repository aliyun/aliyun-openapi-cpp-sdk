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

#include <alibabacloud/aegis/model/DescribeTargetConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeTargetConfigResult::DescribeTargetConfigResult() :
	ServiceResult()
{}

DescribeTargetConfigResult::DescribeTargetConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTargetConfigResult::~DescribeTargetConfigResult()
{}

void DescribeTargetConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTargetConfigsNode = value["TargetConfigs"]["TargetConfig"];
	for (auto valueTargetConfigsTargetConfig : allTargetConfigsNode)
	{
		TargetConfig targetConfigsObject;
		if(!valueTargetConfigsTargetConfig["Type"].isNull())
			targetConfigsObject.type = valueTargetConfigsTargetConfig["Type"].asString();
		if(!valueTargetConfigsTargetConfig["Config"].isNull())
			targetConfigsObject.config = valueTargetConfigsTargetConfig["Config"].asString();
		if(!valueTargetConfigsTargetConfig["OverAllConfig"].isNull())
			targetConfigsObject.overAllConfig = valueTargetConfigsTargetConfig["OverAllConfig"].asString();
		targetConfigs_.push_back(targetConfigsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeTargetConfigResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeTargetConfigResult::TargetConfig> DescribeTargetConfigResult::getTargetConfigs()const
{
	return targetConfigs_;
}

