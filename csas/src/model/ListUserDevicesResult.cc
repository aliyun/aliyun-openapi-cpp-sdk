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

#include <alibabacloud/csas/model/ListUserDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListUserDevicesResult::ListUserDevicesResult() :
	ServiceResult()
{}

ListUserDevicesResult::ListUserDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserDevicesResult::~ListUserDevicesResult()
{}

void ListUserDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDevicesNode = value["Devices"]["dataList"];
	for (auto valueDevicesdataList : allDevicesNode)
	{
		DataList devicesObject;
		if(!valueDevicesdataList["DeviceTag"].isNull())
			devicesObject.deviceTag = valueDevicesdataList["DeviceTag"].asString();
		if(!valueDevicesdataList["DeviceType"].isNull())
			devicesObject.deviceType = valueDevicesdataList["DeviceType"].asString();
		if(!valueDevicesdataList["DeviceModel"].isNull())
			devicesObject.deviceModel = valueDevicesdataList["DeviceModel"].asString();
		if(!valueDevicesdataList["DeviceVersion"].isNull())
			devicesObject.deviceVersion = valueDevicesdataList["DeviceVersion"].asString();
		if(!valueDevicesdataList["Hostname"].isNull())
			devicesObject.hostname = valueDevicesdataList["Hostname"].asString();
		if(!valueDevicesdataList["Username"].isNull())
			devicesObject.username = valueDevicesdataList["Username"].asString();
		if(!valueDevicesdataList["SaseUserId"].isNull())
			devicesObject.saseUserId = valueDevicesdataList["SaseUserId"].asString();
		if(!valueDevicesdataList["Department"].isNull())
			devicesObject.department = valueDevicesdataList["Department"].asString();
		if(!valueDevicesdataList["InnerIP"].isNull())
			devicesObject.innerIP = valueDevicesdataList["InnerIP"].asString();
		if(!valueDevicesdataList["SrcIP"].isNull())
			devicesObject.srcIP = valueDevicesdataList["SrcIP"].asString();
		if(!valueDevicesdataList["Memory"].isNull())
			devicesObject.memory = valueDevicesdataList["Memory"].asString();
		if(!valueDevicesdataList["CPU"].isNull())
			devicesObject.cPU = valueDevicesdataList["CPU"].asString();
		if(!valueDevicesdataList["Disk"].isNull())
			devicesObject.disk = valueDevicesdataList["Disk"].asString();
		if(!valueDevicesdataList["Mac"].isNull())
			devicesObject.mac = valueDevicesdataList["Mac"].asString();
		if(!valueDevicesdataList["AppVersion"].isNull())
			devicesObject.appVersion = valueDevicesdataList["AppVersion"].asString();
		if(!valueDevicesdataList["DeviceBelong"].isNull())
			devicesObject.deviceBelong = valueDevicesdataList["DeviceBelong"].asString();
		if(!valueDevicesdataList["SharingStatus"].isNull())
			devicesObject.sharingStatus = valueDevicesdataList["SharingStatus"].asString() == "true";
		if(!valueDevicesdataList["DeviceStatus"].isNull())
			devicesObject.deviceStatus = valueDevicesdataList["DeviceStatus"].asString();
		if(!valueDevicesdataList["AppStatus"].isNull())
			devicesObject.appStatus = valueDevicesdataList["AppStatus"].asString();
		if(!valueDevicesdataList["PaStatus"].isNull())
			devicesObject.paStatus = valueDevicesdataList["PaStatus"].asString();
		if(!valueDevicesdataList["IaStatus"].isNull())
			devicesObject.iaStatus = valueDevicesdataList["IaStatus"].asString();
		if(!valueDevicesdataList["DlpStatus"].isNull())
			devicesObject.dlpStatus = valueDevicesdataList["DlpStatus"].asString();
		if(!valueDevicesdataList["NacStatus"].isNull())
			devicesObject.nacStatus = valueDevicesdataList["NacStatus"].asString();
		if(!valueDevicesdataList["CreateTime"].isNull())
			devicesObject.createTime = valueDevicesdataList["CreateTime"].asString();
		if(!valueDevicesdataList["UpdateTime"].isNull())
			devicesObject.updateTime = valueDevicesdataList["UpdateTime"].asString();
		auto allNetInterfaceInfoNode = valueDevicesdataList["NetInterfaceInfo"]["netInterfaceInfoItem"];
		for (auto valueDevicesdataListNetInterfaceInfonetInterfaceInfoItem : allNetInterfaceInfoNode)
		{
			DataList::NetInterfaceInfoItem netInterfaceInfoObject;
			if(!valueDevicesdataListNetInterfaceInfonetInterfaceInfoItem["Name"].isNull())
				netInterfaceInfoObject.name = valueDevicesdataListNetInterfaceInfonetInterfaceInfoItem["Name"].asString();
			if(!valueDevicesdataListNetInterfaceInfonetInterfaceInfoItem["Mac"].isNull())
				netInterfaceInfoObject.mac = valueDevicesdataListNetInterfaceInfonetInterfaceInfoItem["Mac"].asString();
			devicesObject.netInterfaceInfo.push_back(netInterfaceInfoObject);
		}
		devices_.push_back(devicesObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());

}

long ListUserDevicesResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<ListUserDevicesResult::DataList> ListUserDevicesResult::getDevices()const
{
	return devices_;
}

