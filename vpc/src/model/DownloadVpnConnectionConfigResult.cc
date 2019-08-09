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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto vpnConnectionConfigNode = value["VpnConnectionConfig"];
	if(!vpnConnectionConfigNode["LocalSubnet"].isNull())
		vpnConnectionConfig_.localSubnet = vpnConnectionConfigNode["LocalSubnet"].asString();
	if(!vpnConnectionConfigNode["RemoteSubnet"].isNull())
		vpnConnectionConfig_.remoteSubnet = vpnConnectionConfigNode["RemoteSubnet"].asString();
	if(!vpnConnectionConfigNode["Local"].isNull())
		vpnConnectionConfig_.local = vpnConnectionConfigNode["Local"].asString();
	if(!vpnConnectionConfigNode["Remote"].isNull())
		vpnConnectionConfig_.remote = vpnConnectionConfigNode["Remote"].asString();
	auto ikeConfigNode = vpnConnectionConfigNode["IkeConfig"];
	if(!ikeConfigNode["Psk"].isNull())
		vpnConnectionConfig_.ikeConfig.psk = ikeConfigNode["Psk"].asString();
	if(!ikeConfigNode["IkeVersion"].isNull())
		vpnConnectionConfig_.ikeConfig.ikeVersion = ikeConfigNode["IkeVersion"].asString();
	if(!ikeConfigNode["IkeMode"].isNull())
		vpnConnectionConfig_.ikeConfig.ikeMode = ikeConfigNode["IkeMode"].asString();
	if(!ikeConfigNode["IkeEncAlg"].isNull())
		vpnConnectionConfig_.ikeConfig.ikeEncAlg = ikeConfigNode["IkeEncAlg"].asString();
	if(!ikeConfigNode["IkeAuthAlg"].isNull())
		vpnConnectionConfig_.ikeConfig.ikeAuthAlg = ikeConfigNode["IkeAuthAlg"].asString();
	if(!ikeConfigNode["IkePfs"].isNull())
		vpnConnectionConfig_.ikeConfig.ikePfs = ikeConfigNode["IkePfs"].asString();
	if(!ikeConfigNode["IkeLifetime"].isNull())
		vpnConnectionConfig_.ikeConfig.ikeLifetime = std::stol(ikeConfigNode["IkeLifetime"].asString());
	if(!ikeConfigNode["LocalId"].isNull())
		vpnConnectionConfig_.ikeConfig.localId = ikeConfigNode["LocalId"].asString();
	if(!ikeConfigNode["RemoteId"].isNull())
		vpnConnectionConfig_.ikeConfig.remoteId = ikeConfigNode["RemoteId"].asString();
	auto ipsecConfigNode = vpnConnectionConfigNode["IpsecConfig"];
	if(!ipsecConfigNode["IpsecEncAlg"].isNull())
		vpnConnectionConfig_.ipsecConfig.ipsecEncAlg = ipsecConfigNode["IpsecEncAlg"].asString();
	if(!ipsecConfigNode["IpsecAuthAlg"].isNull())
		vpnConnectionConfig_.ipsecConfig.ipsecAuthAlg = ipsecConfigNode["IpsecAuthAlg"].asString();
	if(!ipsecConfigNode["IpsecPfs"].isNull())
		vpnConnectionConfig_.ipsecConfig.ipsecPfs = ipsecConfigNode["IpsecPfs"].asString();
	if(!ipsecConfigNode["IpsecLifetime"].isNull())
		vpnConnectionConfig_.ipsecConfig.ipsecLifetime = std::stol(ipsecConfigNode["IpsecLifetime"].asString());

}

DownloadVpnConnectionConfigResult::VpnConnectionConfig DownloadVpnConnectionConfigResult::getVpnConnectionConfig()const
{
	return vpnConnectionConfig_;
}

