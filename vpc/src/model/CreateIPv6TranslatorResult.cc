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

#include <alibabacloud/vpc/model/CreateIPv6TranslatorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateIPv6TranslatorResult::CreateIPv6TranslatorResult() :
	ServiceResult()
{}

CreateIPv6TranslatorResult::CreateIPv6TranslatorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateIPv6TranslatorResult::~CreateIPv6TranslatorResult()
{}

void CreateIPv6TranslatorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Ipv6TranslatorId"].isNull())
		ipv6TranslatorId_ = value["Ipv6TranslatorId"].asString();
	if(!value["Spec"].isNull())
		spec_ = value["Spec"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());

}

std::string CreateIPv6TranslatorResult::getIpv6TranslatorId()const
{
	return ipv6TranslatorId_;
}

std::string CreateIPv6TranslatorResult::getSpec()const
{
	return spec_;
}

long CreateIPv6TranslatorResult::getOrderId()const
{
	return orderId_;
}

std::string CreateIPv6TranslatorResult::getName()const
{
	return name_;
}

