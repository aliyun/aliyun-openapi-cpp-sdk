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

#include <alibabacloud/csas/model/UpdateUserDevicesSharingStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

UpdateUserDevicesSharingStatusResult::UpdateUserDevicesSharingStatusResult() :
	ServiceResult()
{}

UpdateUserDevicesSharingStatusResult::UpdateUserDevicesSharingStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateUserDevicesSharingStatusResult::~UpdateUserDevicesSharingStatusResult()
{}

void UpdateUserDevicesSharingStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDevicesNode = value["Devices"]["data"];
	for (auto valueDevicesdata : allDevicesNode)
	{
		Data devicesObject;
		if(!valueDevicesdata["DeviceTag"].isNull())
			devicesObject.deviceTag = valueDevicesdata["DeviceTag"].asString();
		if(!valueDevicesdata["DeviceType"].isNull())
			devicesObject.deviceType = valueDevicesdata["DeviceType"].asString();
		if(!valueDevicesdata["DeviceModel"].isNull())
			devicesObject.deviceModel = valueDevicesdata["DeviceModel"].asString();
		if(!valueDevicesdata["DeviceVersion"].isNull())
			devicesObject.deviceVersion = valueDevicesdata["DeviceVersion"].asString();
		if(!valueDevicesdata["Hostname"].isNull())
			devicesObject.hostname = valueDevicesdata["Hostname"].asString();
		if(!valueDevicesdata["Username"].isNull())
			devicesObject.username = valueDevicesdata["Username"].asString();
		if(!valueDevicesdata["SaseUserId"].isNull())
			devicesObject.saseUserId = valueDevicesdata["SaseUserId"].asString();
		if(!valueDevicesdata["Department"].isNull())
			devicesObject.department = valueDevicesdata["Department"].asString();
		if(!valueDevicesdata["InnerIP"].isNull())
			devicesObject.innerIP = valueDevicesdata["InnerIP"].asString();
		if(!valueDevicesdata["SrcIP"].isNull())
			devicesObject.srcIP = valueDevicesdata["SrcIP"].asString();
		if(!valueDevicesdata["Memory"].isNull())
			devicesObject.memory = valueDevicesdata["Memory"].asString();
		if(!valueDevicesdata["CPU"].isNull())
			devicesObject.cPU = valueDevicesdata["CPU"].asString();
		if(!valueDevicesdata["Disk"].isNull())
			devicesObject.disk = valueDevicesdata["Disk"].asString();
		if(!valueDevicesdata["Mac"].isNull())
			devicesObject.mac = valueDevicesdata["Mac"].asString();
		if(!valueDevicesdata["AppVersion"].isNull())
			devicesObject.appVersion = valueDevicesdata["AppVersion"].asString();
		if(!valueDevicesdata["DeviceBelong"].isNull())
			devicesObject.deviceBelong = valueDevicesdata["DeviceBelong"].asString();
		if(!valueDevicesdata["SharingStatus"].isNull())
			devicesObject.sharingStatus = valueDevicesdata["SharingStatus"].asString() == "true";
		if(!valueDevicesdata["DeviceStatus"].isNull())
			devicesObject.deviceStatus = valueDevicesdata["DeviceStatus"].asString();
		if(!valueDevicesdata["AppStatus"].isNull())
			devicesObject.appStatus = valueDevicesdata["AppStatus"].asString();
		if(!valueDevicesdata["PaStatus"].isNull())
			devicesObject.paStatus = valueDevicesdata["PaStatus"].asString();
		if(!valueDevicesdata["IaStatus"].isNull())
			devicesObject.iaStatus = valueDevicesdata["IaStatus"].asString();
		if(!valueDevicesdata["DlpStatus"].isNull())
			devicesObject.dlpStatus = valueDevicesdata["DlpStatus"].asString();
		if(!valueDevicesdata["NacStatus"].isNull())
			devicesObject.nacStatus = valueDevicesdata["NacStatus"].asString();
		if(!valueDevicesdata["CreateTime"].isNull())
			devicesObject.createTime = valueDevicesdata["CreateTime"].asString();
		if(!valueDevicesdata["UpdateTime"].isNull())
			devicesObject.updateTime = valueDevicesdata["UpdateTime"].asString();
		auto allNetInterfaceInfoNode = valueDevicesdata["NetInterfaceInfo"]["netInterfaceInfoItem"];
		for (auto valueDevicesdataNetInterfaceInfonetInterfaceInfoItem : allNetInterfaceInfoNode)
		{
			Data::NetInterfaceInfoItem netInterfaceInfoObject;
			if(!valueDevicesdataNetInterfaceInfonetInterfaceInfoItem["Name"].isNull())
				netInterfaceInfoObject.name = valueDevicesdataNetInterfaceInfonetInterfaceInfoItem["Name"].asString();
			if(!valueDevicesdataNetInterfaceInfonetInterfaceInfoItem["Mac"].isNull())
				netInterfaceInfoObject.mac = valueDevicesdataNetInterfaceInfonetInterfaceInfoItem["Mac"].asString();
			devicesObject.netInterfaceInfo.push_back(netInterfaceInfoObject);
		}
		devices_.push_back(devicesObject);
	}

}

std::vector<UpdateUserDevicesSharingStatusResult::Data> UpdateUserDevicesSharingStatusResult::getDevices()const
{
	return devices_;
}

