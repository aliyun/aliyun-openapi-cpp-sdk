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

#include <alibabacloud/eflo/model/GetVccResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetVccResult::GetVccResult() :
	ServiceResult()
{}

GetVccResult::GetVccResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVccResult::~GetVccResult()
{}

void GetVccResult::parse(const std::string &payload)
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
	if(!contentNode["ZoneId"].isNull())
		content_.zoneId = contentNode["ZoneId"].asString();
	if(!contentNode["VccId"].isNull())
		content_.vccId = contentNode["VccId"].asString();
	if(!contentNode["VpdId"].isNull())
		content_.vpdId = contentNode["VpdId"].asString();
	if(!contentNode["VpcId"].isNull())
		content_.vpcId = contentNode["VpcId"].asString();
	if(!contentNode["VSwitchId"].isNull())
		content_.vSwitchId = contentNode["VSwitchId"].asString();
	if(!contentNode["CenId"].isNull())
		content_.cenId = contentNode["CenId"].asString();
	if(!contentNode["VccName"].isNull())
		content_.vccName = contentNode["VccName"].asString();
	if(!contentNode["AccessPointId"].isNull())
		content_.accessPointId = contentNode["AccessPointId"].asString();
	if(!contentNode["LineOperator"].isNull())
		content_.lineOperator = contentNode["LineOperator"].asString();
	if(!contentNode["Spec"].isNull())
		content_.spec = contentNode["Spec"].asString();
	if(!contentNode["PortType"].isNull())
		content_.portType = contentNode["PortType"].asString();
	if(!contentNode["PricingCycle"].isNull())
		content_.pricingCycle = contentNode["PricingCycle"].asString();
	if(!contentNode["PayType"].isNull())
		content_.payType = contentNode["PayType"].asString();
	if(!contentNode["Duration"].isNull())
		content_.duration = contentNode["Duration"].asString();
	if(!contentNode["Status"].isNull())
		content_.status = contentNode["Status"].asString();
	if(!contentNode["CurrentNode"].isNull())
		content_.currentNode = contentNode["CurrentNode"].asString();
	if(!contentNode["InternetChargeType"].isNull())
		content_.internetChargeType = contentNode["InternetChargeType"].asString();
	if(!contentNode["BandwidthStr"].isNull())
		content_.bandwidthStr = contentNode["BandwidthStr"].asString();
	if(!contentNode["Message"].isNull())
		content_.message = contentNode["Message"].asString();
	if(!contentNode["CreateTime"].isNull())
		content_.createTime = contentNode["CreateTime"].asString();
	if(!contentNode["GmtModified"].isNull())
		content_.gmtModified = contentNode["GmtModified"].asString();
	if(!contentNode["CommodityCode"].isNull())
		content_.commodityCode = contentNode["CommodityCode"].asString();
	if(!contentNode["BgpCidr"].isNull())
		content_.bgpCidr = contentNode["BgpCidr"].asString();
	if(!contentNode["ExpirationDate"].isNull())
		content_.expirationDate = contentNode["ExpirationDate"].asString();
	if(!contentNode["AttachErStatus"].isNull())
		content_.attachErStatus = contentNode["AttachErStatus"].asString() == "true";
	if(!contentNode["ResourceGroupId"].isNull())
		content_.resourceGroupId = contentNode["ResourceGroupId"].asString();
	if(!contentNode["ConnectionType"].isNull())
		content_.connectionType = contentNode["ConnectionType"].asString();
	if(!contentNode["CenOwnerId"].isNull())
		content_.cenOwnerId = contentNode["CenOwnerId"].asString();
	if(!contentNode["BgpAsn"].isNull())
		content_.bgpAsn = contentNode["BgpAsn"].asString();
	auto allErInfosNode = contentNode["ErInfos"]["ErInfo"];
	for (auto contentNodeErInfosErInfo : allErInfosNode)
	{
		Content::ErInfo erInfoObject;
		if(!contentNodeErInfosErInfo["CreateTime"].isNull())
			erInfoObject.createTime = contentNodeErInfosErInfo["CreateTime"].asString();
		if(!contentNodeErInfosErInfo["GmtModified"].isNull())
			erInfoObject.gmtModified = contentNodeErInfosErInfo["GmtModified"].asString();
		if(!contentNodeErInfosErInfo["Message"].isNull())
			erInfoObject.message = contentNodeErInfosErInfo["Message"].asString();
		if(!contentNodeErInfosErInfo["ErId"].isNull())
			erInfoObject.erId = contentNodeErInfosErInfo["ErId"].asString();
		if(!contentNodeErInfosErInfo["RegionId"].isNull())
			erInfoObject.regionId = contentNodeErInfosErInfo["RegionId"].asString();
		if(!contentNodeErInfosErInfo["TenantId"].isNull())
			erInfoObject.tenantId = contentNodeErInfosErInfo["TenantId"].asString();
		if(!contentNodeErInfosErInfo["Status"].isNull())
			erInfoObject.status = contentNodeErInfosErInfo["Status"].asString();
		if(!contentNodeErInfosErInfo["ErName"].isNull())
			erInfoObject.erName = contentNodeErInfosErInfo["ErName"].asString();
		if(!contentNodeErInfosErInfo["MasterZoneId"].isNull())
			erInfoObject.masterZoneId = contentNodeErInfosErInfo["MasterZoneId"].asString();
		if(!contentNodeErInfosErInfo["Description"].isNull())
			erInfoObject.description = contentNodeErInfosErInfo["Description"].asString();
		if(!contentNodeErInfosErInfo["Connections"].isNull())
			erInfoObject.connections = std::stol(contentNodeErInfosErInfo["Connections"].asString());
		if(!contentNodeErInfosErInfo["RouteMaps"].isNull())
			erInfoObject.routeMaps = std::stol(contentNodeErInfosErInfo["RouteMaps"].asString());
		content_.erInfos.push_back(erInfoObject);
	}
	auto allAliyunRouterInfoNode = contentNode["AliyunRouterInfo"]["AliyunRouterInfoItem"];
	for (auto contentNodeAliyunRouterInfoAliyunRouterInfoItem : allAliyunRouterInfoNode)
	{
		Content::AliyunRouterInfoItem aliyunRouterInfoItemObject;
		if(!contentNodeAliyunRouterInfoAliyunRouterInfoItem["PcId"].isNull())
			aliyunRouterInfoItemObject.pcId = contentNodeAliyunRouterInfoAliyunRouterInfoItem["PcId"].asString();
		if(!contentNodeAliyunRouterInfoAliyunRouterInfoItem["VbrId"].isNull())
			aliyunRouterInfoItemObject.vbrId = contentNodeAliyunRouterInfoAliyunRouterInfoItem["VbrId"].asString();
		if(!contentNodeAliyunRouterInfoAliyunRouterInfoItem["LocalGatewayIp"].isNull())
			aliyunRouterInfoItemObject.localGatewayIp = contentNodeAliyunRouterInfoAliyunRouterInfoItem["LocalGatewayIp"].asString();
		if(!contentNodeAliyunRouterInfoAliyunRouterInfoItem["PeerGatewayIp"].isNull())
			aliyunRouterInfoItemObject.peerGatewayIp = contentNodeAliyunRouterInfoAliyunRouterInfoItem["PeerGatewayIp"].asString();
		if(!contentNodeAliyunRouterInfoAliyunRouterInfoItem["Mask"].isNull())
			aliyunRouterInfoItemObject.mask = contentNodeAliyunRouterInfoAliyunRouterInfoItem["Mask"].asString();
		if(!contentNodeAliyunRouterInfoAliyunRouterInfoItem["VlanId"].isNull())
			aliyunRouterInfoItemObject.vlanId = contentNodeAliyunRouterInfoAliyunRouterInfoItem["VlanId"].asString();
		content_.aliyunRouterInfo.push_back(aliyunRouterInfoItemObject);
	}
	auto allCisRouterInfoNode = contentNode["CisRouterInfo"]["CisRouterInfoItem"];
	for (auto contentNodeCisRouterInfoCisRouterInfoItem : allCisRouterInfoNode)
	{
		Content::CisRouterInfoItem cisRouterInfoItemObject;
		if(!contentNodeCisRouterInfoCisRouterInfoItem["CcrId"].isNull())
			cisRouterInfoItemObject.ccrId = contentNodeCisRouterInfoCisRouterInfoItem["CcrId"].asString();
		auto allCcInfosNode = contentNodeCisRouterInfoCisRouterInfoItem["CcInfos"]["CcInfo"];
		for (auto contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo : allCcInfosNode)
		{
			Content::CisRouterInfoItem::CcInfo ccInfosObject;
			if(!contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["CcId"].isNull())
				ccInfosObject.ccId = contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["CcId"].asString();
			if(!contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["VlanId"].isNull())
				ccInfosObject.vlanId = contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["VlanId"].asString();
			if(!contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["LocalGatewayIp"].isNull())
				ccInfosObject.localGatewayIp = contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["LocalGatewayIp"].asString();
			if(!contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["RemoteGatewayIp"].isNull())
				ccInfosObject.remoteGatewayIp = contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["RemoteGatewayIp"].asString();
			if(!contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["SubnetMask"].isNull())
				ccInfosObject.subnetMask = contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["SubnetMask"].asString();
			if(!contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["Status"].isNull())
				ccInfosObject.status = contentNodeCisRouterInfoCisRouterInfoItemCcInfosCcInfo["Status"].asString();
			cisRouterInfoItemObject.ccInfos.push_back(ccInfosObject);
		}
		content_.cisRouterInfo.push_back(cisRouterInfoItemObject);
	}
	auto allTagsNode = contentNode["Tags"]["Tag"];
	for (auto contentNodeTagsTag : allTagsNode)
	{
		Content::Tag tagObject;
		if(!contentNodeTagsTag["TagKey"].isNull())
			tagObject.tagKey = contentNodeTagsTag["TagKey"].asString();
		if(!contentNodeTagsTag["TagValue"].isNull())
			tagObject.tagValue = contentNodeTagsTag["TagValue"].asString();
		content_.tags.push_back(tagObject);
	}
	auto allVbrInfosNode = contentNode["VbrInfos"]["VbrInfo"];
	for (auto contentNodeVbrInfosVbrInfo : allVbrInfosNode)
	{
		Content::VbrInfo vbrInfoObject;
		if(!contentNodeVbrInfosVbrInfo["VbrId"].isNull())
			vbrInfoObject.vbrId = contentNodeVbrInfosVbrInfo["VbrId"].asString();
		if(!contentNodeVbrInfosVbrInfo["CenId"].isNull())
			vbrInfoObject.cenId = contentNodeVbrInfosVbrInfo["CenId"].asString();
		if(!contentNodeVbrInfosVbrInfo["Status"].isNull())
			vbrInfoObject.status = contentNodeVbrInfosVbrInfo["Status"].asString();
		if(!contentNodeVbrInfosVbrInfo["GmtCreate"].isNull())
			vbrInfoObject.gmtCreate = contentNodeVbrInfosVbrInfo["GmtCreate"].asString();
		if(!contentNodeVbrInfosVbrInfo["GmtModified"].isNull())
			vbrInfoObject.gmtModified = contentNodeVbrInfosVbrInfo["GmtModified"].asString();
		auto allVbrBgpPeersNode = contentNodeVbrInfosVbrInfo["VbrBgpPeers"]["VbrBgpPeer"];
		for (auto contentNodeVbrInfosVbrInfoVbrBgpPeersVbrBgpPeer : allVbrBgpPeersNode)
		{
			Content::VbrInfo::VbrBgpPeer vbrBgpPeersObject;
			if(!contentNodeVbrInfosVbrInfoVbrBgpPeersVbrBgpPeer["BgpGroupId"].isNull())
				vbrBgpPeersObject.bgpGroupId = contentNodeVbrInfosVbrInfoVbrBgpPeersVbrBgpPeer["BgpGroupId"].asString();
			if(!contentNodeVbrInfosVbrInfoVbrBgpPeersVbrBgpPeer["BgpPeerId"].isNull())
				vbrBgpPeersObject.bgpPeerId = contentNodeVbrInfosVbrInfoVbrBgpPeersVbrBgpPeer["BgpPeerId"].asString();
			if(!contentNodeVbrInfosVbrInfoVbrBgpPeersVbrBgpPeer["PeerIpAddress"].isNull())
				vbrBgpPeersObject.peerIpAddress = contentNodeVbrInfosVbrInfoVbrBgpPeersVbrBgpPeer["PeerIpAddress"].asString();
			if(!contentNodeVbrInfosVbrInfoVbrBgpPeersVbrBgpPeer["PeerAsn"].isNull())
				vbrBgpPeersObject.peerAsn = contentNodeVbrInfosVbrInfoVbrBgpPeersVbrBgpPeer["PeerAsn"].asString();
			if(!contentNodeVbrInfosVbrInfoVbrBgpPeersVbrBgpPeer["Status"].isNull())
				vbrBgpPeersObject.status = contentNodeVbrInfosVbrInfoVbrBgpPeersVbrBgpPeer["Status"].asString();
			vbrInfoObject.vbrBgpPeers.push_back(vbrBgpPeersObject);
		}
		content_.vbrInfos.push_back(vbrInfoObject);
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
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetVccResult::getMessage()const
{
	return message_;
}

GetVccResult::Content GetVccResult::getContent()const
{
	return content_;
}

int GetVccResult::getCode()const
{
	return code_;
}

