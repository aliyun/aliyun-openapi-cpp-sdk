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

#include <alibabacloud/aegis/model/DescribeVulConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeVulConfigResult::DescribeVulConfigResult() :
	ServiceResult()
{}

DescribeVulConfigResult::DescribeVulConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVulConfigResult::~DescribeVulConfigResult()
{}

void DescribeVulConfigResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTargetConfigs = value["TargetConfigs"]["TargetConfig"];
	for (auto value : allTargetConfigs)
	{
		TargetConfig targetConfigsObject;
		if(!value["Type"].isNull())
			targetConfigsObject.type = value["Type"].asString();
		if(!value["Config"].isNull())
			targetConfigsObject.config = value["Config"].asString();
		if(!value["OverAllConfig"].isNull())
			targetConfigsObject.overAllConfig = value["OverAllConfig"].asString();
		targetConfigs_.push_back(targetConfigsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVulConfigResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeVulConfigResult::TargetConfig> DescribeVulConfigResult::getTargetConfigs()const
{
	return targetConfigs_;
}

