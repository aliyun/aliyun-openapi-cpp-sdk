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

#include <alibabacloud/alidns/model/UpdateGtmMonitorRequest.h>

using AlibabaCloud::Alidns::Model::UpdateGtmMonitorRequest;

UpdateGtmMonitorRequest::UpdateGtmMonitorRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "UpdateGtmMonitor")
{}

UpdateGtmMonitorRequest::~UpdateGtmMonitorRequest()
{}

std::string UpdateGtmMonitorRequest::getMonitorExtendInfo()const
{
	return monitorExtendInfo_;
}

void UpdateGtmMonitorRequest::setMonitorExtendInfo(const std::string& monitorExtendInfo)
{
	monitorExtendInfo_ = monitorExtendInfo;
	setCoreParameter("MonitorExtendInfo", std::to_string(monitorExtendInfo));
}

std::string UpdateGtmMonitorRequest::getUserClientIp()const
{
	return userClientIp_;
}

void UpdateGtmMonitorRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

std::string UpdateGtmMonitorRequest::getName()const
{
	return name_;
}

void UpdateGtmMonitorRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string UpdateGtmMonitorRequest::getMonitorConfigId()const
{
	return monitorConfigId_;
}

void UpdateGtmMonitorRequest::setMonitorConfigId(const std::string& monitorConfigId)
{
	monitorConfigId_ = monitorConfigId;
	setCoreParameter("MonitorConfigId", std::to_string(monitorConfigId));
}

int UpdateGtmMonitorRequest::getEvaluationCount()const
{
	return evaluationCount_;
}

void UpdateGtmMonitorRequest::setEvaluationCount(int evaluationCount)
{
	evaluationCount_ = evaluationCount;
	setCoreParameter("EvaluationCount", evaluationCount);
}

std::string UpdateGtmMonitorRequest::getProtocolType()const
{
	return protocolType_;
}

void UpdateGtmMonitorRequest::setProtocolType(const std::string& protocolType)
{
	protocolType_ = protocolType;
	setCoreParameter("ProtocolType", std::to_string(protocolType));
}

int UpdateGtmMonitorRequest::getInterval()const
{
	return interval_;
}

void UpdateGtmMonitorRequest::setInterval(int interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string UpdateGtmMonitorRequest::getLang()const
{
	return lang_;
}

void UpdateGtmMonitorRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

int UpdateGtmMonitorRequest::getTimeout()const
{
	return timeout_;
}

void UpdateGtmMonitorRequest::setTimeout(int timeout)
{
	timeout_ = timeout;
	setCoreParameter("Timeout", timeout);
}

std::vector<UpdateGtmMonitorRequest::IspCityNode> UpdateGtmMonitorRequest::getIspCityNode()const
{
	return ispCityNode_;
}

void UpdateGtmMonitorRequest::setIspCityNode(const std::vector<IspCityNode>& ispCityNode)
{
	ispCityNode_ = ispCityNode;
	int i = 0;
	for(int i = 0; i!= ispCityNode.size(); i++)	{
		auto obj = ispCityNode.at(i);
		std::string str ="IspCityNode."+ std::to_string(i);
		setCoreParameter(str + ".CityCode", std::to_string(obj.cityCode));
		setCoreParameter(str + ".IspCode", std::to_string(obj.ispCode));
	}
}

