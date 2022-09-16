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

#include <alibabacloud/ecd/model/DescribeVirtualMFADevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeVirtualMFADevicesResult::DescribeVirtualMFADevicesResult() :
	ServiceResult()
{}

DescribeVirtualMFADevicesResult::DescribeVirtualMFADevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVirtualMFADevicesResult::~DescribeVirtualMFADevicesResult()
{}

void DescribeVirtualMFADevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVirtualMFADevicesNode = value["VirtualMFADevices"]["VirtualMFADevice"];
	for (auto valueVirtualMFADevicesVirtualMFADevice : allVirtualMFADevicesNode)
	{
		VirtualMFADevice virtualMFADevicesObject;
		if(!valueVirtualMFADevicesVirtualMFADevice["SerialNumber"].isNull())
			virtualMFADevicesObject.serialNumber = valueVirtualMFADevicesVirtualMFADevice["SerialNumber"].asString();
		if(!valueVirtualMFADevicesVirtualMFADevice["GmtUnlock"].isNull())
			virtualMFADevicesObject.gmtUnlock = valueVirtualMFADevicesVirtualMFADevice["GmtUnlock"].asString();
		if(!valueVirtualMFADevicesVirtualMFADevice["EndUserId"].isNull())
			virtualMFADevicesObject.endUserId = valueVirtualMFADevicesVirtualMFADevice["EndUserId"].asString();
		if(!valueVirtualMFADevicesVirtualMFADevice["ConsecutiveFails"].isNull())
			virtualMFADevicesObject.consecutiveFails = std::stoi(valueVirtualMFADevicesVirtualMFADevice["ConsecutiveFails"].asString());
		if(!valueVirtualMFADevicesVirtualMFADevice["OfficeSiteId"].isNull())
			virtualMFADevicesObject.officeSiteId = valueVirtualMFADevicesVirtualMFADevice["OfficeSiteId"].asString();
		if(!valueVirtualMFADevicesVirtualMFADevice["status"].isNull())
			virtualMFADevicesObject.status = valueVirtualMFADevicesVirtualMFADevice["status"].asString();
		if(!valueVirtualMFADevicesVirtualMFADevice["DirectoryId"].isNull())
			virtualMFADevicesObject.directoryId = valueVirtualMFADevicesVirtualMFADevice["DirectoryId"].asString();
		if(!valueVirtualMFADevicesVirtualMFADevice["GmtEnabled"].isNull())
			virtualMFADevicesObject.gmtEnabled = valueVirtualMFADevicesVirtualMFADevice["GmtEnabled"].asString();
		virtualMFADevices_.push_back(virtualMFADevicesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<DescribeVirtualMFADevicesResult::VirtualMFADevice> DescribeVirtualMFADevicesResult::getVirtualMFADevices()const
{
	return virtualMFADevices_;
}

std::string DescribeVirtualMFADevicesResult::getNextToken()const
{
	return nextToken_;
}

