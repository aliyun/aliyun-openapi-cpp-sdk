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

#include <alibabacloud/dytnsapi/model/DescribePhoneNumberOperatorAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dytnsapi;
using namespace AlibabaCloud::Dytnsapi::Model;

DescribePhoneNumberOperatorAttributeResult::DescribePhoneNumberOperatorAttributeResult() :
	ServiceResult()
{}

DescribePhoneNumberOperatorAttributeResult::DescribePhoneNumberOperatorAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePhoneNumberOperatorAttributeResult::~DescribePhoneNumberOperatorAttributeResult()
{}

void DescribePhoneNumberOperatorAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["BasicCarrier"].isNull())
		data_.basicCarrier = dataNode["BasicCarrier"].asString();
	if(!dataNode["Carrier"].isNull())
		data_.carrier = dataNode["Carrier"].asString();
	if(!dataNode["IsNumberPortability"].isNull())
		data_.isNumberPortability = dataNode["IsNumberPortability"].asString() == "true";
	if(!dataNode["NumberSegment"].isNull())
		data_.numberSegment = std::stol(dataNode["NumberSegment"].asString());
	if(!dataNode["City"].isNull())
		data_.city = dataNode["City"].asString();
	if(!dataNode["Province"].isNull())
		data_.province = dataNode["Province"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribePhoneNumberOperatorAttributeResult::getMessage()const
{
	return message_;
}

DescribePhoneNumberOperatorAttributeResult::Data DescribePhoneNumberOperatorAttributeResult::getData()const
{
	return data_;
}

std::string DescribePhoneNumberOperatorAttributeResult::getCode()const
{
	return code_;
}

