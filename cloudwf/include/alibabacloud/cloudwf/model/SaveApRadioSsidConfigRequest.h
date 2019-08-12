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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPRADIOSSIDCONFIGREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPRADIOSSIDCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudwf/CloudwfExport.h>

namespace AlibabaCloud
{
	namespace Cloudwf
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDWF_EXPORT SaveApRadioSsidConfigRequest : public RpcServiceRequest
			{

			public:
				SaveApRadioSsidConfigRequest();
				~SaveApRadioSsidConfigRequest();

				std::string getNasid()const;
				void setNasid(const std::string& nasid);
				int getAuthPort()const;
				void setAuthPort(int authPort);
				int getHidden()const;
				void setHidden(int hidden);
				int getDynamicVlan()const;
				void setDynamicVlan(int dynamicVlan);
				std::string getAuthServer()const;
				void setAuthServer(const std::string& authServer);
				std::string getSecondaryAcctServer()const;
				void setSecondaryAcctServer(const std::string& secondaryAcctServer);
				std::string getSsid()const;
				void setSsid(const std::string& ssid);
				int getCir()const;
				void setCir(int cir);
				std::string getMac()const;
				void setMac(const std::string& mac);
				std::string getSecondaryAcctSecret()const;
				void setSecondaryAcctSecret(const std::string& secondaryAcctSecret);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getIeee80211w()const;
				void setIeee80211w(int ieee80211w);
				int getNetwork()const;
				void setNetwork(int network);
				int getIsolate()const;
				void setIsolate(int isolate);
				long getApAssetId()const;
				void setApAssetId(long apAssetId);
				std::string getEncKey()const;
				void setEncKey(const std::string& encKey);
				int getMulticastForward()const;
				void setMulticastForward(int multicastForward);
				std::string getEncryption()const;
				void setEncryption(const std::string& encryption);
				int getWmm()const;
				void setWmm(int wmm);
				int getAuthCache()const;
				void setAuthCache(int authCache);
				int getDisabled()const;
				void setDisabled(int disabled);
				long getId()const;
				void setId(long id);
				int getRadioIndex()const;
				void setRadioIndex(int radioIndex);
				int getIgnoreWeakProbe()const;
				void setIgnoreWeakProbe(int ignoreWeakProbe);
				int getMaxassoc()const;
				void setMaxassoc(int maxassoc);
				std::string getAcctServer()const;
				void setAcctServer(const std::string& acctServer);
				std::string getSecondaryAuthServer()const;
				void setSecondaryAuthServer(const std::string& secondaryAuthServer);
				std::string getDaeClient()const;
				void setDaeClient(const std::string& daeClient);
				std::string getDaeSecret()const;
				void setDaeSecret(const std::string& daeSecret);
				int getDisassocLowAck()const;
				void setDisassocLowAck(int disassocLowAck);
				int getSecondaryAuthPort()const;
				void setSecondaryAuthPort(int secondaryAuthPort);
				std::string getAcctSecret()const;
				void setAcctSecret(const std::string& acctSecret);
				int getDisassocWeakRssi()const;
				void setDisassocWeakRssi(int disassocWeakRssi);
				int getSecondaryAcctPort()const;
				void setSecondaryAcctPort(int secondaryAcctPort);
				int getDaePort()const;
				void setDaePort(int daePort);
				int getSsidLb()const;
				void setSsidLb(int ssidLb);
				int getAcctPort()const;
				void setAcctPort(int acctPort);
				int getMaxInactivity()const;
				void setMaxInactivity(int maxInactivity);
				int getVlanDhcp()const;
				void setVlanDhcp(int vlanDhcp);
				int getInstantlyEffective()const;
				void setInstantlyEffective(int instantlyEffective);
				int getShortPreamble()const;
				void setShortPreamble(int shortPreamble);
				std::string getAuthSecret()const;
				void setAuthSecret(const std::string& authSecret);
				std::string getSecondaryAuthSecret()const;
				void setSecondaryAuthSecret(const std::string& secondaryAuthSecret);
				std::string getOwnip()const;
				void setOwnip(const std::string& ownip);

            private:
				std::string nasid_;
				int authPort_;
				int hidden_;
				int dynamicVlan_;
				std::string authServer_;
				std::string secondaryAcctServer_;
				std::string ssid_;
				int cir_;
				std::string mac_;
				std::string secondaryAcctSecret_;
				std::string accessKeyId_;
				int ieee80211w_;
				int network_;
				int isolate_;
				long apAssetId_;
				std::string encKey_;
				int multicastForward_;
				std::string encryption_;
				int wmm_;
				int authCache_;
				int disabled_;
				long id_;
				int radioIndex_;
				int ignoreWeakProbe_;
				int maxassoc_;
				std::string acctServer_;
				std::string secondaryAuthServer_;
				std::string daeClient_;
				std::string daeSecret_;
				int disassocLowAck_;
				int secondaryAuthPort_;
				std::string acctSecret_;
				int disassocWeakRssi_;
				int secondaryAcctPort_;
				int daePort_;
				int ssidLb_;
				int acctPort_;
				int maxInactivity_;
				int vlanDhcp_;
				int instantlyEffective_;
				int shortPreamble_;
				std::string authSecret_;
				std::string secondaryAuthSecret_;
				std::string ownip_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPRADIOSSIDCONFIGREQUEST_H_