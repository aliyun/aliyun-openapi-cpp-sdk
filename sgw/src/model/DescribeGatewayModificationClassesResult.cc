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

#include <alibabacloud/sgw/model/DescribeGatewayModificationClassesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayModificationClassesResult::DescribeGatewayModificationClassesResult() :
	ServiceResult()
{}

DescribeGatewayModificationClassesResult::DescribeGatewayModificationClassesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayModificationClassesResult::~DescribeGatewayModificationClassesResult()
{}

void DescribeGatewayModificationClassesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTargetGatewayClassesNode = value["TargetGatewayClasses"]["TargetGatewayClass"];
	for (auto valueTargetGatewayClassesTargetGatewayClass : allTargetGatewayClassesNode)
	{
		TargetGatewayClass targetGatewayClassesObject;
		if(!valueTargetGatewayClassesTargetGatewayClass["GatewayClass"].isNull())
			targetGatewayClassesObject.gatewayClass = valueTargetGatewayClassesTargetGatewayClass["GatewayClass"].asString();
		if(!valueTargetGatewayClassesTargetGatewayClass["IsAvailable"].isNull())
			targetGatewayClassesObject.isAvailable = valueTargetGatewayClassesTargetGatewayClass["IsAvailable"].asString() == "true";
		targetGatewayClasses_.push_back(targetGatewayClassesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeGatewayModificationClassesResult::getMessage()const
{
	return message_;
}

std::string DescribeGatewayModificationClassesResult::getCode()const
{
	return code_;
}

bool DescribeGatewayModificationClassesResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeGatewayModificationClassesResult::TargetGatewayClass> DescribeGatewayModificationClassesResult::getTargetGatewayClasses()const
{
	return targetGatewayClasses_;
}

