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

#include <alibabacloud/eiam/model/GetForgetPasswordConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetForgetPasswordConfigurationResult::GetForgetPasswordConfigurationResult() :
	ServiceResult()
{}

GetForgetPasswordConfigurationResult::GetForgetPasswordConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetForgetPasswordConfigurationResult::~GetForgetPasswordConfigurationResult()
{}

void GetForgetPasswordConfigurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto openForgetPasswordConfigurationNode = value["OpenForgetPasswordConfiguration"];
	if(!openForgetPasswordConfigurationNode["Enable"].isNull())
		openForgetPasswordConfiguration_.enable = openForgetPasswordConfigurationNode["Enable"].asString() == "true";
	if(!openForgetPasswordConfigurationNode["EnableSms"].isNull())
		openForgetPasswordConfiguration_.enableSms = openForgetPasswordConfigurationNode["EnableSms"].asString() == "true";
	if(!openForgetPasswordConfigurationNode["EnableEmail"].isNull())
		openForgetPasswordConfiguration_.enableEmail = openForgetPasswordConfigurationNode["EnableEmail"].asString() == "true";
	if(!openForgetPasswordConfigurationNode["ForgetPasswordStatus"].isNull())
		openForgetPasswordConfiguration_.forgetPasswordStatus = openForgetPasswordConfigurationNode["ForgetPasswordStatus"].asString();
		auto allAuthenticationChannels = openForgetPasswordConfigurationNode["AuthenticationChannels"]["AuthenticationChannel"];
		for (auto value : allAuthenticationChannels)
			openForgetPasswordConfiguration_.authenticationChannels.push_back(value.asString());

}

GetForgetPasswordConfigurationResult::OpenForgetPasswordConfiguration GetForgetPasswordConfigurationResult::getOpenForgetPasswordConfiguration()const
{
	return openForgetPasswordConfiguration_;
}

