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

#include <alibabacloud/ims/model/ListVirtualMFADevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

ListVirtualMFADevicesResult::ListVirtualMFADevicesResult() :
	ServiceResult()
{}

ListVirtualMFADevicesResult::ListVirtualMFADevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVirtualMFADevicesResult::~ListVirtualMFADevicesResult()
{}

void ListVirtualMFADevicesResult::parse(const std::string &payload)
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
		if(!valueVirtualMFADevicesVirtualMFADevice["ActivateDate"].isNull())
			virtualMFADevicesObject.activateDate = valueVirtualMFADevicesVirtualMFADevice["ActivateDate"].asString();
		auto userNode = value["User"];
		if(!userNode["UserPrincipalName"].isNull())
			virtualMFADevicesObject.user.userPrincipalName = userNode["UserPrincipalName"].asString();
		if(!userNode["DisplayName"].isNull())
			virtualMFADevicesObject.user.displayName = userNode["DisplayName"].asString();
		if(!userNode["UserId"].isNull())
			virtualMFADevicesObject.user.userId = userNode["UserId"].asString();
		virtualMFADevices_.push_back(virtualMFADevicesObject);
	}
	if(!value["IsTruncated"].isNull())
		isTruncated_ = value["IsTruncated"].asString() == "true";
	if(!value["Marker"].isNull())
		marker_ = value["Marker"].asString();

}

std::vector<ListVirtualMFADevicesResult::VirtualMFADevice> ListVirtualMFADevicesResult::getVirtualMFADevices()const
{
	return virtualMFADevices_;
}

bool ListVirtualMFADevicesResult::getIsTruncated()const
{
	return isTruncated_;
}

std::string ListVirtualMFADevicesResult::getMarker()const
{
	return marker_;
}

