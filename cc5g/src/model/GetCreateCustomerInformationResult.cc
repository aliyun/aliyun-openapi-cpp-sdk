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

#include <alibabacloud/cc5g/model/GetCreateCustomerInformationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CC5G;
using namespace AlibabaCloud::CC5G::Model;

GetCreateCustomerInformationResult::GetCreateCustomerInformationResult() :
	ServiceResult()
{}

GetCreateCustomerInformationResult::GetCreateCustomerInformationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCreateCustomerInformationResult::~GetCreateCustomerInformationResult()
{}

void GetCreateCustomerInformationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["URL"].isNull())
		uRL_ = value["URL"].asString();
	if(!value["CanBuyCard"].isNull())
		canBuyCard_ = value["CanBuyCard"].asString();

}

std::string GetCreateCustomerInformationResult::getCanBuyCard()const
{
	return canBuyCard_;
}

std::string GetCreateCustomerInformationResult::getURL()const
{
	return uRL_;
}

