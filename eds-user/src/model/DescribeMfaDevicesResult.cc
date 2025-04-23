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

#include <alibabacloud/eds-user/model/DescribeMfaDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eds_user;
using namespace AlibabaCloud::Eds_user::Model;

DescribeMfaDevicesResult::DescribeMfaDevicesResult() :
	ServiceResult()
{}

DescribeMfaDevicesResult::DescribeMfaDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMfaDevicesResult::~DescribeMfaDevicesResult()
{}

void DescribeMfaDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMfaDevicesNode = value["MfaDevices"]["data"];
	for (auto valueMfaDevicesdata : allMfaDevicesNode)
	{
		Data mfaDevicesObject;
		if(!valueMfaDevicesdata["Id"].isNull())
			mfaDevicesObject.id = std::stol(valueMfaDevicesdata["Id"].asString());
		if(!valueMfaDevicesdata["EndUserId"].isNull())
			mfaDevicesObject.endUserId = valueMfaDevicesdata["EndUserId"].asString();
		if(!valueMfaDevicesdata["Email"].isNull())
			mfaDevicesObject.email = valueMfaDevicesdata["Email"].asString();
		if(!valueMfaDevicesdata["GmtEnabled"].isNull())
			mfaDevicesObject.gmtEnabled = valueMfaDevicesdata["GmtEnabled"].asString();
		if(!valueMfaDevicesdata["GmtUnlock"].isNull())
			mfaDevicesObject.gmtUnlock = valueMfaDevicesdata["GmtUnlock"].asString();
		if(!valueMfaDevicesdata["ConsecutiveFails"].isNull())
			mfaDevicesObject.consecutiveFails = std::stoi(valueMfaDevicesdata["ConsecutiveFails"].asString());
		if(!valueMfaDevicesdata["SerialNumber"].isNull())
			mfaDevicesObject.serialNumber = valueMfaDevicesdata["SerialNumber"].asString();
		if(!valueMfaDevicesdata["Status"].isNull())
			mfaDevicesObject.status = valueMfaDevicesdata["Status"].asString();
		if(!valueMfaDevicesdata["DeviceType"].isNull())
			mfaDevicesObject.deviceType = valueMfaDevicesdata["DeviceType"].asString();
		mfaDevices_.push_back(mfaDevicesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeMfaDevicesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeMfaDevicesResult::Data> DescribeMfaDevicesResult::getMfaDevices()const
{
	return mfaDevices_;
}

