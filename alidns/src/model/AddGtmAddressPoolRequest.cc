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
{
	setMethod(HttpRequest::Method::Post);
}

AddGtmAddressPoolRequest::~AddGtmAddressPoolRequest()
{}

std::string AddGtmAddressPoolRequest::getMonitorExtendInfo()const
{
	return monitorExtendInfo_;
}

void AddGtmAddressPoolRequest::setMonitorExtendInfo(const std::string& monitorExtendInfo)
{
	monitorExtendInfo_ = monitorExtendInfo;
	setCoreParameter("MonitorExtendInfo", monitorExtendInfo);
}

std::string AddGtmAddressPoolRequest::getType()const
{
	return type_;
}

void AddGtmAddressPoolRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

int AddGtmAddressPoolRequest::getTimeout()const
{
	return timeout_;
}

void AddGtmAddressPoolRequest::setTimeout(int timeout)
{
	timeout_ = timeout;
	setCoreParameter("Timeout", std::to_string(timeout));
}

int AddGtmAddressPoolRequest::getMinAvailableAddrNum()const
{
	return minAvailableAddrNum_;
}

void AddGtmAddressPoolRequest::setMinAvailableAddrNum(int minAvailableAddrNum)
{
	minAvailableAddrNum_ = minAvailableAddrNum;
	setCoreParameter("MinAvailableAddrNum", std::to_string(minAvailableAddrNum));
}

int AddGtmAddressPoolRequest::getEvaluationCount()const
{
	return evaluationCount_;
}

void AddGtmAddressPoolRequest::setEvaluationCount(int evaluationCount)
{
	evaluationCount_ = evaluationCount;
	setCoreParameter("EvaluationCount", std::to_string(evaluationCount));
}

std::string AddGtmAddressPoolRequest::getLang()const
{
	return lang_;
}

void AddGtmAddressPoolRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
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
		setCoreParameter(str + ".Mode", obj.mode);
		setCoreParameter(str + ".LbaWeight", std::to_string(obj.lbaWeight));
		setCoreParameter(str + ".Value", obj.value);
	}
}

std::string AddGtmAddressPoolRequest::getMonitorStatus()const
{
	return monitorStatus_;
}

void AddGtmAddressPoolRequest::setMonitorStatus(const std::string& monitorStatus)
{
	monitorStatus_ = monitorStatus;
	setCoreParameter("MonitorStatus", monitorStatus);
}

std::string AddGtmAddressPoolRequest::getInstanceId()const
{
	return instanceId_;
}

void AddGtmAddressPoolRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string AddGtmAddressPoolRequest::getUserClientIp()const
{
	return userClientIp_;
}

void AddGtmAddressPoolRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string AddGtmAddressPoolRequest::getName()const
{
	return name_;
}

void AddGtmAddressPoolRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string AddGtmAddressPoolRequest::getProtocolType()const
{
	return protocolType_;
}

void AddGtmAddressPoolRequest::setProtocolType(const std::string& protocolType)
{
	protocolType_ = protocolType;
	setCoreParameter("ProtocolType", protocolType);
}

int AddGtmAddressPoolRequest::getInterval()const
{
	return interval_;
}

void AddGtmAddressPoolRequest::setInterval(int interval)
{
	interval_ = interval;
	setCoreParameter("Interval", std::to_string(interval));
}

std::vector<AddGtmAddressPoolRequest::IspCityNode> AddGtmAddressPoolRequest::getIspCityNode()const
{
	return ispCityNode_;
}

void AddGtmAddressPoolRequest::setIspCityNode(const std::vector<IspCityNode>& ispCityNode)
{
	ispCityNode_ = ispCityNode;
	int i = 0;
	for(int i = 0; i!= ispCityNode.size(); i++)	{
		auto obj = ispCityNode.at(i);
		std::string str ="IspCityNode."+ std::to_string(i);
		setCoreParameter(str + ".CityCode", obj.cityCode);
		setCoreParameter(str + ".IspCode", obj.ispCode);
	}
}

