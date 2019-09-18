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

#include <alibabacloud/alidns/model/AddGtmMonitorRequest.h>

using AlibabaCloud::Alidns::Model::AddGtmMonitorRequest;

AddGtmMonitorRequest::AddGtmMonitorRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "AddGtmMonitor")
{}

AddGtmMonitorRequest::~AddGtmMonitorRequest()
{}

std::string AddGtmMonitorRequest::getMonitorExtendInfo()const
{
	return monitorExtendInfo_;
}

void AddGtmMonitorRequest::setMonitorExtendInfo(const std::string& monitorExtendInfo)
{
	monitorExtendInfo_ = monitorExtendInfo;
	setCoreParameter("MonitorExtendInfo", monitorExtendInfo);
}

int AddGtmMonitorRequest::getTimeout()const
{
	return timeout_;
}

void AddGtmMonitorRequest::setTimeout(int timeout)
{
	timeout_ = timeout;
	setCoreParameter("Timeout", std::to_string(timeout));
}

std::string AddGtmMonitorRequest::getAddrPoolId()const
{
	return addrPoolId_;
}

void AddGtmMonitorRequest::setAddrPoolId(const std::string& addrPoolId)
{
	addrPoolId_ = addrPoolId;
	setCoreParameter("AddrPoolId", addrPoolId);
}

std::string AddGtmMonitorRequest::getUserClientIp()const
{
	return userClientIp_;
}

void AddGtmMonitorRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

int AddGtmMonitorRequest::getEvaluationCount()const
{
	return evaluationCount_;
}

void AddGtmMonitorRequest::setEvaluationCount(int evaluationCount)
{
	evaluationCount_ = evaluationCount;
	setCoreParameter("EvaluationCount", std::to_string(evaluationCount));
}

std::string AddGtmMonitorRequest::getProtocolType()const
{
	return protocolType_;
}

void AddGtmMonitorRequest::setProtocolType(const std::string& protocolType)
{
	protocolType_ = protocolType;
	setCoreParameter("ProtocolType", protocolType);
}

int AddGtmMonitorRequest::getInterval()const
{
	return interval_;
}

void AddGtmMonitorRequest::setInterval(int interval)
{
	interval_ = interval;
	setCoreParameter("Interval", std::to_string(interval));
}

std::string AddGtmMonitorRequest::getLang()const
{
	return lang_;
}

void AddGtmMonitorRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::vector<AddGtmMonitorRequest::IspCityNode> AddGtmMonitorRequest::getIspCityNode()const
{
	return ispCityNode_;
}

void AddGtmMonitorRequest::setIspCityNode(const std::vector<IspCityNode>& ispCityNode)
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

