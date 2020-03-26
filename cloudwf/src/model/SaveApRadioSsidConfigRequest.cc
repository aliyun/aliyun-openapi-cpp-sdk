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

#include <alibabacloud/cloudwf/model/SaveApRadioSsidConfigRequest.h>

using AlibabaCloud::Cloudwf::Model::SaveApRadioSsidConfigRequest;

SaveApRadioSsidConfigRequest::SaveApRadioSsidConfigRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SaveApRadioSsidConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SaveApRadioSsidConfigRequest::~SaveApRadioSsidConfigRequest()
{}

std::string SaveApRadioSsidConfigRequest::getNasid()const
{
	return nasid_;
}

void SaveApRadioSsidConfigRequest::setNasid(const std::string& nasid)
{
	nasid_ = nasid;
	setParameter("Nasid", nasid);
}

int SaveApRadioSsidConfigRequest::getDynamicVlan()const
{
	return dynamicVlan_;
}

void SaveApRadioSsidConfigRequest::setDynamicVlan(int dynamicVlan)
{
	dynamicVlan_ = dynamicVlan;
	setParameter("DynamicVlan", std::to_string(dynamicVlan));
}

std::string SaveApRadioSsidConfigRequest::getSecondaryAcctServer()const
{
	return secondaryAcctServer_;
}

void SaveApRadioSsidConfigRequest::setSecondaryAcctServer(const std::string& secondaryAcctServer)
{
	secondaryAcctServer_ = secondaryAcctServer;
	setParameter("SecondaryAcctServer", secondaryAcctServer);
}

std::string SaveApRadioSsidConfigRequest::getSecondaryAcctSecret()const
{
	return secondaryAcctSecret_;
}

void SaveApRadioSsidConfigRequest::setSecondaryAcctSecret(const std::string& secondaryAcctSecret)
{
	secondaryAcctSecret_ = secondaryAcctSecret;
	setParameter("SecondaryAcctSecret", secondaryAcctSecret);
}

int SaveApRadioSsidConfigRequest::getIeee80211w()const
{
	return ieee80211w_;
}

void SaveApRadioSsidConfigRequest::setIeee80211w(int ieee80211w)
{
	ieee80211w_ = ieee80211w;
	setParameter("Ieee80211w", std::to_string(ieee80211w));
}

long SaveApRadioSsidConfigRequest::getApAssetId()const
{
	return apAssetId_;
}

void SaveApRadioSsidConfigRequest::setApAssetId(long apAssetId)
{
	apAssetId_ = apAssetId;
	setParameter("ApAssetId", std::to_string(apAssetId));
}

int SaveApRadioSsidConfigRequest::getMulticastForward()const
{
	return multicastForward_;
}

void SaveApRadioSsidConfigRequest::setMulticastForward(int multicastForward)
{
	multicastForward_ = multicastForward;
	setParameter("MulticastForward", std::to_string(multicastForward));
}

int SaveApRadioSsidConfigRequest::getAuthCache()const
{
	return authCache_;
}

void SaveApRadioSsidConfigRequest::setAuthCache(int authCache)
{
	authCache_ = authCache;
	setParameter("AuthCache", std::to_string(authCache));
}

long SaveApRadioSsidConfigRequest::getId()const
{
	return id_;
}

void SaveApRadioSsidConfigRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

int SaveApRadioSsidConfigRequest::getIgnoreWeakProbe()const
{
	return ignoreWeakProbe_;
}

void SaveApRadioSsidConfigRequest::setIgnoreWeakProbe(int ignoreWeakProbe)
{
	ignoreWeakProbe_ = ignoreWeakProbe;
	setParameter("IgnoreWeakProbe", std::to_string(ignoreWeakProbe));
}

std::string SaveApRadioSsidConfigRequest::getAcctServer()const
{
	return acctServer_;
}

void SaveApRadioSsidConfigRequest::setAcctServer(const std::string& acctServer)
{
	acctServer_ = acctServer;
	setParameter("AcctServer", acctServer);
}

std::string SaveApRadioSsidConfigRequest::getSecondaryAuthServer()const
{
	return secondaryAuthServer_;
}

void SaveApRadioSsidConfigRequest::setSecondaryAuthServer(const std::string& secondaryAuthServer)
{
	secondaryAuthServer_ = secondaryAuthServer;
	setParameter("SecondaryAuthServer", secondaryAuthServer);
}

std::string SaveApRadioSsidConfigRequest::getDaeClient()const
{
	return daeClient_;
}

void SaveApRadioSsidConfigRequest::setDaeClient(const std::string& daeClient)
{
	daeClient_ = daeClient;
	setParameter("DaeClient", daeClient);
}

int SaveApRadioSsidConfigRequest::getSecondaryAuthPort()const
{
	return secondaryAuthPort_;
}

void SaveApRadioSsidConfigRequest::setSecondaryAuthPort(int secondaryAuthPort)
{
	secondaryAuthPort_ = secondaryAuthPort;
	setParameter("SecondaryAuthPort", std::to_string(secondaryAuthPort));
}

std::string SaveApRadioSsidConfigRequest::getAcctSecret()const
{
	return acctSecret_;
}

void SaveApRadioSsidConfigRequest::setAcctSecret(const std::string& acctSecret)
{
	acctSecret_ = acctSecret;
	setParameter("AcctSecret", acctSecret);
}

int SaveApRadioSsidConfigRequest::getDisassocWeakRssi()const
{
	return disassocWeakRssi_;
}

void SaveApRadioSsidConfigRequest::setDisassocWeakRssi(int disassocWeakRssi)
{
	disassocWeakRssi_ = disassocWeakRssi;
	setParameter("DisassocWeakRssi", std::to_string(disassocWeakRssi));
}

int SaveApRadioSsidConfigRequest::getSecondaryAcctPort()const
{
	return secondaryAcctPort_;
}

void SaveApRadioSsidConfigRequest::setSecondaryAcctPort(int secondaryAcctPort)
{
	secondaryAcctPort_ = secondaryAcctPort;
	setParameter("SecondaryAcctPort", std::to_string(secondaryAcctPort));
}

int SaveApRadioSsidConfigRequest::getDaePort()const
{
	return daePort_;
}

void SaveApRadioSsidConfigRequest::setDaePort(int daePort)
{
	daePort_ = daePort;
	setParameter("DaePort", std::to_string(daePort));
}

int SaveApRadioSsidConfigRequest::getMaxInactivity()const
{
	return maxInactivity_;
}

void SaveApRadioSsidConfigRequest::setMaxInactivity(int maxInactivity)
{
	maxInactivity_ = maxInactivity;
	setParameter("MaxInactivity", std::to_string(maxInactivity));
}

int SaveApRadioSsidConfigRequest::getShortPreamble()const
{
	return shortPreamble_;
}

void SaveApRadioSsidConfigRequest::setShortPreamble(int shortPreamble)
{
	shortPreamble_ = shortPreamble;
	setParameter("ShortPreamble", std::to_string(shortPreamble));
}

std::string SaveApRadioSsidConfigRequest::getSecondaryAuthSecret()const
{
	return secondaryAuthSecret_;
}

void SaveApRadioSsidConfigRequest::setSecondaryAuthSecret(const std::string& secondaryAuthSecret)
{
	secondaryAuthSecret_ = secondaryAuthSecret;
	setParameter("SecondaryAuthSecret", secondaryAuthSecret);
}

int SaveApRadioSsidConfigRequest::getAuthPort()const
{
	return authPort_;
}

void SaveApRadioSsidConfigRequest::setAuthPort(int authPort)
{
	authPort_ = authPort;
	setParameter("AuthPort", std::to_string(authPort));
}

int SaveApRadioSsidConfigRequest::getHidden()const
{
	return hidden_;
}

void SaveApRadioSsidConfigRequest::setHidden(int hidden)
{
	hidden_ = hidden;
	setParameter("Hidden", std::to_string(hidden));
}

std::string SaveApRadioSsidConfigRequest::getAuthServer()const
{
	return authServer_;
}

void SaveApRadioSsidConfigRequest::setAuthServer(const std::string& authServer)
{
	authServer_ = authServer;
	setParameter("AuthServer", authServer);
}

std::string SaveApRadioSsidConfigRequest::getSsid()const
{
	return ssid_;
}

void SaveApRadioSsidConfigRequest::setSsid(const std::string& ssid)
{
	ssid_ = ssid;
	setParameter("Ssid", ssid);
}

int SaveApRadioSsidConfigRequest::getCir()const
{
	return cir_;
}

void SaveApRadioSsidConfigRequest::setCir(int cir)
{
	cir_ = cir;
	setParameter("Cir", std::to_string(cir));
}

std::string SaveApRadioSsidConfigRequest::getMac()const
{
	return mac_;
}

void SaveApRadioSsidConfigRequest::setMac(const std::string& mac)
{
	mac_ = mac;
	setParameter("Mac", mac);
}

std::string SaveApRadioSsidConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveApRadioSsidConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int SaveApRadioSsidConfigRequest::getNetwork()const
{
	return network_;
}

void SaveApRadioSsidConfigRequest::setNetwork(int network)
{
	network_ = network;
	setParameter("Network", std::to_string(network));
}

int SaveApRadioSsidConfigRequest::getIsolate()const
{
	return isolate_;
}

void SaveApRadioSsidConfigRequest::setIsolate(int isolate)
{
	isolate_ = isolate;
	setParameter("Isolate", std::to_string(isolate));
}

std::string SaveApRadioSsidConfigRequest::getEncKey()const
{
	return encKey_;
}

void SaveApRadioSsidConfigRequest::setEncKey(const std::string& encKey)
{
	encKey_ = encKey;
	setParameter("EncKey", encKey);
}

std::string SaveApRadioSsidConfigRequest::getEncryption()const
{
	return encryption_;
}

void SaveApRadioSsidConfigRequest::setEncryption(const std::string& encryption)
{
	encryption_ = encryption;
	setParameter("Encryption", encryption);
}

int SaveApRadioSsidConfigRequest::getWmm()const
{
	return wmm_;
}

void SaveApRadioSsidConfigRequest::setWmm(int wmm)
{
	wmm_ = wmm;
	setParameter("Wmm", std::to_string(wmm));
}

int SaveApRadioSsidConfigRequest::getDisabled()const
{
	return disabled_;
}

void SaveApRadioSsidConfigRequest::setDisabled(int disabled)
{
	disabled_ = disabled;
	setParameter("Disabled", std::to_string(disabled));
}

int SaveApRadioSsidConfigRequest::getRadioIndex()const
{
	return radioIndex_;
}

void SaveApRadioSsidConfigRequest::setRadioIndex(int radioIndex)
{
	radioIndex_ = radioIndex;
	setParameter("RadioIndex", std::to_string(radioIndex));
}

int SaveApRadioSsidConfigRequest::getMaxassoc()const
{
	return maxassoc_;
}

void SaveApRadioSsidConfigRequest::setMaxassoc(int maxassoc)
{
	maxassoc_ = maxassoc;
	setParameter("Maxassoc", std::to_string(maxassoc));
}

std::string SaveApRadioSsidConfigRequest::getDaeSecret()const
{
	return daeSecret_;
}

void SaveApRadioSsidConfigRequest::setDaeSecret(const std::string& daeSecret)
{
	daeSecret_ = daeSecret;
	setParameter("DaeSecret", daeSecret);
}

int SaveApRadioSsidConfigRequest::getDisassocLowAck()const
{
	return disassocLowAck_;
}

void SaveApRadioSsidConfigRequest::setDisassocLowAck(int disassocLowAck)
{
	disassocLowAck_ = disassocLowAck;
	setParameter("DisassocLowAck", std::to_string(disassocLowAck));
}

int SaveApRadioSsidConfigRequest::getSsidLb()const
{
	return ssidLb_;
}

void SaveApRadioSsidConfigRequest::setSsidLb(int ssidLb)
{
	ssidLb_ = ssidLb;
	setParameter("SsidLb", std::to_string(ssidLb));
}

int SaveApRadioSsidConfigRequest::getAcctPort()const
{
	return acctPort_;
}

void SaveApRadioSsidConfigRequest::setAcctPort(int acctPort)
{
	acctPort_ = acctPort;
	setParameter("AcctPort", std::to_string(acctPort));
}

int SaveApRadioSsidConfigRequest::getVlanDhcp()const
{
	return vlanDhcp_;
}

void SaveApRadioSsidConfigRequest::setVlanDhcp(int vlanDhcp)
{
	vlanDhcp_ = vlanDhcp;
	setParameter("VlanDhcp", std::to_string(vlanDhcp));
}

int SaveApRadioSsidConfigRequest::getInstantlyEffective()const
{
	return instantlyEffective_;
}

void SaveApRadioSsidConfigRequest::setInstantlyEffective(int instantlyEffective)
{
	instantlyEffective_ = instantlyEffective;
	setParameter("InstantlyEffective", std::to_string(instantlyEffective));
}

std::string SaveApRadioSsidConfigRequest::getAuthSecret()const
{
	return authSecret_;
}

void SaveApRadioSsidConfigRequest::setAuthSecret(const std::string& authSecret)
{
	authSecret_ = authSecret;
	setParameter("AuthSecret", authSecret);
}

std::string SaveApRadioSsidConfigRequest::getOwnip()const
{
	return ownip_;
}

void SaveApRadioSsidConfigRequest::setOwnip(const std::string& ownip)
{
	ownip_ = ownip;
	setParameter("Ownip", ownip);
}

