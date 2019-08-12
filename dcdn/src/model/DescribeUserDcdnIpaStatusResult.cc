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

#include <alibabacloud/dcdn/model/DescribeUserDcdnIpaStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeUserDcdnIpaStatusResult::DescribeUserDcdnIpaStatusResult() :
	ServiceResult()
{}

DescribeUserDcdnIpaStatusResult::DescribeUserDcdnIpaStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserDcdnIpaStatusResult::~DescribeUserDcdnIpaStatusResult()
{}

void DescribeUserDcdnIpaStatusResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
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

bool DescribeUserDcdnIpaStatusResult::getInDebt()const
{
	return inDebt_;
}

bool DescribeUserDcdnIpaStatusResult::getEnabled()const
{
	return enabled_;
}

bool DescribeUserDcdnIpaStatusResult::getInDebtOverdue()const
{
	return inDebtOverdue_;
}

bool DescribeUserDcdnIpaStatusResult::getOnService()const
{
	return onService_;
}

