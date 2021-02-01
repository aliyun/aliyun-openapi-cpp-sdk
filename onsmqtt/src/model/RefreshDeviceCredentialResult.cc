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

#include <alibabacloud/onsmqtt/model/RefreshDeviceCredentialResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OnsMqtt;
using namespace AlibabaCloud::OnsMqtt::Model;

RefreshDeviceCredentialResult::RefreshDeviceCredentialResult() :
	ServiceResult()
{}

RefreshDeviceCredentialResult::RefreshDeviceCredentialResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RefreshDeviceCredentialResult::~RefreshDeviceCredentialResult()
{}

void RefreshDeviceCredentialResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto deviceCredentialNode = value["DeviceCredential"];
	if(!deviceCredentialNode["ClientId"].isNull())
		deviceCredential_.clientId = deviceCredentialNode["ClientId"].asString();
	if(!deviceCredentialNode["DeviceAccessKeyId"].isNull())
		deviceCredential_.deviceAccessKeyId = deviceCredentialNode["DeviceAccessKeyId"].asString();
	if(!deviceCredentialNode["DeviceAccessKeySecret"].isNull())
		deviceCredential_.deviceAccessKeySecret = deviceCredentialNode["DeviceAccessKeySecret"].asString();
	if(!deviceCredentialNode["InstanceId"].isNull())
		deviceCredential_.instanceId = deviceCredentialNode["InstanceId"].asString();
	if(!deviceCredentialNode["CreateTime"].isNull())
		deviceCredential_.createTime = std::stol(deviceCredentialNode["CreateTime"].asString());
	if(!deviceCredentialNode["UpdateTime"].isNull())
		deviceCredential_.updateTime = std::stol(deviceCredentialNode["UpdateTime"].asString());

}

RefreshDeviceCredentialResult::DeviceCredential RefreshDeviceCredentialResult::getDeviceCredential()const
{
	return deviceCredential_;
}

