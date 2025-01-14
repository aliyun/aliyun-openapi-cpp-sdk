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

#include <alibabacloud/csas/model/GetUserDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

GetUserDeviceResult::GetUserDeviceResult() :
	ServiceResult()
{}

GetUserDeviceResult::GetUserDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserDeviceResult::~GetUserDeviceResult()
{}

void GetUserDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto deviceNode = value["Device"];
	if(!deviceNode["DeviceTag"].isNull())
		device_.deviceTag = deviceNode["DeviceTag"].asString();
	if(!deviceNode["DeviceType"].isNull())
		device_.deviceType = deviceNode["DeviceType"].asString();
	if(!deviceNode["DeviceModel"].isNull())
		device_.deviceModel = deviceNode["DeviceModel"].asString();
	if(!deviceNode["DeviceVersion"].isNull())
		device_.deviceVersion = deviceNode["DeviceVersion"].asString();
	if(!deviceNode["Hostname"].isNull())
		device_.hostname = deviceNode["Hostname"].asString();
	if(!deviceNode["Username"].isNull())
		device_.username = deviceNode["Username"].asString();
	if(!deviceNode["SaseUserId"].isNull())
		device_.saseUserId = deviceNode["SaseUserId"].asString();
	if(!deviceNode["Department"].isNull())
		device_.department = deviceNode["Department"].asString();
	if(!deviceNode["InnerIP"].isNull())
		device_.innerIP = deviceNode["InnerIP"].asString();
	if(!deviceNode["SrcIP"].isNull())
		device_.srcIP = deviceNode["SrcIP"].asString();
	if(!deviceNode["Memory"].isNull())
		device_.memory = deviceNode["Memory"].asString();
	if(!deviceNode["CPU"].isNull())
		device_.cPU = deviceNode["CPU"].asString();
	if(!deviceNode["Disk"].isNull())
		device_.disk = deviceNode["Disk"].asString();
	if(!deviceNode["Mac"].isNull())
		device_.mac = deviceNode["Mac"].asString();
	if(!deviceNode["AppVersion"].isNull())
		device_.appVersion = deviceNode["AppVersion"].asString();
	if(!deviceNode["DeviceBelong"].isNull())
		device_.deviceBelong = deviceNode["DeviceBelong"].asString();
	if(!deviceNode["SharingStatus"].isNull())
		device_.sharingStatus = deviceNode["SharingStatus"].asString() == "true";
	if(!deviceNode["DeviceStatus"].isNull())
		device_.deviceStatus = deviceNode["DeviceStatus"].asString();
	if(!deviceNode["AppStatus"].isNull())
		device_.appStatus = deviceNode["AppStatus"].asString();
	if(!deviceNode["PaStatus"].isNull())
		device_.paStatus = deviceNode["PaStatus"].asString();
	if(!deviceNode["IaStatus"].isNull())
		device_.iaStatus = deviceNode["IaStatus"].asString();
	if(!deviceNode["DlpStatus"].isNull())
		device_.dlpStatus = deviceNode["DlpStatus"].asString();
	if(!deviceNode["NacStatus"].isNull())
		device_.nacStatus = deviceNode["NacStatus"].asString();
	if(!deviceNode["CreateTime"].isNull())
		device_.createTime = deviceNode["CreateTime"].asString();
	if(!deviceNode["UpdateTime"].isNull())
		device_.updateTime = deviceNode["UpdateTime"].asString();
	auto allHistoryUsersNode = deviceNode["HistoryUsers"]["historyUsersItem"];
	for (auto deviceNodeHistoryUsershistoryUsersItem : allHistoryUsersNode)
	{
		Device::HistoryUsersItem historyUsersItemObject;
		if(!deviceNodeHistoryUsershistoryUsersItem["Username"].isNull())
			historyUsersItemObject.username = deviceNodeHistoryUsershistoryUsersItem["Username"].asString();
		if(!deviceNodeHistoryUsershistoryUsersItem["SaseUserId"].isNull())
			historyUsersItemObject.saseUserId = deviceNodeHistoryUsershistoryUsersItem["SaseUserId"].asString();
		device_.historyUsers.push_back(historyUsersItemObject);
	}
	auto allNetInterfaceInfoNode = deviceNode["NetInterfaceInfo"]["netInterfaceInfoItem"];
	for (auto deviceNodeNetInterfaceInfonetInterfaceInfoItem : allNetInterfaceInfoNode)
	{
		Device::NetInterfaceInfoItem netInterfaceInfoItemObject;
		if(!deviceNodeNetInterfaceInfonetInterfaceInfoItem["Name"].isNull())
			netInterfaceInfoItemObject.name = deviceNodeNetInterfaceInfonetInterfaceInfoItem["Name"].asString();
		if(!deviceNodeNetInterfaceInfonetInterfaceInfoItem["Mac"].isNull())
			netInterfaceInfoItemObject.mac = deviceNodeNetInterfaceInfonetInterfaceInfoItem["Mac"].asString();
		device_.netInterfaceInfo.push_back(netInterfaceInfoItemObject);
	}

}

GetUserDeviceResult::Device GetUserDeviceResult::getDevice()const
{
	return device_;
}

