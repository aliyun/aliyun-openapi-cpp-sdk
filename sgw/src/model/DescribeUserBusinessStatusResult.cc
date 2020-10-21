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

#include <alibabacloud/sgw/model/DescribeUserBusinessStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeUserBusinessStatusResult::DescribeUserBusinessStatusResult() :
	ServiceResult()
{}

DescribeUserBusinessStatusResult::DescribeUserBusinessStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserBusinessStatusResult::~DescribeUserBusinessStatusResult()
{}

void DescribeUserBusinessStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["IsEnabled"].isNull())
		isEnabled_ = value["IsEnabled"].asString() == "true";
	if(!value["IsIndebted"].isNull())
		isIndebted_ = value["IsIndebted"].asString() == "true";
	if(!value["IsIndebtedOverdue"].isNull())
		isIndebtedOverdue_ = value["IsIndebtedOverdue"].asString() == "true";
	if(!value["IsRiskControl"].isNull())
		isRiskControl_ = value["IsRiskControl"].asString() == "true";

}

bool DescribeUserBusinessStatusResult::getIsIndebtedOverdue()const
{
	return isIndebtedOverdue_;
}

bool DescribeUserBusinessStatusResult::getIsRiskControl()const
{
	return isRiskControl_;
}

std::string DescribeUserBusinessStatusResult::getMessage()const
{
	return message_;
}

bool DescribeUserBusinessStatusResult::getIsEnabled()const
{
	return isEnabled_;
}

bool DescribeUserBusinessStatusResult::getIsIndebted()const
{
	return isIndebted_;
}

std::string DescribeUserBusinessStatusResult::getCode()const
{
	return code_;
}

bool DescribeUserBusinessStatusResult::getSuccess()const
{
	return success_;
}

