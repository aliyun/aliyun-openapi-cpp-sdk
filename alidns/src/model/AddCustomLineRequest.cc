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

#include <alibabacloud/alidns/model/AddCustomLineRequest.h>

using AlibabaCloud::Alidns::Model::AddCustomLineRequest;

AddCustomLineRequest::AddCustomLineRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "AddCustomLine")
{
	setMethod(HttpRequest::Method::Post);
}

AddCustomLineRequest::~AddCustomLineRequest()
{}

std::string AddCustomLineRequest::getDomainName()const
{
	return domainName_;
}

void AddCustomLineRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::vector<AddCustomLineRequest::IpSegment> AddCustomLineRequest::getIpSegment()const
{
	return ipSegment_;
}

void AddCustomLineRequest::setIpSegment(const std::vector<IpSegment>& ipSegment)
{
	ipSegment_ = ipSegment;
	for(int dep1 = 0; dep1!= ipSegment.size(); dep1++) {
		auto ipSegmentObj = ipSegment.at(dep1);
		std::string ipSegmentObjStr = "IpSegment." + std::to_string(dep1);
		setCoreParameter(ipSegmentObjStr + ".EndIp", ipSegmentObj.endIp);
		setCoreParameter(ipSegmentObjStr + ".StartIp", ipSegmentObj.startIp);
	}
}

std::string AddCustomLineRequest::getUserClientIp()const
{
	return userClientIp_;
}

void AddCustomLineRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string AddCustomLineRequest::getLineName()const
{
	return lineName_;
}

void AddCustomLineRequest::setLineName(const std::string& lineName)
{
	lineName_ = lineName;
	setCoreParameter("LineName", lineName);
}

std::string AddCustomLineRequest::getLang()const
{
	return lang_;
}

void AddCustomLineRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

