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
{}

SaveApRadioSsidConfigRequest::~SaveApRadioSsidConfigRequest()
{}

std::string SaveApRadioSsidConfigRequest::getNasid()const
{
	return nasid_;
}

void SaveApRadioSsidConfigRequest::setNasid(const std::string& nasid)
{
	nasid_ = nasid;
	setCoreParameter("Nasid", nasid);
}

int SaveApRadioSsidConfigRequest::getAuthPort()const
{
	return authPort_;
}

void SaveApRadioSsidConfigRequest::setAuthPort(int authPort)
{
	authPort_ = authPort;
	setCoreParameter("AuthPort", authPort);
}

int SaveApRadioSsidConfigRequest::getHidden()const
{
	return hidden_;
}

void SaveApRadioSsidConfigRequest::setHidden(int hidden)
{
	hidden_ = hidden;
	setCoreParameter("Hidden", hidden);
}

int SaveApRadioSsidConfigRequest::getDynamicVlan()const
{
	return dynamicVlan_;
}

void SaveApRadioSsidConfigRequest::setDynamicVlan(int dynamicVlan)
{
	dynamicVlan_ = dynamicVlan;
	setCoreParameter("DynamicVlan", dynamicVlan);
}

std::string SaveApRadioSsidConfigRequest::getAuthServer()const
{
	return authServer_;
}

void SaveApRadioSsidConfigRequest::setAuthServer(const std::string& authServer)
{
	authServer_ = authServer;
	setCoreParameter("AuthServer", authServer);
}

std::string SaveApRadioSsidConfigRequest::getSecondaryAcctServer()const
{
	return secondaryAcctServer_;
}

void SaveApRadioSsidConfigRequest::setSecondaryAcctServer(const std::string& secondaryAcctServer)
{
	secondaryAcctServer_ = secondaryAcctServer;
	setCoreParameter("SecondaryAcctServer", secondaryAcctServer);
}

std::string SaveApRadioSsidConfigRequest::getSsid()const
{
	return ssid_;
}

void SaveApRadioSsidConfigRequest::setSsid(const std::string& ssid)
{
	ssid_ = ssid;
	setCoreParameter("Ssid", ssid);
}

int SaveApRadioSsidConfigRequest::getCir()const
{
	return cir_;
}

void SaveApRadioSsidConfigRequest::setCir(int cir)
{
	cir_ = cir;
	setCoreParameter("Cir", cir);
}

std::string SaveApRadioSsidConfigRequest::getMac()const
{
	return mac_;
}

void SaveApRadioSsidConfigRequest::setMac(const std::string& mac)
{
	mac_ = mac;
	setCoreParameter("Mac", mac);
}

std::string SaveApRadioSsidConfigRequest::getSecondaryAcctSecret()const
{
	return secondaryAcctSecret_;
}

void SaveApRadioSsidConfigRequest::setSecondaryAcctSecret(const std::string& secondaryAcctSecret)
{
	secondaryAcctSecret_ = secondaryAcctSecret;
	setCoreParameter("SecondaryAcctSecret", secondaryAcctSecret);
}

std::string SaveApRadioSsidConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveApRadioSsidConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int SaveApRadioSsidConfigRequest::getIeee80211w()const
{
	return ieee80211w_;
}

void SaveApRadioSsidConfigRequest::setIeee80211w(int ieee80211w)
{
	ieee80211w_ = ieee80211w;
	setCoreParameter("Ieee80211w", ieee80211w);
}

int SaveApRadioSsidConfigRequest::getNetwork()const
{
	return network_;
}

void SaveApRadioSsidConfigRequest::setNetwork(int network)
{
	network_ = network;
	setCoreParameter("Network", network);
}

int SaveApRadioSsidConfigRequest::getIsolate()const
{
	return isolate_;
}

void SaveApRadioSsidConfigRequest::setIsolate(int isolate)
{
	isolate_ = isolate;
	setCoreParameter("Isolate", isolate);
}

long SaveApRadioSsidConfigRequest::getApAssetId()const
{
	return apAssetId_;
}

void SaveApRadioSsidConfigRequest::setApAssetId(long apAssetId)
{
	apAssetId_ = apAssetId;
	setCoreParameter("ApAssetId", apAssetId);
}

std::string SaveApRadioSsidConfigRequest::getEncKey()const
{
	return encKey_;
}

void SaveApRadioSsidConfigRequest::setEncKey(const std::string& encKey)
{
	encKey_ = encKey;
	setCoreParameter("EncKey", encKey);
}

int SaveApRadioSsidConfigRequest::getMulticastForward()const
{
	return multicastForward_;
}

void SaveApRadioSsidConfigRequest::setMulticastForward(int multicastForward)
{
	multicastForward_ = multicastForward;
	setCoreParameter("MulticastForward", multicastForward);
}

std::string SaveApRadioSsidConfigRequest::getEncryption()const
{
	return encryption_;
}

void SaveApRadioSsidConfigRequest::setEncryption(const std::string& encryption)
{
	encryption_ = encryption;
	setCoreParameter("Encryption", encryption);
}

int SaveApRadioSsidConfigRequest::getWmm()const
{
	return wmm_;
}

void SaveApRadioSsidConfigRequest::setWmm(int wmm)
{
	wmm_ = wmm;
	setCoreParameter("Wmm", wmm);
}

int SaveApRadioSsidConfigRequest::getAuthCache()const
{
	return authCache_;
}

void SaveApRadioSsidConfigRequest::setAuthCache(int authCache)
{
	authCache_ = authCache;
	setCoreParameter("AuthCache", authCache);
}

int SaveApRadioSsidConfigRequest::getDisabled()const
{
	return disabled_;
}

void SaveApRadioSsidConfigRequest::setDisabled(int disabled)
{
	disabled_ = disabled;
	setCoreParameter("Disabled", disabled);
}

long SaveApRadioSsidConfigRequest::getId()const
{
	return id_;
}

void SaveApRadioSsidConfigRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

int SaveApRadioSsidConfigRequest::getRadioIndex()const
{
	return radioIndex_;
}

void SaveApRadioSsidConfigRequest::setRadioIndex(int radioIndex)
{
	radioIndex_ = radioIndex;
	setCoreParameter("RadioIndex", radioIndex);
}

int SaveApRadioSsidConfigRequest::getIgnoreWeakProbe()const
{
	return ignoreWeakProbe_;
}

void SaveApRadioSsidConfigRequest::setIgnoreWeakProbe(int ignoreWeakProbe)
{
	ignoreWeakProbe_ = ignoreWeakProbe;
	setCoreParameter("IgnoreWeakProbe", ignoreWeakProbe);
}

int SaveApRadioSsidConfigRequest::getMaxassoc()const
{
	return maxassoc_;
}

void SaveApRadioSsidConfigRequest::setMaxassoc(int maxassoc)
{
	maxassoc_ = maxassoc;
	setCoreParameter("Maxassoc", maxassoc);
}

std::string SaveApRadioSsidConfigRequest::getAcctServer()const
{
	return acctServer_;
}

void SaveApRadioSsidConfigRequest::setAcctServer(const std::string& acctServer)
{
	acctServer_ = acctServer;
	setCoreParameter("AcctServer", acctServer);
}

std::string SaveApRadioSsidConfigRequest::getSecondaryAuthServer()const
{
	return secondaryAuthServer_;
}

void SaveApRadioSsidConfigRequest::setSecondaryAuthServer(const std::string& secondaryAuthServer)
{
	secondaryAuthServer_ = secondaryAuthServer;
	setCoreParameter("SecondaryAuthServer", secondaryAuthServer);
}

std::string SaveApRadioSsidConfigRequest::getDaeClient()const
{
	return daeClient_;
}

void SaveApRadioSsidConfigRequest::setDaeClient(const std::string& daeClient)
{
	daeClient_ = daeClient;
	setCoreParameter("DaeClient", daeClient);
}

std::string SaveApRadioSsidConfigRequest::getDaeSecret()const
{
	return daeSecret_;
}

void SaveApRadioSsidConfigRequest::setDaeSecret(const std::string& daeSecret)
{
	daeSecret_ = daeSecret;
	setCoreParameter("DaeSecret", daeSecret);
}

int SaveApRadioSsidConfigRequest::getDisassocLowAck()const
{
	return disassocLowAck_;
}

void SaveApRadioSsidConfigRequest::setDisassocLowAck(int disassocLowAck)
{
	disassocLowAck_ = disassocLowAck;
	setCoreParameter("DisassocLowAck", disassocLowAck);
}

int SaveApRadioSsidConfigRequest::getSecondaryAuthPort()const
{
	return secondaryAuthPort_;
}

void SaveApRadioSsidConfigRequest::setSecondaryAuthPort(int secondaryAuthPort)
{
	secondaryAuthPort_ = secondaryAuthPort;
	setCoreParameter("SecondaryAuthPort", secondaryAuthPort);
}

std::string SaveApRadioSsidConfigRequest::getAcctSecret()const
{
	return acctSecret_;
}

void SaveApRadioSsidConfigRequest::setAcctSecret(const std::string& acctSecret)
{
	acctSecret_ = acctSecret;
	setCoreParameter("AcctSecret", acctSecret);
}

int SaveApRadioSsidConfigRequest::getDisassocWeakRssi()const
{
	return disassocWeakRssi_;
}

void SaveApRadioSsidConfigRequest::setDisassocWeakRssi(int disassocWeakRssi)
{
	disassocWeakRssi_ = disassocWeakRssi;
	setCoreParameter("DisassocWeakRssi", disassocWeakRssi);
}

int SaveApRadioSsidConfigRequest::getSecondaryAcctPort()const
{
	return secondaryAcctPort_;
}

void SaveApRadioSsidConfigRequest::setSecondaryAcctPort(int secondaryAcctPort)
{
	secondaryAcctPort_ = secondaryAcctPort;
	setCoreParameter("SecondaryAcctPort", secondaryAcctPort);
}

int SaveApRadioSsidConfigRequest::getDaePort()const
{
	return daePort_;
}

void SaveApRadioSsidConfigRequest::setDaePort(int daePort)
{
	daePort_ = daePort;
	setCoreParameter("DaePort", daePort);
}

int SaveApRadioSsidConfigRequest::getSsidLb()const
{
	return ssidLb_;
}

void SaveApRadioSsidConfigRequest::setSsidLb(int ssidLb)
{
	ssidLb_ = ssidLb;
	setCoreParameter("SsidLb", ssidLb);
}

int SaveApRadioSsidConfigRequest::getAcctPort()const
{
	return acctPort_;
}

void SaveApRadioSsidConfigRequest::setAcctPort(int acctPort)
{
	acctPort_ = acctPort;
	setCoreParameter("AcctPort", acctPort);
}

int SaveApRadioSsidConfigRequest::getMaxInactivity()const
{
	return maxInactivity_;
}

void SaveApRadioSsidConfigRequest::setMaxInactivity(int maxInactivity)
{
	maxInactivity_ = maxInactivity;
	setCoreParameter("MaxInactivity", maxInactivity);
}

int SaveApRadioSsidConfigRequest::getVlanDhcp()const
{
	return vlanDhcp_;
}

void SaveApRadioSsidConfigRequest::setVlanDhcp(int vlanDhcp)
{
	vlanDhcp_ = vlanDhcp;
	setCoreParameter("VlanDhcp", vlanDhcp);
}

int SaveApRadioSsidConfigRequest::getInstantlyEffective()const
{
	return instantlyEffective_;
}

void SaveApRadioSsidConfigRequest::setInstantlyEffective(int instantlyEffective)
{
	instantlyEffective_ = instantlyEffective;
	setCoreParameter("InstantlyEffective", instantlyEffective);
}

int SaveApRadioSsidConfigRequest::getShortPreamble()const
{
	return shortPreamble_;
}

void SaveApRadioSsidConfigRequest::setShortPreamble(int shortPreamble)
{
	shortPreamble_ = shortPreamble;
	setCoreParameter("ShortPreamble", shortPreamble);
}

std::string SaveApRadioSsidConfigRequest::getAuthSecret()const
{
	return authSecret_;
}

void SaveApRadioSsidConfigRequest::setAuthSecret(const std::string& authSecret)
{
	authSecret_ = authSecret;
	setCoreParameter("AuthSecret", authSecret);
}

std::string SaveApRadioSsidConfigRequest::getSecondaryAuthSecret()const
{
	return secondaryAuthSecret_;
}

void SaveApRadioSsidConfigRequest::setSecondaryAuthSecret(const std::string& secondaryAuthSecret)
{
	secondaryAuthSecret_ = secondaryAuthSecret;
	setCoreParameter("SecondaryAuthSecret", secondaryAuthSecret);
}

std::string SaveApRadioSsidConfigRequest::getOwnip()const
{
	return ownip_;
}

void SaveApRadioSsidConfigRequest::setOwnip(const std::string& ownip)
{
	ownip_ = ownip;
	setCoreParameter("Ownip", ownip);
}

