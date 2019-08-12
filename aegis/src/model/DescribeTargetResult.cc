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

#include <alibabacloud/aegis/model/DescribeTargetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeTargetResult::DescribeTargetResult() :
	ServiceResult()
{}

DescribeTargetResult::DescribeTargetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTargetResult::~DescribeTargetResult()
{}

void DescribeTargetResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTargets = value["Targets"]["Target"];
	for (auto value : allTargets)
	{
		Target targetsObject;
		if(!value["TargetType"].isNull())
			targetsObject.targetType = value["TargetType"].asString();
		if(!value["Target"].isNull())
			targetsObject.target = value["Target"].asString();
		if(!value["Flag"].isNull())
			targetsObject.flag = value["Flag"].asString();
		targets_.push_back(targetsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeTargetResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeTargetResult::Target> DescribeTargetResult::getTargets()const
{
	return targets_;
}

