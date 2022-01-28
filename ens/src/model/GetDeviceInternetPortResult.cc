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

#include <alibabacloud/ens/model/GetDeviceInternetPortResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

GetDeviceInternetPortResult::GetDeviceInternetPortResult() :
	ServiceResult()
{}

GetDeviceInternetPortResult::GetDeviceInternetPortResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDeviceInternetPortResult::~GetDeviceInternetPortResult()
{}

void GetDeviceInternetPortResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetworkInfoNode = value["NetworkInfo"]["NetworkInfoItem"];
	for (auto valueNetworkInfoNetworkInfoItem : allNetworkInfoNode)
	{
		NetworkInfoItem networkInfoObject;
		if(!valueNetworkInfoNetworkInfoItem["InternalIp"].isNull())
			networkInfoObject.internalIp = valueNetworkInfoNetworkInfoItem["InternalIp"].asString();
		if(!valueNetworkInfoNetworkInfoItem["InternalPort"].isNull())
			networkInfoObject.internalPort = valueNetworkInfoNetworkInfoItem["InternalPort"].asString();
		if(!valueNetworkInfoNetworkInfoItem["ExternalIp"].isNull())
			networkInfoObject.externalIp = valueNetworkInfoNetworkInfoItem["ExternalIp"].asString();
		if(!valueNetworkInfoNetworkInfoItem["ExternalPort"].isNull())
			networkInfoObject.externalPort = valueNetworkInfoNetworkInfoItem["ExternalPort"].asString();
		if(!valueNetworkInfoNetworkInfoItem["ISP"].isNull())
			networkInfoObject.iSP = valueNetworkInfoNetworkInfoItem["ISP"].asString();
		if(!valueNetworkInfoNetworkInfoItem["Status"].isNull())
			networkInfoObject.status = valueNetworkInfoNetworkInfoItem["Status"].asString();
		networkInfo_.push_back(networkInfoObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::vector<GetDeviceInternetPortResult::NetworkInfoItem> GetDeviceInternetPortResult::getNetworkInfo()const
{
	return networkInfo_;
}

std::string GetDeviceInternetPortResult::getInstanceId()const
{
	return instanceId_;
}

