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

#include <alibabacloud/ens/model/DescribeDeviceServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeDeviceServiceResult::DescribeDeviceServiceResult() :
	ServiceResult()
{}

DescribeDeviceServiceResult::DescribeDeviceServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeviceServiceResult::~DescribeDeviceServiceResult()
{}

void DescribeDeviceServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceDetailInfosNode = value["ResourceDetailInfos"]["DeviceInfo"];
	for (auto valueResourceDetailInfosDeviceInfo : allResourceDetailInfosNode)
	{
		DeviceInfo resourceDetailInfosObject;
		if(!valueResourceDetailInfosDeviceInfo["RegionID"].isNull())
			resourceDetailInfosObject.regionID = valueResourceDetailInfosDeviceInfo["RegionID"].asString();
		if(!valueResourceDetailInfosDeviceInfo["ID"].isNull())
			resourceDetailInfosObject.iD = valueResourceDetailInfosDeviceInfo["ID"].asString();
		if(!valueResourceDetailInfosDeviceInfo["IP"].isNull())
			resourceDetailInfosObject.iP = valueResourceDetailInfosDeviceInfo["IP"].asString();
		if(!valueResourceDetailInfosDeviceInfo["Server"].isNull())
			resourceDetailInfosObject.server = valueResourceDetailInfosDeviceInfo["Server"].asString();
		if(!valueResourceDetailInfosDeviceInfo["Status"].isNull())
			resourceDetailInfosObject.status = valueResourceDetailInfosDeviceInfo["Status"].asString();
		if(!valueResourceDetailInfosDeviceInfo["Type"].isNull())
			resourceDetailInfosObject.type = valueResourceDetailInfosDeviceInfo["Type"].asString();
		if(!valueResourceDetailInfosDeviceInfo["Mac"].isNull())
			resourceDetailInfosObject.mac = valueResourceDetailInfosDeviceInfo["Mac"].asString();
		if(!valueResourceDetailInfosDeviceInfo["ISP"].isNull())
			resourceDetailInfosObject.iSP = valueResourceDetailInfosDeviceInfo["ISP"].asString();
		if(!valueResourceDetailInfosDeviceInfo["DeviceName"].isNull())
			resourceDetailInfosObject.deviceName = valueResourceDetailInfosDeviceInfo["DeviceName"].asString();
		if(!valueResourceDetailInfosDeviceInfo["ImageID"].isNull())
			resourceDetailInfosObject.imageID = valueResourceDetailInfosDeviceInfo["ImageID"].asString();
		resourceDetailInfos_.push_back(resourceDetailInfosObject);
	}
	auto allResourceInfosNode = value["ResourceInfos"]["ResourceInfosItem"];
	for (auto valueResourceInfosResourceInfosItem : allResourceInfosNode)
	{
		ResourceInfosItem resourceInfosObject;
		if(!valueResourceInfosResourceInfosItem["AppVersion"].isNull())
			resourceInfosObject.appVersion = valueResourceInfosResourceInfosItem["AppVersion"].asString();
		if(!valueResourceInfosResourceInfosItem["AreaCode"].isNull())
			resourceInfosObject.areaCode = valueResourceInfosResourceInfosItem["AreaCode"].asString();
		if(!valueResourceInfosResourceInfosItem["AreaName"].isNull())
			resourceInfosObject.areaName = valueResourceInfosResourceInfosItem["AreaName"].asString();
		if(!valueResourceInfosResourceInfosItem["CreateTime"].isNull())
			resourceInfosObject.createTime = valueResourceInfosResourceInfosItem["CreateTime"].asString();
		if(!valueResourceInfosResourceInfosItem["InstanceId"].isNull())
			resourceInfosObject.instanceId = valueResourceInfosResourceInfosItem["InstanceId"].asString();
		if(!valueResourceInfosResourceInfosItem["InstanceStatus"].isNull())
			resourceInfosObject.instanceStatus = valueResourceInfosResourceInfosItem["InstanceStatus"].asString();
		if(!valueResourceInfosResourceInfosItem["RegionCode"].isNull())
			resourceInfosObject.regionCode = valueResourceInfosResourceInfosItem["RegionCode"].asString();
		if(!valueResourceInfosResourceInfosItem["RegionId"].isNull())
			resourceInfosObject.regionId = valueResourceInfosResourceInfosItem["RegionId"].asString();
		if(!valueResourceInfosResourceInfosItem["RegionName"].isNull())
			resourceInfosObject.regionName = valueResourceInfosResourceInfosItem["RegionName"].asString();
		auto allDeviceInfosNode = valueResourceInfosResourceInfosItem["DeviceInfos"]["DeviceInfosItem"];
		for (auto valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItem : allDeviceInfosNode)
		{
			ResourceInfosItem::DeviceInfosItem deviceInfosObject;
			if(!valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItem["Name"].isNull())
				deviceInfosObject.name = valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItem["Name"].asString();
			if(!valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItem["Status"].isNull())
				deviceInfosObject.status = valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItem["Status"].asString();
			auto allNetworkNode = valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItem["Network"]["Ports"];
			for (auto valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItemNetworkPorts : allNetworkNode)
			{
				ResourceInfosItem::DeviceInfosItem::Ports networkObject;
				if(!valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItemNetworkPorts["ContainerPorts"].isNull())
					networkObject.containerPorts = valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItemNetworkPorts["ContainerPorts"].asString();
				if(!valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItemNetworkPorts["ExternalIp"].isNull())
					networkObject.externalIp = valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItemNetworkPorts["ExternalIp"].asString();
				if(!valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItemNetworkPorts["HostPorts"].isNull())
					networkObject.hostPorts = valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItemNetworkPorts["HostPorts"].asString();
				if(!valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItemNetworkPorts["Protocol"].isNull())
					networkObject.protocol = valueResourceInfosResourceInfosItemDeviceInfosDeviceInfosItemNetworkPorts["Protocol"].asString();
				deviceInfosObject.network.push_back(networkObject);
			}
			resourceInfosObject.deviceInfos.push_back(deviceInfosObject);
		}
		auto allInternalIpsNode = valueResourceInfosResourceInfosItem["InternalIps"]["InternalIpsItem"];
		for (auto valueResourceInfosResourceInfosItemInternalIpsInternalIpsItem : allInternalIpsNode)
		{
			ResourceInfosItem::InternalIpsItem internalIpsObject;
			if(!valueResourceInfosResourceInfosItemInternalIpsInternalIpsItem["Ip"].isNull())
				internalIpsObject.ip = valueResourceInfosResourceInfosItemInternalIpsInternalIpsItem["Ip"].asString();
			resourceInfosObject.internalIps.push_back(internalIpsObject);
		}
		auto allPublicIpsNode = valueResourceInfosResourceInfosItem["PublicIps"]["PublicIpsItem"];
		for (auto valueResourceInfosResourceInfosItemPublicIpsPublicIpsItem : allPublicIpsNode)
		{
			ResourceInfosItem::PublicIpsItem publicIpsObject;
			if(!valueResourceInfosResourceInfosItemPublicIpsPublicIpsItem["Ip"].isNull())
				publicIpsObject.ip = valueResourceInfosResourceInfosItemPublicIpsPublicIpsItem["Ip"].asString();
			resourceInfosObject.publicIps.push_back(publicIpsObject);
		}
		resourceInfos_.push_back(resourceInfosObject);
	}
	auto appStatusNode = value["AppStatus"];
	if(!appStatusNode["Phase"].isNull())
		appStatus_.phase = appStatusNode["Phase"].asString();
	if(!appStatusNode["StatusDescrip"].isNull())
		appStatus_.statusDescrip = appStatusNode["StatusDescrip"].asString();
	if(!appStatusNode["UpdateTime"].isNull())
		appStatus_.updateTime = appStatusNode["UpdateTime"].asString();
	auto appMetaDataNode = value["AppMetaData"];
	if(!appMetaDataNode["AppId"].isNull())
		appMetaData_.appId = appMetaDataNode["AppId"].asString();
	if(!appMetaDataNode["AppName"].isNull())
		appMetaData_.appName = appMetaDataNode["AppName"].asString();
	if(!appMetaDataNode["AppStableVersion"].isNull())
		appMetaData_.appStableVersion = appMetaDataNode["AppStableVersion"].asString();
	if(!appMetaDataNode["AppType"].isNull())
		appMetaData_.appType = appMetaDataNode["AppType"].asString();
	if(!appMetaDataNode["ClusterName"].isNull())
		appMetaData_.clusterName = appMetaDataNode["ClusterName"].asString();
	if(!appMetaDataNode["CreateTime"].isNull())
		appMetaData_.createTime = appMetaDataNode["CreateTime"].asString();
	if(!appMetaDataNode["Description"].isNull())
		appMetaData_.description = appMetaDataNode["Description"].asString();

}

DescribeDeviceServiceResult::AppStatus DescribeDeviceServiceResult::getAppStatus()const
{
	return appStatus_;
}

DescribeDeviceServiceResult::AppMetaData DescribeDeviceServiceResult::getAppMetaData()const
{
	return appMetaData_;
}

std::vector<DescribeDeviceServiceResult::DeviceInfo> DescribeDeviceServiceResult::getResourceDetailInfos()const
{
	return resourceDetailInfos_;
}

std::vector<DescribeDeviceServiceResult::ResourceInfosItem> DescribeDeviceServiceResult::getResourceInfos()const
{
	return resourceInfos_;
}

