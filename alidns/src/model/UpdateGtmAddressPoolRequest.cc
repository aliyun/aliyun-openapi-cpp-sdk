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

#include <alibabacloud/alidns/model/UpdateGtmAddressPoolRequest.h>

using AlibabaCloud::Alidns::Model::UpdateGtmAddressPoolRequest;

UpdateGtmAddressPoolRequest::UpdateGtmAddressPoolRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "UpdateGtmAddressPool")
{}

UpdateGtmAddressPoolRequest::~UpdateGtmAddressPoolRequest()
{}

std::string UpdateGtmAddressPoolRequest::getAddrPoolId()const
{
	return addrPoolId_;
}

void UpdateGtmAddressPoolRequest::setAddrPoolId(const std::string& addrPoolId)
{
	addrPoolId_ = addrPoolId;
	setCoreParameter("AddrPoolId", addrPoolId);
}

std::string UpdateGtmAddressPoolRequest::getUserClientIp()const
{
	return userClientIp_;
}

void UpdateGtmAddressPoolRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string UpdateGtmAddressPoolRequest::getName()const
{
	return name_;
}

void UpdateGtmAddressPoolRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string UpdateGtmAddressPoolRequest::getLang()const
{
	return lang_;
}

void UpdateGtmAddressPoolRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string UpdateGtmAddressPoolRequest::getType()const
{
	return type_;
}

void UpdateGtmAddressPoolRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::vector<UpdateGtmAddressPoolRequest::Addr> UpdateGtmAddressPoolRequest::getAddr()const
{
	return addr_;
}

void UpdateGtmAddressPoolRequest::setAddr(const std::vector<Addr>& addr)
{
	addr_ = addr;
	int i = 0;
	for(int i = 0; i!= addr.size(); i++)	{
		auto obj = addr.at(i);
		std::string str ="Addr."+ std::to_string(i);
		setCoreParameter(str + ".Mode", obj.mode);
		setCoreParameter(str + ".LbaWeight", std::to_string(obj.lbaWeight));
		setCoreParameter(str + ".Value", obj.value);
	}
}

int UpdateGtmAddressPoolRequest::getMinAvailableAddrNum()const
{
	return minAvailableAddrNum_;
}

void UpdateGtmAddressPoolRequest::setMinAvailableAddrNum(int minAvailableAddrNum)
{
	minAvailableAddrNum_ = minAvailableAddrNum;
	setCoreParameter("MinAvailableAddrNum", std::to_string(minAvailableAddrNum));
}

