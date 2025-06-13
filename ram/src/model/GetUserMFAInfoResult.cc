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

#include <alibabacloud/ram/model/GetUserMFAInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

GetUserMFAInfoResult::GetUserMFAInfoResult() :
	ServiceResult()
{}

GetUserMFAInfoResult::GetUserMFAInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserMFAInfoResult::~GetUserMFAInfoResult()
{}

void GetUserMFAInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto mFADeviceNode = value["MFADevice"];
	if(!mFADeviceNode["SerialNumber"].isNull())
		mFADevice_.serialNumber = mFADeviceNode["SerialNumber"].asString();
	if(!mFADeviceNode["Type"].isNull())
		mFADevice_.type = mFADeviceNode["Type"].asString();

}

GetUserMFAInfoResult::MFADevice GetUserMFAInfoResult::getMFADevice()const
{
	return mFADevice_;
}

