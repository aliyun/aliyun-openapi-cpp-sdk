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
				int getDynamicVlan()const;
				void setDynamicVlan(int dynamicVlan);
				std::string getSecondaryAcctServer()const;
				void setSecondaryAcctServer(const std::string& secondaryAcctServer);
				std::string getSecondaryAcctSecret()const;
				void setSecondaryAcctSecret(const std::string& secondaryAcctSecret);
				int getIeee80211w()const;
				void setIeee80211w(int ieee80211w);
				long getApAssetId()const;
				void setApAssetId(long apAssetId);
				int getMulticastForward()const;
				void setMulticastForward(int multicastForward);
				int getAuthCache()const;
				void setAuthCache(int authCache);
				long getId()const;
				void setId(long id);
				int getIgnoreWeakProbe()const;
				void setIgnoreWeakProbe(int ignoreWeakProbe);
				std::string getAcctServer()const;
				void setAcctServer(const std::string& acctServer);
				std::string getSecondaryAuthServer()const;
				void setSecondaryAuthServer(const std::string& secondaryAuthServer);
				std::string getDaeClient()const;
				void setDaeClient(const std::string& daeClient);
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
				int getMaxInactivity()const;
				void setMaxInactivity(int maxInactivity);
				int getShortPreamble()const;
				void setShortPreamble(int shortPreamble);
				std::string getSecondaryAuthSecret()const;
				void setSecondaryAuthSecret(const std::string& secondaryAuthSecret);
				int getAuthPort()const;
				void setAuthPort(int authPort);
				int getHidden()const;
				void setHidden(int hidden);
				std::string getAuthServer()const;
				void setAuthServer(const std::string& authServer);
				std::string getSsid()const;
				void setSsid(const std::string& ssid);
				int getCir()const;
				void setCir(int cir);
				std::string getMac()const;
				void setMac(const std::string& mac);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getNetwork()const;
				void setNetwork(int network);
				int getIsolate()const;
				void setIsolate(int isolate);
				std::string getEncKey()const;
				void setEncKey(const std::string& encKey);
				std::string getEncryption()const;
				void setEncryption(const std::string& encryption);
				int getWmm()const;
				void setWmm(int wmm);
				int getDisabled()const;
				void setDisabled(int disabled);
				int getRadioIndex()const;
				void setRadioIndex(int radioIndex);
				int getMaxassoc()const;
				void setMaxassoc(int maxassoc);
				std::string getDaeSecret()const;
				void setDaeSecret(const std::string& daeSecret);
				int getDisassocLowAck()const;
				void setDisassocLowAck(int disassocLowAck);
				int getSsidLb()const;
				void setSsidLb(int ssidLb);
				int getAcctPort()const;
				void setAcctPort(int acctPort);
				int getVlanDhcp()const;
				void setVlanDhcp(int vlanDhcp);
				int getInstantlyEffective()const;
				void setInstantlyEffective(int instantlyEffective);
				std::string getAuthSecret()const;
				void setAuthSecret(const std::string& authSecret);
				std::string getOwnip()const;
				void setOwnip(const std::string& ownip);

            private:
				std::string nasid_;
				int dynamicVlan_;
				std::string secondaryAcctServer_;
				std::string secondaryAcctSecret_;
				int ieee80211w_;
				long apAssetId_;
				int multicastForward_;
				int authCache_;
				long id_;
				int ignoreWeakProbe_;
				std::string acctServer_;
				std::string secondaryAuthServer_;
				std::string daeClient_;
				int secondaryAuthPort_;
				std::string acctSecret_;
				int disassocWeakRssi_;
				int secondaryAcctPort_;
				int daePort_;
				int maxInactivity_;
				int shortPreamble_;
				std::string secondaryAuthSecret_;
				int authPort_;
				int hidden_;
				std::string authServer_;
				std::string ssid_;
				int cir_;
				std::string mac_;
				std::string accessKeyId_;
				int network_;
				int isolate_;
				std::string encKey_;
				std::string encryption_;
				int wmm_;
				int disabled_;
				int radioIndex_;
				int maxassoc_;
				std::string daeSecret_;
				int disassocLowAck_;
				int ssidLb_;
				int acctPort_;
				int vlanDhcp_;
				int instantlyEffective_;
				std::string authSecret_;
				std::string ownip_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPRADIOSSIDCONFIGREQUEST_H_