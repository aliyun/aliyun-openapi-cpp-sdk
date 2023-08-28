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

#include <alibabacloud/eflo/model/ListNetworkInterfacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

ListNetworkInterfacesResult::ListNetworkInterfacesResult() :
	ServiceResult()
{}

ListNetworkInterfacesResult::ListNetworkInterfacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNetworkInterfacesResult::~ListNetworkInterfacesResult()
{}

void ListNetworkInterfacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["Total"].isNull())
		content_.total = std::stol(contentNode["Total"].asString());
	auto allDataNode = contentNode["Data"]["DataItem"];
	for (auto contentNodeDataDataItem : allDataNode)
	{
		Content::DataItem dataItemObject;
		if(!contentNodeDataDataItem["TenantId"].isNull())
			dataItemObject.tenantId = contentNodeDataDataItem["TenantId"].asString();
		if(!contentNodeDataDataItem["RegionId"].isNull())
			dataItemObject.regionId = contentNodeDataDataItem["RegionId"].asString();
		if(!contentNodeDataDataItem["NetworkInterfaceId"].isNull())
			dataItemObject.networkInterfaceId = contentNodeDataDataItem["NetworkInterfaceId"].asString();
		if(!contentNodeDataDataItem["NodeId"].isNull())
			dataItemObject.nodeId = contentNodeDataDataItem["NodeId"].asString();
		if(!contentNodeDataDataItem["ZoneId"].isNull())
			dataItemObject.zoneId = contentNodeDataDataItem["ZoneId"].asString();
		if(!contentNodeDataDataItem["Ip"].isNull())
			dataItemObject.ip = contentNodeDataDataItem["Ip"].asString();
		if(!contentNodeDataDataItem["ServiceMac"].isNull())
			dataItemObject.serviceMac = contentNodeDataDataItem["ServiceMac"].asString();
		if(!contentNodeDataDataItem["Status"].isNull())
			dataItemObject.status = contentNodeDataDataItem["Status"].asString();
		if(!contentNodeDataDataItem["Gateway"].isNull())
			dataItemObject.gateway = contentNodeDataDataItem["Gateway"].asString();
		if(!contentNodeDataDataItem["CreateTime"].isNull())
			dataItemObject.createTime = contentNodeDataDataItem["CreateTime"].asString();
		if(!contentNodeDataDataItem["Quota"].isNull())
			dataItemObject.quota = std::stoi(contentNodeDataDataItem["Quota"].asString());
		if(!contentNodeDataDataItem["NcType"].isNull())
			dataItemObject.ncType = contentNodeDataDataItem["NcType"].asString();
		if(!contentNodeDataDataItem["NetworkInterfaceName"].isNull())
			dataItemObject.networkInterfaceName = contentNodeDataDataItem["NetworkInterfaceName"].asString();
		auto allPrivateIpAddressMacGroupNode = contentNodeDataDataItem["PrivateIpAddressMacGroup"]["PrivateIpAddressMacGroupItem"];
		for (auto contentNodeDataDataItemPrivateIpAddressMacGroupPrivateIpAddressMacGroupItem : allPrivateIpAddressMacGroupNode)
		{
			Content::DataItem::PrivateIpAddressMacGroupItem privateIpAddressMacGroupObject;
			if(!contentNodeDataDataItemPrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["IpName"].isNull())
				privateIpAddressMacGroupObject.ipName = contentNodeDataDataItemPrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["IpName"].asString();
			if(!contentNodeDataDataItemPrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["PrivateIpAddress"].isNull())
				privateIpAddressMacGroupObject.privateIpAddress = contentNodeDataDataItemPrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["PrivateIpAddress"].asString();
			if(!contentNodeDataDataItemPrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["IpAddressMac"].isNull())
				privateIpAddressMacGroupObject.ipAddressMac = contentNodeDataDataItemPrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["IpAddressMac"].asString();
			if(!contentNodeDataDataItemPrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["Status"].isNull())
				privateIpAddressMacGroupObject.status = contentNodeDataDataItemPrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["Status"].asString();
			if(!contentNodeDataDataItemPrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["Description"].isNull())
				privateIpAddressMacGroupObject.description = contentNodeDataDataItemPrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["Description"].asString();
			if(!contentNodeDataDataItemPrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["Message"].isNull())
				privateIpAddressMacGroupObject.message = contentNodeDataDataItemPrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["Message"].asString();
			dataItemObject.privateIpAddressMacGroup.push_back(privateIpAddressMacGroupObject);
		}
		auto vpdBaseInfoNode = value["VpdBaseInfo"];
		if(!vpdBaseInfoNode["VpdId"].isNull())
			dataItemObject.vpdBaseInfo.vpdId = vpdBaseInfoNode["VpdId"].asString();
		if(!vpdBaseInfoNode["VpdName"].isNull())
			dataItemObject.vpdBaseInfo.vpdName = vpdBaseInfoNode["VpdName"].asString();
		if(!vpdBaseInfoNode["Cidr"].isNull())
			dataItemObject.vpdBaseInfo.cidr = vpdBaseInfoNode["Cidr"].asString();
		if(!vpdBaseInfoNode["CreateTime"].isNull())
			dataItemObject.vpdBaseInfo.createTime = vpdBaseInfoNode["CreateTime"].asString();
		auto subnetBaseInfoNode = value["SubnetBaseInfo"];
		if(!subnetBaseInfoNode["SubnetId"].isNull())
			dataItemObject.subnetBaseInfo.subnetId = subnetBaseInfoNode["SubnetId"].asString();
		if(!subnetBaseInfoNode["SubnetName"].isNull())
			dataItemObject.subnetBaseInfo.subnetName = subnetBaseInfoNode["SubnetName"].asString();
		if(!subnetBaseInfoNode["Cidr"].isNull())
			dataItemObject.subnetBaseInfo.cidr = subnetBaseInfoNode["Cidr"].asString();
		if(!subnetBaseInfoNode["CreateTime"].isNull())
			dataItemObject.subnetBaseInfo.createTime = subnetBaseInfoNode["CreateTime"].asString();
		auto allEthernet = value["Ethernet"]["Ethernet"];
		for (auto value : allEthernet)
			dataItemObject.ethernet.push_back(value.asString());
		content_.data.push_back(dataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListNetworkInterfacesResult::getMessage()const
{
	return message_;
}

ListNetworkInterfacesResult::Content ListNetworkInterfacesResult::getContent()const
{
	return content_;
}

int ListNetworkInterfacesResult::getCode()const
{
	return code_;
}

