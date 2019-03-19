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

#include <alibabacloud/cdn/model/DescribeUserCdnStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeUserCdnStatusResult::DescribeUserCdnStatusResult() :
	ServiceResult()
{}

DescribeUserCdnStatusResult::DescribeUserCdnStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserCdnStatusResult::~DescribeUserCdnStatusResult()
{}

void DescribeUserCdnStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["Enabled"].isNull())
		enabled_ = value["Enabled"].asString() == "true";
	if(!value["OnService"].isNull())
		onService_ = value["OnService"].asString() == "true";
	if(!value["InDebt"].isNull())
		inDebt_ = value["InDebt"].asString() == "true";
	if(!value["InDebtOverdue"].isNull())
		inDebtOverdue_ = value["InDebtOverdue"].asString() == "true";

}

bool DescribeUserCdnStatusResult::getInDebt()const
{
	return inDebt_;
}

bool DescribeUserCdnStatusResult::getEnabled()const
{
	return enabled_;
}

bool DescribeUserCdnStatusResult::getInDebtOverdue()const
{
	return inDebtOverdue_;
}

bool DescribeUserCdnStatusResult::getOnService()const
{
	return onService_;
}

