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

#include <alibabacloud/ram/model/CreateVirtualMFADeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

CreateVirtualMFADeviceResult::CreateVirtualMFADeviceResult() :
	ServiceResult()
{}

CreateVirtualMFADeviceResult::CreateVirtualMFADeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateVirtualMFADeviceResult::~CreateVirtualMFADeviceResult()
{}

void CreateVirtualMFADeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto virtualMFADeviceNode = value["VirtualMFADevice"];
	if(!virtualMFADeviceNode["SerialNumber"].isNull())
		virtualMFADevice_.serialNumber = virtualMFADeviceNode["SerialNumber"].asString();
	if(!virtualMFADeviceNode["QRCodePNG"].isNull())
		virtualMFADevice_.qRCodePNG = virtualMFADeviceNode["QRCodePNG"].asString();
	if(!virtualMFADeviceNode["Base32StringSeed"].isNull())
		virtualMFADevice_.base32StringSeed = virtualMFADeviceNode["Base32StringSeed"].asString();

}

CreateVirtualMFADeviceResult::VirtualMFADevice CreateVirtualMFADeviceResult::getVirtualMFADevice()const
{
	return virtualMFADevice_;
}

