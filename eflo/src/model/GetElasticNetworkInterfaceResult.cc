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

#include <alibabacloud/eflo/model/GetElasticNetworkInterfaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetElasticNetworkInterfaceResult::GetElasticNetworkInterfaceResult() :
	ServiceResult()
{}

GetElasticNetworkInterfaceResult::GetElasticNetworkInterfaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetElasticNetworkInterfaceResult::~GetElasticNetworkInterfaceResult()
{}

void GetElasticNetworkInterfaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["RegionId"].isNull())
		content_.regionId = contentNode["RegionId"].asString();
	if(!contentNode["ZoneId"].isNull())
		content_.zoneId = contentNode["ZoneId"].asString();
	if(!contentNode["ElasticNetworkInterfaceId"].isNull())
		content_.elasticNetworkInterfaceId = contentNode["ElasticNetworkInterfaceId"].asString();
	if(!contentNode["NodeId"].isNull())
		content_.nodeId = contentNode["NodeId"].asString();
	if(!contentNode["Status"].isNull())
		content_.status = contentNode["Status"].asString();
	if(!contentNode["Ip"].isNull())
		content_.ip = contentNode["Ip"].asString();
	if(!contentNode["VpcId"].isNull())
		content_.vpcId = contentNode["VpcId"].asString();
	if(!contentNode["VSwitchId"].isNull())
		content_.vSwitchId = contentNode["VSwitchId"].asString();
	if(!contentNode["Message"].isNull())
		content_.message = contentNode["Message"].asString();
	if(!contentNode["Mac"].isNull())
		content_.mac = contentNode["Mac"].asString();
	if(!contentNode["Type"].isNull())
		content_.type = contentNode["Type"].asString();
	if(!contentNode["Gateway"].isNull())
		content_.gateway = contentNode["Gateway"].asString();
	if(!contentNode["Mask"].isNull())
		content_.mask = contentNode["Mask"].asString();
	if(!contentNode["CreateTime"].isNull())
		content_.createTime = contentNode["CreateTime"].asString();
	if(!contentNode["GmtModified"].isNull())
		content_.gmtModified = contentNode["GmtModified"].asString();
	if(!contentNode["Description"].isNull())
		content_.description = contentNode["Description"].asString();
	if(!contentNode["SecurityGroupId"].isNull())
		content_.securityGroupId = contentNode["SecurityGroupId"].asString();
	if(!contentNode["EnableJumboFrame"].isNull())
		content_.enableJumboFrame = contentNode["EnableJumboFrame"].asString() == "true";
	auto allPrivateIpAddressesNode = contentNode["PrivateIpAddresses"]["PrivateIpAddress"];
	for (auto contentNodePrivateIpAddressesPrivateIpAddress : allPrivateIpAddressesNode)
	{
		Content::PrivateIpAddress privateIpAddressObject;
		if(!contentNodePrivateIpAddressesPrivateIpAddress["ElasticNetworkInterfaceId"].isNull())
			privateIpAddressObject.elasticNetworkInterfaceId = contentNodePrivateIpAddressesPrivateIpAddress["ElasticNetworkInterfaceId"].asString();
		if(!contentNodePrivateIpAddressesPrivateIpAddress["RegionId"].isNull())
			privateIpAddressObject.regionId = contentNodePrivateIpAddressesPrivateIpAddress["RegionId"].asString();
		if(!contentNodePrivateIpAddressesPrivateIpAddress["GmtCreate"].isNull())
			privateIpAddressObject.gmtCreate = contentNodePrivateIpAddressesPrivateIpAddress["GmtCreate"].asString();
		if(!contentNodePrivateIpAddressesPrivateIpAddress["GmtModified"].isNull())
			privateIpAddressObject.gmtModified = contentNodePrivateIpAddressesPrivateIpAddress["GmtModified"].asString();
		if(!contentNodePrivateIpAddressesPrivateIpAddress["IpName"].isNull())
			privateIpAddressObject.ipName = contentNodePrivateIpAddressesPrivateIpAddress["IpName"].asString();
		if(!contentNodePrivateIpAddressesPrivateIpAddress["PrivateIpAddress"].isNull())
			privateIpAddressObject.privateIpAddress = contentNodePrivateIpAddressesPrivateIpAddress["PrivateIpAddress"].asString();
		if(!contentNodePrivateIpAddressesPrivateIpAddress["Status"].isNull())
			privateIpAddressObject.status = contentNodePrivateIpAddressesPrivateIpAddress["Status"].asString();
		if(!contentNodePrivateIpAddressesPrivateIpAddress["Description"].isNull())
			privateIpAddressObject.description = contentNodePrivateIpAddressesPrivateIpAddress["Description"].asString();
		if(!contentNodePrivateIpAddressesPrivateIpAddress["Message"].isNull())
			privateIpAddressObject.message = contentNodePrivateIpAddressesPrivateIpAddress["Message"].asString();
		content_.privateIpAddresses.push_back(privateIpAddressObject);
	}
	auto allIpv6AddressesNode = contentNode["Ipv6Addresses"]["Ipv6Addresse"];
	for (auto contentNodeIpv6AddressesIpv6Addresse : allIpv6AddressesNode)
	{
		Content::Ipv6Addresse ipv6AddresseObject;
		if(!contentNodeIpv6AddressesIpv6Addresse["ElasticNetworkInterfaceId"].isNull())
			ipv6AddresseObject.elasticNetworkInterfaceId = contentNodeIpv6AddressesIpv6Addresse["ElasticNetworkInterfaceId"].asString();
		if(!contentNodeIpv6AddressesIpv6Addresse["IpName"].isNull())
			ipv6AddresseObject.ipName = contentNodeIpv6AddressesIpv6Addresse["IpName"].asString();
		if(!contentNodeIpv6AddressesIpv6Addresse["Ipv6Address"].isNull())
			ipv6AddresseObject.ipv6Address = contentNodeIpv6AddressesIpv6Addresse["Ipv6Address"].asString();
		if(!contentNodeIpv6AddressesIpv6Addresse["Status"].isNull())
			ipv6AddresseObject.status = contentNodeIpv6AddressesIpv6Addresse["Status"].asString();
		if(!contentNodeIpv6AddressesIpv6Addresse["Description"].isNull())
			ipv6AddresseObject.description = contentNodeIpv6AddressesIpv6Addresse["Description"].asString();
		if(!contentNodeIpv6AddressesIpv6Addresse["Message"].isNull())
			ipv6AddresseObject.message = contentNodeIpv6AddressesIpv6Addresse["Message"].asString();
		if(!contentNodeIpv6AddressesIpv6Addresse["RegionId"].isNull())
			ipv6AddresseObject.regionId = contentNodeIpv6AddressesIpv6Addresse["RegionId"].asString();
		if(!contentNodeIpv6AddressesIpv6Addresse["GmtCreate"].isNull())
			ipv6AddresseObject.gmtCreate = contentNodeIpv6AddressesIpv6Addresse["GmtCreate"].asString();
		if(!contentNodeIpv6AddressesIpv6Addresse["GmtModified"].isNull())
			ipv6AddresseObject.gmtModified = contentNodeIpv6AddressesIpv6Addresse["GmtModified"].asString();
		content_.ipv6Addresses.push_back(ipv6AddresseObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetElasticNetworkInterfaceResult::getMessage()const
{
	return message_;
}

GetElasticNetworkInterfaceResult::Content GetElasticNetworkInterfaceResult::getContent()const
{
	return content_;
}

int GetElasticNetworkInterfaceResult::getCode()const
{
	return code_;
}

