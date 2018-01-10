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
		vpnConnectionConfigObject.localSubnet = value["LocalSubnet"].asString();
		vpnConnectionConfigObject.remoteSubnet = value["RemoteSubnet"].asString();
		vpnConnectionConfigObject.local = value["Local"].asString();
		vpnConnectionConfigObject.remote = value["Remote"].asString();
		auto allIkeConfig = value["IkeConfig"];
		for (auto value : allIkeConfig)
		{
			VpnConnectionConfig::IkeConfig ikeConfigObject;
			ikeConfigObject.psk = value["Psk"].asString();
			ikeConfigObject.ikeVersion = value["IkeVersion"].asString();
			ikeConfigObject.ikeMode = value["IkeMode"].asString();
			ikeConfigObject.ikeEncAlg = value["IkeEncAlg"].asString();
			ikeConfigObject.ikeAuthAlg = value["IkeAuthAlg"].asString();
			ikeConfigObject.ikePfs = value["IkePfs"].asString();
			ikeConfigObject.ikeLifetime = std::stol(value["IkeLifetime"].asString());
			ikeConfigObject.localId = value["LocalId"].asString();
			ikeConfigObject.remoteId = value["RemoteId"].asString();
			vpnConnectionConfigObject.ikeConfig.push_back(ikeConfigObject);
		}
		auto allIpsecConfig = value["IpsecConfig"];
		for (auto value : allIpsecConfig)
		{
			VpnConnectionConfig::IpsecConfig ipsecConfigObject;
			ipsecConfigObject.ipsecEncAlg = value["IpsecEncAlg"].asString();
			ipsecConfigObject.ipsecAuthAlg = value["IpsecAuthAlg"].asString();
			ipsecConfigObject.ipsecPfs = value["IpsecPfs"].asString();
			ipsecConfigObject.ipsecLifetime = std::stol(value["IpsecLifetime"].asString());
			vpnConnectionConfigObject.ipsecConfig.push_back(ipsecConfigObject);
		}
		vpnConnectionConfig_.push_back(vpnConnectionConfigObject);
	}

}

