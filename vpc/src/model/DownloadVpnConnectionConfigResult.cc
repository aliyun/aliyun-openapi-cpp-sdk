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
	auto allVpnConnectionConfig = value["VpnConnectionConfig"];
	for (auto value : allVpnConnectionConfig)
	{
		VpnConnectionConfig vpnConnectionConfigObject;
		if(!value["LocalSubnet"].isNull())
			vpnConnectionConfigObject.localSubnet = value["LocalSubnet"].asString();
		if(!value["RemoteSubnet"].isNull())
			vpnConnectionConfigObject.remoteSubnet = value["RemoteSubnet"].asString();
		if(!value["Local"].isNull())
			vpnConnectionConfigObject.local = value["Local"].asString();
		if(!value["Remote"].isNull())
			vpnConnectionConfigObject.remote = value["Remote"].asString();
		auto allIkeConfig = value["IkeConfig"];
		for (auto value : allIkeConfig)
		{
			VpnConnectionConfig::IkeConfig ikeConfigObject;
			if(!value["Psk"].isNull())
				ikeConfigObject.psk = value["Psk"].asString();
			if(!value["IkeVersion"].isNull())
				ikeConfigObject.ikeVersion = value["IkeVersion"].asString();
			if(!value["IkeMode"].isNull())
				ikeConfigObject.ikeMode = value["IkeMode"].asString();
			if(!value["IkeEncAlg"].isNull())
				ikeConfigObject.ikeEncAlg = value["IkeEncAlg"].asString();
			if(!value["IkeAuthAlg"].isNull())
				ikeConfigObject.ikeAuthAlg = value["IkeAuthAlg"].asString();
			if(!value["IkePfs"].isNull())
				ikeConfigObject.ikePfs = value["IkePfs"].asString();
			if(!value["IkeLifetime"].isNull())
				ikeConfigObject.ikeLifetime = std::stol(value["IkeLifetime"].asString());
			if(!value["LocalId"].isNull())
				ikeConfigObject.localId = value["LocalId"].asString();
			if(!value["RemoteId"].isNull())
				ikeConfigObject.remoteId = value["RemoteId"].asString();
			vpnConnectionConfigObject.ikeConfig.push_back(ikeConfigObject);
		}
		auto allIpsecConfig = value["IpsecConfig"];
		for (auto value : allIpsecConfig)
		{
			VpnConnectionConfig::IpsecConfig ipsecConfigObject;
			if(!value["IpsecEncAlg"].isNull())
				ipsecConfigObject.ipsecEncAlg = value["IpsecEncAlg"].asString();
			if(!value["IpsecAuthAlg"].isNull())
				ipsecConfigObject.ipsecAuthAlg = value["IpsecAuthAlg"].asString();
			if(!value["IpsecPfs"].isNull())
				ipsecConfigObject.ipsecPfs = value["IpsecPfs"].asString();
			if(!value["IpsecLifetime"].isNull())
				ipsecConfigObject.ipsecLifetime = std::stol(value["IpsecLifetime"].asString());
			vpnConnectionConfigObject.ipsecConfig.push_back(ipsecConfigObject);
		}
		vpnConnectionConfig_.push_back(vpnConnectionConfigObject);
	}

}

std::vector<DownloadVpnConnectionConfigResult::VpnConnectionConfig> DownloadVpnConnectionConfigResult::getVpnConnectionConfig()const
{
	return vpnConnectionConfig_;
}

