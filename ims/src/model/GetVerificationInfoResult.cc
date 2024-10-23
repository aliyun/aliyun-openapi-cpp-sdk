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

#include <alibabacloud/ims/model/GetVerificationInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

GetVerificationInfoResult::GetVerificationInfoResult() :
	ServiceResult()
{}

GetVerificationInfoResult::GetVerificationInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVerificationInfoResult::~GetVerificationInfoResult()
{}

void GetVerificationInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto securityPhoneDeviceNode = value["SecurityPhoneDevice"];
	if(!securityPhoneDeviceNode["AreaCode"].isNull())
		securityPhoneDevice_.areaCode = securityPhoneDeviceNode["AreaCode"].asString();
	if(!securityPhoneDeviceNode["PhoneNumber"].isNull())
		securityPhoneDevice_.phoneNumber = securityPhoneDeviceNode["PhoneNumber"].asString();
	if(!securityPhoneDeviceNode["Status"].isNull())
		securityPhoneDevice_.status = securityPhoneDeviceNode["Status"].asString();
	auto securityEmailDeviceNode = value["SecurityEmailDevice"];
	if(!securityEmailDeviceNode["Email"].isNull())
		securityEmailDevice_.email = securityEmailDeviceNode["Email"].asString();
	if(!securityEmailDeviceNode["Status"].isNull())
		securityEmailDevice_.status = securityEmailDeviceNode["Status"].asString();

}

GetVerificationInfoResult::SecurityEmailDevice GetVerificationInfoResult::getSecurityEmailDevice()const
{
	return securityEmailDevice_;
}

GetVerificationInfoResult::SecurityPhoneDevice GetVerificationInfoResult::getSecurityPhoneDevice()const
{
	return securityPhoneDevice_;
}

