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

#include <alibabacloud/eflo/model/GetNetworkInterfaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetNetworkInterfaceResult::GetNetworkInterfaceResult() :
	ServiceResult()
{}

GetNetworkInterfaceResult::GetNetworkInterfaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNetworkInterfaceResult::~GetNetworkInterfaceResult()
{}

void GetNetworkInterfaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["TenantId"].isNull())
		content_.tenantId = contentNode["TenantId"].asString();
	if(!contentNode["RegionId"].isNull())
		content_.regionId = contentNode["RegionId"].asString();
	if(!contentNode["NetworkInterfaceId"].isNull())
		content_.networkInterfaceId = contentNode["NetworkInterfaceId"].asString();
	if(!contentNode["NodeId"].isNull())
		content_.nodeId = contentNode["NodeId"].asString();
	if(!contentNode["ZoneId"].isNull())
		content_.zoneId = contentNode["ZoneId"].asString();
	if(!contentNode["Ip"].isNull())
		content_.ip = contentNode["Ip"].asString();
	if(!contentNode["ServiceMac"].isNull())
		content_.serviceMac = contentNode["ServiceMac"].asString();
	if(!contentNode["Status"].isNull())
		content_.status = contentNode["Status"].asString();
	if(!contentNode["Gateway"].isNull())
		content_.gateway = contentNode["Gateway"].asString();
	if(!contentNode["CreateTime"].isNull())
		content_.createTime = contentNode["CreateTime"].asString();
	if(!contentNode["Quota"].isNull())
		content_.quota = std::stoi(contentNode["Quota"].asString());
	if(!contentNode["NcType"].isNull())
		content_.ncType = contentNode["NcType"].asString();
	if(!contentNode["NetworkInterfaceName"].isNull())
		content_.networkInterfaceName = contentNode["NetworkInterfaceName"].asString();
	auto allPrivateIpAddressMacGroupNode = contentNode["PrivateIpAddressMacGroup"]["PrivateIpAddressMacGroupItem"];
	for (auto contentNodePrivateIpAddressMacGroupPrivateIpAddressMacGroupItem : allPrivateIpAddressMacGroupNode)
	{
		Content::PrivateIpAddressMacGroupItem privateIpAddressMacGroupItemObject;
		if(!contentNodePrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["IpName"].isNull())
			privateIpAddressMacGroupItemObject.ipName = contentNodePrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["IpName"].asString();
		if(!contentNodePrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["PrivateIpAddress"].isNull())
			privateIpAddressMacGroupItemObject.privateIpAddress = contentNodePrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["PrivateIpAddress"].asString();
		if(!contentNodePrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["IpAddressMac"].isNull())
			privateIpAddressMacGroupItemObject.ipAddressMac = contentNodePrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["IpAddressMac"].asString();
		if(!contentNodePrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["Status"].isNull())
			privateIpAddressMacGroupItemObject.status = contentNodePrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["Status"].asString();
		if(!contentNodePrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["Description"].isNull())
			privateIpAddressMacGroupItemObject.description = contentNodePrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["Description"].asString();
		if(!contentNodePrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["Message"].isNull())
			privateIpAddressMacGroupItemObject.message = contentNodePrivateIpAddressMacGroupPrivateIpAddressMacGroupItem["Message"].asString();
		content_.privateIpAddressMacGroup.push_back(privateIpAddressMacGroupItemObject);
	}
	auto vpdBaseInfoNode = contentNode["VpdBaseInfo"];
	if(!vpdBaseInfoNode["VpdId"].isNull())
		content_.vpdBaseInfo.vpdId = vpdBaseInfoNode["VpdId"].asString();
	if(!vpdBaseInfoNode["VpdName"].isNull())
		content_.vpdBaseInfo.vpdName = vpdBaseInfoNode["VpdName"].asString();
	if(!vpdBaseInfoNode["Cidr"].isNull())
		content_.vpdBaseInfo.cidr = vpdBaseInfoNode["Cidr"].asString();
	if(!vpdBaseInfoNode["CreateTime"].isNull())
		content_.vpdBaseInfo.createTime = vpdBaseInfoNode["CreateTime"].asString();
	auto subnetBaseInfoNode = contentNode["SubnetBaseInfo"];
	if(!subnetBaseInfoNode["SubnetId"].isNull())
		content_.subnetBaseInfo.subnetId = subnetBaseInfoNode["SubnetId"].asString();
	if(!subnetBaseInfoNode["SubnetName"].isNull())
		content_.subnetBaseInfo.subnetName = subnetBaseInfoNode["SubnetName"].asString();
	if(!subnetBaseInfoNode["Cidr"].isNull())
		content_.subnetBaseInfo.cidr = subnetBaseInfoNode["Cidr"].asString();
	if(!subnetBaseInfoNode["CreateTime"].isNull())
		content_.subnetBaseInfo.createTime = subnetBaseInfoNode["CreateTime"].asString();
		auto allEthernet = contentNode["Ethernet"]["Ethernet"];
		for (auto value : allEthernet)
			content_.ethernet.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetNetworkInterfaceResult::getMessage()const
{
	return message_;
}

GetNetworkInterfaceResult::Content GetNetworkInterfaceResult::getContent()const
{
	return content_;
}

int GetNetworkInterfaceResult::getCode()const
{
	return code_;
}

