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
{
	setMethod(HttpRequest::Method::Post);
}

UpdateGtmMonitorRequest::~UpdateGtmMonitorRequest()
{}

std::string UpdateGtmMonitorRequest::getMonitorExtendInfo()const
{
	return monitorExtendInfo_;
}

void UpdateGtmMonitorRequest::setMonitorExtendInfo(const std::string& monitorExtendInfo)
{
	monitorExtendInfo_ = monitorExtendInfo;
	setCoreParameter("MonitorExtendInfo", monitorExtendInfo);
}

std::string UpdateGtmMonitorRequest::getMonitorConfigId()const
{
	return monitorConfigId_;
}

void UpdateGtmMonitorRequest::setMonitorConfigId(const std::string& monitorConfigId)
{
	monitorConfigId_ = monitorConfigId;
	setCoreParameter("MonitorConfigId", monitorConfigId);
}

int UpdateGtmMonitorRequest::getTimeout()const
{
	return timeout_;
}

void UpdateGtmMonitorRequest::setTimeout(int timeout)
{
	timeout_ = timeout;
	setCoreParameter("Timeout", std::to_string(timeout));
}

std::string UpdateGtmMonitorRequest::getUserClientIp()const
{
	return userClientIp_;
}

void UpdateGtmMonitorRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

int UpdateGtmMonitorRequest::getEvaluationCount()const
{
	return evaluationCount_;
}

void UpdateGtmMonitorRequest::setEvaluationCount(int evaluationCount)
{
	evaluationCount_ = evaluationCount;
	setCoreParameter("EvaluationCount", std::to_string(evaluationCount));
}

std::string UpdateGtmMonitorRequest::getProtocolType()const
{
	return protocolType_;
}

void UpdateGtmMonitorRequest::setProtocolType(const std::string& protocolType)
{
	protocolType_ = protocolType;
	setCoreParameter("ProtocolType", protocolType);
}

int UpdateGtmMonitorRequest::getInterval()const
{
	return interval_;
}

void UpdateGtmMonitorRequest::setInterval(int interval)
{
	interval_ = interval;
	setCoreParameter("Interval", std::to_string(interval));
}

std::string UpdateGtmMonitorRequest::getLang()const
{
	return lang_;
}

void UpdateGtmMonitorRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::vector<UpdateGtmMonitorRequest::IspCityNode> UpdateGtmMonitorRequest::getIspCityNode()const
{
	return ispCityNode_;
}

void UpdateGtmMonitorRequest::setIspCityNode(const std::vector<IspCityNode>& ispCityNode)
{
	ispCityNode_ = ispCityNode;
	for(int dep1 = 0; dep1!= ispCityNode.size(); dep1++) {
		auto ispCityNodeObj = ispCityNode.at(dep1);
		std::string ispCityNodeObjStr = "IspCityNode." + std::to_string(dep1);
		setCoreParameter(ispCityNodeObjStr + ".CityCode", ispCityNodeObj.cityCode);
		setCoreParameter(ispCityNodeObjStr + ".IspCode", ispCityNodeObj.ispCode);
	}
}

