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

#include <alibabacloud/vpc/model/DownloadVpnConnectionConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DownloadVpnConnectionConfigResult::DownloadVpnConnectionConfigResult() :
	ServiceResult()
{}

DownloadVpnConnectionConfigResult::DownloadVpnConnectionConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DownloadVpnConnectionConfigResult::~DownloadVpnConnectionConfigResult()
{}

void DownloadVpnConnectionConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto vpnConnectionConfigNode = value["VpnConnectionConfig"];
	if(!vpnConnectionConfigNode["Remote"].isNull())
		vpnConnectionConfig_.remote = vpnConnectionConfigNode["Remote"].asString();
	if(!vpnConnectionConfigNode["Local"].isNull())
		vpnConnectionConfig_.local = vpnConnectionConfigNode["Local"].asString();
	if(!vpnConnectionConfigNode["RemoteSubnet"].isNull())
		vpnConnectionConfig_.remoteSubnet = vpnConnectionConfigNode["RemoteSubnet"].asString();
	if(!vpnConnectionConfigNode["LocalSubnet"].isNull())
		vpnConnectionConfig_.localSubnet = vpnConnectionConfigNode["LocalSubnet"].asString();
	auto allTunnelsConfigNode = vpnConnectionConfigNode["TunnelsConfig"]["TunnelConfig"];
	for (auto vpnConnectionConfigNodeTunnelsConfigTunnelConfig : allTunnelsConfigNode)
	{
		VpnConnectionConfig::TunnelConfig tunnelConfigObject;
		if(!vpnConnectionConfigNodeTunnelsConfigTunnelConfig["TunnelId"].isNull())
			tunnelConfigObject.tunnelId = vpnConnectionConfigNodeTunnelsConfigTunnelConfig["TunnelId"].asString();
		if(!vpnConnectionConfigNodeTunnelsConfigTunnelConfig["Local"].isNull())
			tunnelConfigObject.local = vpnConnectionConfigNodeTunnelsConfigTunnelConfig["Local"].asString();
		if(!vpnConnectionConfigNodeTunnelsConfigTunnelConfig["Remote"].isNull())
			tunnelConfigObject.remote = vpnConnectionConfigNodeTunnelsConfigTunnelConfig["Remote"].asString();
		auto ikeConfig1Node = value["IkeConfig"];
		if(!ikeConfig1Node["Psk"].isNull())
			tunnelConfigObject.ikeConfig1.psk = ikeConfig1Node["Psk"].asString();
		if(!ikeConfig1Node["IkeVersion"].isNull())
			tunnelConfigObject.ikeConfig1.ikeVersion = ikeConfig1Node["IkeVersion"].asString();
		if(!ikeConfig1Node["IkeMode"].isNull())
			tunnelConfigObject.ikeConfig1.ikeMode = ikeConfig1Node["IkeMode"].asString();
		if(!ikeConfig1Node["IkeEncAlg"].isNull())
			tunnelConfigObject.ikeConfig1.ikeEncAlg = ikeConfig1Node["IkeEncAlg"].asString();
		if(!ikeConfig1Node["IkeAuthAlg"].isNull())
			tunnelConfigObject.ikeConfig1.ikeAuthAlg = ikeConfig1Node["IkeAuthAlg"].asString();
		if(!ikeConfig1Node["IkePfs"].isNull())
			tunnelConfigObject.ikeConfig1.ikePfs = ikeConfig1Node["IkePfs"].asString();
		if(!ikeConfig1Node["IkeLifetime"].isNull())
			tunnelConfigObject.ikeConfig1.ikeLifetime = std::stol(ikeConfig1Node["IkeLifetime"].asString());
		if(!ikeConfig1Node["LocalId"].isNull())
			tunnelConfigObject.ikeConfig1.localId = ikeConfig1Node["LocalId"].asString();
		if(!ikeConfig1Node["RemoteId"].isNull())
			tunnelConfigObject.ikeConfig1.remoteId = ikeConfig1Node["RemoteId"].asString();
		auto ipsecConfig2Node = value["IpsecConfig"];
		if(!ipsecConfig2Node["IpsecAuthAlg"].isNull())
			tunnelConfigObject.ipsecConfig2.ipsecAuthAlg = ipsecConfig2Node["IpsecAuthAlg"].asString();
		if(!ipsecConfig2Node["IpsecEncAlg"].isNull())
			tunnelConfigObject.ipsecConfig2.ipsecEncAlg = ipsecConfig2Node["IpsecEncAlg"].asString();
		if(!ipsecConfig2Node["IpsecPfs"].isNull())
			tunnelConfigObject.ipsecConfig2.ipsecPfs = ipsecConfig2Node["IpsecPfs"].asString();
		if(!ipsecConfig2Node["IpsecLifetime"].isNull())
			tunnelConfigObject.ipsecConfig2.ipsecLifetime = std::stol(ipsecConfig2Node["IpsecLifetime"].asString());
		vpnConnectionConfig_.tunnelsConfig.push_back(tunnelConfigObject);
	}
	auto allBgpConfigsNode = vpnConnectionConfigNode["BgpConfigs"]["BgpConfig"];
	for (auto vpnConnectionConfigNodeBgpConfigsBgpConfig : allBgpConfigsNode)
	{
		VpnConnectionConfig::BgpConfig bgpConfigObject;
		if(!vpnConnectionConfigNodeBgpConfigsBgpConfig["LocalAsn"].isNull())
			bgpConfigObject.localAsn = vpnConnectionConfigNodeBgpConfigsBgpConfig["LocalAsn"].asString();
		if(!vpnConnectionConfigNodeBgpConfigsBgpConfig["LocalBgpIp"].isNull())
			bgpConfigObject.localBgpIp = vpnConnectionConfigNodeBgpConfigsBgpConfig["LocalBgpIp"].asString();
		if(!vpnConnectionConfigNodeBgpConfigsBgpConfig["PeerAsn"].isNull())
			bgpConfigObject.peerAsn = vpnConnectionConfigNodeBgpConfigsBgpConfig["PeerAsn"].asString();
		if(!vpnConnectionConfigNodeBgpConfigsBgpConfig["PeerBgpIp"].isNull())
			bgpConfigObject.peerBgpIp = vpnConnectionConfigNodeBgpConfigsBgpConfig["PeerBgpIp"].asString();
		if(!vpnConnectionConfigNodeBgpConfigsBgpConfig["TunnelCidr"].isNull())
			bgpConfigObject.tunnelCidr = vpnConnectionConfigNodeBgpConfigsBgpConfig["TunnelCidr"].asString();
		if(!vpnConnectionConfigNodeBgpConfigsBgpConfig["TunnelId"].isNull())
			bgpConfigObject.tunnelId = vpnConnectionConfigNodeBgpConfigsBgpConfig["TunnelId"].asString();
		vpnConnectionConfig_.bgpConfigs.push_back(bgpConfigObject);
	}
	auto ikeConfigNode = vpnConnectionConfigNode["IkeConfig"];
	if(!ikeConfigNode["RemoteId"].isNull())
		vpnConnectionConfig_.ikeConfig.remoteId = ikeConfigNode["RemoteId"].asString();
	if(!ikeConfigNode["IkeLifetime"].isNull())
		vpnConnectionConfig_.ikeConfig.ikeLifetime = std::stol(ikeConfigNode["IkeLifetime"].asString());
	if(!ikeConfigNode["IkeEncAlg"].isNull())
		vpnConnectionConfig_.ikeConfig.ikeEncAlg = ikeConfigNode["IkeEncAlg"].asString();
	if(!ikeConfigNode["LocalId"].isNull())
		vpnConnectionConfig_.ikeConfig.localId = ikeConfigNode["LocalId"].asString();
	if(!ikeConfigNode["IkeMode"].isNull())
		vpnConnectionConfig_.ikeConfig.ikeMode = ikeConfigNode["IkeMode"].asString();
	if(!ikeConfigNode["IkeVersion"].isNull())
		vpnConnectionConfig_.ikeConfig.ikeVersion = ikeConfigNode["IkeVersion"].asString();
	if(!ikeConfigNode["IkePfs"].isNull())
		vpnConnectionConfig_.ikeConfig.ikePfs = ikeConfigNode["IkePfs"].asString();
	if(!ikeConfigNode["Psk"].isNull())
		vpnConnectionConfig_.ikeConfig.psk = ikeConfigNode["Psk"].asString();
	if(!ikeConfigNode["IkeAuthAlg"].isNull())
		vpnConnectionConfig_.ikeConfig.ikeAuthAlg = ikeConfigNode["IkeAuthAlg"].asString();
	auto ipsecConfigNode = vpnConnectionConfigNode["IpsecConfig"];
	if(!ipsecConfigNode["IpsecAuthAlg"].isNull())
		vpnConnectionConfig_.ipsecConfig.ipsecAuthAlg = ipsecConfigNode["IpsecAuthAlg"].asString();
	if(!ipsecConfigNode["IpsecEncAlg"].isNull())
		vpnConnectionConfig_.ipsecConfig.ipsecEncAlg = ipsecConfigNode["IpsecEncAlg"].asString();
	if(!ipsecConfigNode["IpsecLifetime"].isNull())
		vpnConnectionConfig_.ipsecConfig.ipsecLifetime = std::stol(ipsecConfigNode["IpsecLifetime"].asString());
	if(!ipsecConfigNode["IpsecPfs"].isNull())
		vpnConnectionConfig_.ipsecConfig.ipsecPfs = ipsecConfigNode["IpsecPfs"].asString();

}

DownloadVpnConnectionConfigResult::VpnConnectionConfig DownloadVpnConnectionConfigResult::getVpnConnectionConfig()const
{
	return vpnConnectionConfig_;
}

