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

#include <alibabacloud/cloudwf/model/SaveApRadioConfigRequest.h>

using AlibabaCloud::Cloudwf::Model::SaveApRadioConfigRequest;

SaveApRadioConfigRequest::SaveApRadioConfigRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SaveApRadioConfig")
{}

SaveApRadioConfigRequest::~SaveApRadioConfigRequest()
{}

std::string SaveApRadioConfigRequest::getRequireMode()const
{
	return requireMode_;
}

void SaveApRadioConfigRequest::setRequireMode(const std::string& requireMode)
{
	requireMode_ = requireMode;
	setCoreParameter("RequireMode", std::to_string(requireMode));
}

std::string SaveApRadioConfigRequest::getHtmode()const
{
	return htmode_;
}

void SaveApRadioConfigRequest::setHtmode(const std::string& htmode)
{
	htmode_ = htmode;
	setCoreParameter("Htmode", std::to_string(htmode));
}

int SaveApRadioConfigRequest::getFrag()const
{
	return frag_;
}

void SaveApRadioConfigRequest::setFrag(int frag)
{
	frag_ = frag;
	setCoreParameter("Frag", frag);
}

int SaveApRadioConfigRequest::getMinrate()const
{
	return minrate_;
}

void SaveApRadioConfigRequest::setMinrate(int minrate)
{
	minrate_ = minrate;
	setCoreParameter("Minrate", minrate);
}

int SaveApRadioConfigRequest::getMcastRate()const
{
	return mcastRate_;
}

void SaveApRadioConfigRequest::setMcastRate(int mcastRate)
{
	mcastRate_ = mcastRate;
	setCoreParameter("McastRate", mcastRate);
}

int SaveApRadioConfigRequest::getProbereq()const
{
	return probereq_;
}

void SaveApRadioConfigRequest::setProbereq(int probereq)
{
	probereq_ = probereq;
	setCoreParameter("Probereq", probereq);
}

int SaveApRadioConfigRequest::getChannel()const
{
	return channel_;
}

void SaveApRadioConfigRequest::setChannel(int channel)
{
	channel_ = channel;
	setCoreParameter("Channel", channel);
}

int SaveApRadioConfigRequest::getShortgi()const
{
	return shortgi_;
}

void SaveApRadioConfigRequest::setShortgi(int shortgi)
{
	shortgi_ = shortgi;
	setCoreParameter("Shortgi", shortgi);
}

std::string SaveApRadioConfigRequest::getHwmode()const
{
	return hwmode_;
}

void SaveApRadioConfigRequest::setHwmode(const std::string& hwmode)
{
	hwmode_ = hwmode;
	setCoreParameter("Hwmode", std::to_string(hwmode));
}

int SaveApRadioConfigRequest::getUapsd()const
{
	return uapsd_;
}

void SaveApRadioConfigRequest::setUapsd(int uapsd)
{
	uapsd_ = uapsd;
	setCoreParameter("Uapsd", uapsd);
}

int SaveApRadioConfigRequest::getBeaconInt()const
{
	return beaconInt_;
}

void SaveApRadioConfigRequest::setBeaconInt(int beaconInt)
{
	beaconInt_ = beaconInt;
	setCoreParameter("BeaconInt", beaconInt);
}

std::string SaveApRadioConfigRequest::getMac()const
{
	return mac_;
}

void SaveApRadioConfigRequest::setMac(const std::string& mac)
{
	mac_ = mac;
	setCoreParameter("Mac", std::to_string(mac));
}

std::string SaveApRadioConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveApRadioConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

int SaveApRadioConfigRequest::getRts()const
{
	return rts_;
}

void SaveApRadioConfigRequest::setRts(int rts)
{
	rts_ = rts;
	setCoreParameter("Rts", rts);
}

int SaveApRadioConfigRequest::getTxpower()const
{
	return txpower_;
}

void SaveApRadioConfigRequest::setTxpower(int txpower)
{
	txpower_ = txpower;
	setCoreParameter("Txpower", txpower);
}

int SaveApRadioConfigRequest::getNoscan()const
{
	return noscan_;
}

void SaveApRadioConfigRequest::setNoscan(int noscan)
{
	noscan_ = noscan;
	setCoreParameter("Noscan", noscan);
}

int SaveApRadioConfigRequest::getBcastRate()const
{
	return bcastRate_;
}

void SaveApRadioConfigRequest::setBcastRate(int bcastRate)
{
	bcastRate_ = bcastRate;
	setCoreParameter("BcastRate", bcastRate);
}

int SaveApRadioConfigRequest::getDisabled()const
{
	return disabled_;
}

void SaveApRadioConfigRequest::setDisabled(int disabled)
{
	disabled_ = disabled;
	setCoreParameter("Disabled", disabled);
}

int SaveApRadioConfigRequest::getInstantlyEffective()const
{
	return instantlyEffective_;
}

void SaveApRadioConfigRequest::setInstantlyEffective(int instantlyEffective)
{
	instantlyEffective_ = instantlyEffective;
	setCoreParameter("InstantlyEffective", instantlyEffective);
}

long SaveApRadioConfigRequest::getId()const
{
	return id_;
}

void SaveApRadioConfigRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

int SaveApRadioConfigRequest::getRadioIndex()const
{
	return radioIndex_;
}

void SaveApRadioConfigRequest::setRadioIndex(int radioIndex)
{
	radioIndex_ = radioIndex;
	setCoreParameter("RadioIndex", radioIndex);
}

