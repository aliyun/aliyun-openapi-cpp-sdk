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

#include <alibabacloud/beian/model/QueryAccessorDomainStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Beian;
using namespace AlibabaCloud::Beian::Model;

QueryAccessorDomainStatusResult::QueryAccessorDomainStatusResult() :
	ServiceResult()
{}

QueryAccessorDomainStatusResult::QueryAccessorDomainStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAccessorDomainStatusResult::~QueryAccessorDomainStatusResult()
{}

void QueryAccessorDomainStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Domain"].isNull())
		data_.domain = dataNode["Domain"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["ReasonCode"].isNull())
		data_.reasonCode = std::stoi(dataNode["ReasonCode"].asString());
	if(!dataNode["Reason"].isNull())
		data_.reason = dataNode["Reason"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryAccessorDomainStatusResult::getMessage()const
{
	return message_;
}

QueryAccessorDomainStatusResult::Data QueryAccessorDomainStatusResult::getData()const
{
	return data_;
}

int QueryAccessorDomainStatusResult::getCode()const
{
	return code_;
}

