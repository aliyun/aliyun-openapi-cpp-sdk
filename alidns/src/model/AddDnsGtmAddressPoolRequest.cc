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

#include <alibabacloud/alidns/model/AddDnsGtmAddressPoolRequest.h>

using AlibabaCloud::Alidns::Model::AddDnsGtmAddressPoolRequest;

AddDnsGtmAddressPoolRequest::AddDnsGtmAddressPoolRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "AddDnsGtmAddressPool")
{
	setMethod(HttpRequest::Method::Post);
}

AddDnsGtmAddressPoolRequest::~AddDnsGtmAddressPoolRequest()
{}

std::string AddDnsGtmAddressPoolRequest::getMonitorExtendInfo()const
{
	return monitorExtendInfo_;
}

void AddDnsGtmAddressPoolRequest::setMonitorExtendInfo(const std::string& monitorExtendInfo)
{
	monitorExtendInfo_ = monitorExtendInfo;
	setParameter("MonitorExtendInfo", monitorExtendInfo);
}

std::string AddDnsGtmAddressPoolRequest::getLbaStrategy()const
{
	return lbaStrategy_;
}

void AddDnsGtmAddressPoolRequest::setLbaStrategy(const std::string& lbaStrategy)
{
	lbaStrategy_ = lbaStrategy;
	setParameter("LbaStrategy", lbaStrategy);
}

std::string AddDnsGtmAddressPoolRequest::getType()const
{
	return type_;
}

void AddDnsGtmAddressPoolRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

int AddDnsGtmAddressPoolRequest::getTimeout()const
{
	return timeout_;
}

void AddDnsGtmAddressPoolRequest::setTimeout(int timeout)
{
	timeout_ = timeout;
	setParameter("Timeout", std::to_string(timeout));
}

int AddDnsGtmAddressPoolRequest::getEvaluationCount()const
{
	return evaluationCount_;
}

void AddDnsGtmAddressPoolRequest::setEvaluationCount(int evaluationCount)
{
	evaluationCount_ = evaluationCount;
	setParameter("EvaluationCount", std::to_string(evaluationCount));
}

std::string AddDnsGtmAddressPoolRequest::getLang()const
{
	return lang_;
}

void AddDnsGtmAddressPoolRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::vector<AddDnsGtmAddressPoolRequest::Addr> AddDnsGtmAddressPoolRequest::getAddr()const
{
	return addr_;
}

void AddDnsGtmAddressPoolRequest::setAddr(const std::vector<Addr>& addr)
{
	addr_ = addr;
	for(int dep1 = 0; dep1!= addr.size(); dep1++) {
		auto addrObj = addr.at(dep1);
		std::string addrObjStr = "Addr." + std::to_string(dep1 + 1);
		setParameter(addrObjStr + ".Mode", addrObj.mode);
		setParameter(addrObjStr + ".AttributeInfo", addrObj.attributeInfo);
		setParameter(addrObjStr + ".Remark", addrObj.remark);
		setParameter(addrObjStr + ".Addr", addrObj.addr);
		setParameter(addrObjStr + ".LbaWeight", std::to_string(addrObj.lbaWeight));
	}
}

std::string AddDnsGtmAddressPoolRequest::getMonitorStatus()const
{
	return monitorStatus_;
}

void AddDnsGtmAddressPoolRequest::setMonitorStatus(const std::string& monitorStatus)
{
	monitorStatus_ = monitorStatus;
	setParameter("MonitorStatus", monitorStatus);
}

std::string AddDnsGtmAddressPoolRequest::getInstanceId()const
{
	return instanceId_;
}

void AddDnsGtmAddressPoolRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string AddDnsGtmAddressPoolRequest::getUserClientIp()const
{
	return userClientIp_;
}

void AddDnsGtmAddressPoolRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string AddDnsGtmAddressPoolRequest::getName()const
{
	return name_;
}

void AddDnsGtmAddressPoolRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string AddDnsGtmAddressPoolRequest::getProtocolType()const
{
	return protocolType_;
}

void AddDnsGtmAddressPoolRequest::setProtocolType(const std::string& protocolType)
{
	protocolType_ = protocolType;
	setParameter("ProtocolType", protocolType);
}

int AddDnsGtmAddressPoolRequest::getInterval()const
{
	return interval_;
}

void AddDnsGtmAddressPoolRequest::setInterval(int interval)
{
	interval_ = interval;
	setParameter("Interval", std::to_string(interval));
}

std::vector<AddDnsGtmAddressPoolRequest::IspCityNode> AddDnsGtmAddressPoolRequest::getIspCityNode()const
{
	return ispCityNode_;
}

void AddDnsGtmAddressPoolRequest::setIspCityNode(const std::vector<IspCityNode>& ispCityNode)
{
	ispCityNode_ = ispCityNode;
	for(int dep1 = 0; dep1!= ispCityNode.size(); dep1++) {
		auto ispCityNodeObj = ispCityNode.at(dep1);
		std::string ispCityNodeObjStr = "IspCityNode." + std::to_string(dep1 + 1);
		setParameter(ispCityNodeObjStr + ".CityCode", ispCityNodeObj.cityCode);
		setParameter(ispCityNodeObjStr + ".IspCode", ispCityNodeObj.ispCode);
	}
}

