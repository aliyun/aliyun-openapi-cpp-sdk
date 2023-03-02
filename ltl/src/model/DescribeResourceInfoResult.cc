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

#include <alibabacloud/ltl/model/DescribeResourceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ltl;
using namespace AlibabaCloud::Ltl::Model;

DescribeResourceInfoResult::DescribeResourceInfoResult() :
	ServiceResult()
{}

DescribeResourceInfoResult::DescribeResourceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceInfoResult::~DescribeResourceInfoResult()
{}

void DescribeResourceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["EffectiveTime"].isNull())
		data_.effectiveTime = std::stol(dataNode["EffectiveTime"].asString());
	if(!dataNode["AuthorizeType"].isNull())
		data_.authorizeType = dataNode["AuthorizeType"].asString();
	if(!dataNode["ExpiredTime"].isNull())
		data_.expiredTime = std::stol(dataNode["ExpiredTime"].asString());
	if(!dataNode["Region"].isNull())
		data_.region = dataNode["Region"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeResourceInfoResult::getMessage()const
{
	return message_;
}

DescribeResourceInfoResult::Data DescribeResourceInfoResult::getData()const
{
	return data_;
}

int DescribeResourceInfoResult::getCode()const
{
	return code_;
}

bool DescribeResourceInfoResult::getSuccess()const
{
	return success_;
}

