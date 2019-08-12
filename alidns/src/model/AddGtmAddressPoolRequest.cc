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

#include <alibabacloud/alidns/model/AddGtmAddressPoolRequest.h>

using AlibabaCloud::Alidns::Model::AddGtmAddressPoolRequest;

AddGtmAddressPoolRequest::AddGtmAddressPoolRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "AddGtmAddressPool")
{}

AddGtmAddressPoolRequest::~AddGtmAddressPoolRequest()
{}

std::string AddGtmAddressPoolRequest::getInstanceId()const
{
	return instanceId_;
}

void AddGtmAddressPoolRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string AddGtmAddressPoolRequest::getUserClientIp()const
{
	return userClientIp_;
}

void AddGtmAddressPoolRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

std::string AddGtmAddressPoolRequest::getName()const
{
	return name_;
}

void AddGtmAddressPoolRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string AddGtmAddressPoolRequest::getLang()const
{
	return lang_;
}

void AddGtmAddressPoolRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string AddGtmAddressPoolRequest::getType()const
{
	return type_;
}

void AddGtmAddressPoolRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::vector<AddGtmAddressPoolRequest::Addr> AddGtmAddressPoolRequest::getAddr()const
{
	return addr_;
}

void AddGtmAddressPoolRequest::setAddr(const std::vector<Addr>& addr)
{
	addr_ = addr;
	int i = 0;
	for(int i = 0; i!= addr.size(); i++)	{
		auto obj = addr.at(i);
		std::string str ="Addr."+ std::to_string(i);
		setCoreParameter(str + ".Mode", std::to_string(obj.mode));
		setCoreParameter(str + ".LbaWeight", obj.lbaWeight);
		setCoreParameter(str + ".Value", std::to_string(obj.value));
	}
}

int AddGtmAddressPoolRequest::getMinAvailableAddrNum()const
{
	return minAvailableAddrNum_;
}

void AddGtmAddressPoolRequest::setMinAvailableAddrNum(int minAvailableAddrNum)
{
	minAvailableAddrNum_ = minAvailableAddrNum;
	setCoreParameter("MinAvailableAddrNum", minAvailableAddrNum);
}

