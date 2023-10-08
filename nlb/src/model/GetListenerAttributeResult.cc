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

#include <alibabacloud/nlb/model/GetListenerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

GetListenerAttributeResult::GetListenerAttributeResult() :
	ServiceResult()
{}

GetListenerAttributeResult::GetListenerAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetListenerAttributeResult::~GetListenerAttributeResult()
{}

void GetListenerAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["TagKey"].isNull())
			tagsObject.tagKey = valueTagsTag["TagKey"].asString();
		if(!valueTagsTag["TagValue"].isNull())
			tagsObject.tagValue = valueTagsTag["TagValue"].asString();
		tags_.push_back(tagsObject);
	}
	auto allCertificateIds = value["CertificateIds"]["CertificateId"];
	for (const auto &item : allCertificateIds)
		certificateIds_.push_back(item.asString());
	auto allCaCertificateIds = value["CaCertificateIds"]["CaCertificateId"];
	for (const auto &item : allCaCertificateIds)
		caCertificateIds_.push_back(item.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();
	if(!value["ListenerId"].isNull())
		listenerId_ = value["ListenerId"].asString();
	if(!value["ListenerProtocol"].isNull())
		listenerProtocol_ = value["ListenerProtocol"].asString();
	if(!value["ListenerPort"].isNull())
		listenerPort_ = std::stoi(value["ListenerPort"].asString());
	if(!value["StartPort"].isNull())
		startPort_ = value["StartPort"].asString();
	if(!value["EndPort"].isNull())
		endPort_ = value["EndPort"].asString();
	if(!value["ListenerDescription"].isNull())
		listenerDescription_ = value["ListenerDescription"].asString();
	if(!value["ServerGroupId"].isNull())
		serverGroupId_ = value["ServerGroupId"].asString();
	if(!value["IdleTimeout"].isNull())
		idleTimeout_ = std::stoi(value["IdleTimeout"].asString());
	if(!value["SecurityPolicyId"].isNull())
		securityPolicyId_ = value["SecurityPolicyId"].asString();
	if(!value["CaEnabled"].isNull())
		caEnabled_ = value["CaEnabled"].asString() == "true";
	if(!value["AlpnEnabled"].isNull())
		alpnEnabled_ = value["AlpnEnabled"].asString() == "true";
	if(!value["AlpnPolicy"].isNull())
		alpnPolicy_ = value["AlpnPolicy"].asString();
	if(!value["ProxyProtocolEnabled"].isNull())
		proxyProtocolEnabled_ = value["ProxyProtocolEnabled"].asString() == "true";
	if(!value["SecSensorEnabled"].isNull())
		secSensorEnabled_ = value["SecSensorEnabled"].asString() == "true";
	if(!value["ListenerStatus"].isNull())
		listenerStatus_ = value["ListenerStatus"].asString();
	if(!value["Cps"].isNull())
		cps_ = std::stoi(value["Cps"].asString());
	if(!value["Mss"].isNull())
		mss_ = std::stoi(value["Mss"].asString());

}

std::string GetListenerAttributeResult::getMessage()const
{
	return message_;
}

int GetListenerAttributeResult::getCps()const
{
	return cps_;
}

int GetListenerAttributeResult::getIdleTimeout()const
{
	return idleTimeout_;
}

std::string GetListenerAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

std::string GetListenerAttributeResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string GetListenerAttributeResult::getListenerProtocol()const
{
	return listenerProtocol_;
}

bool GetListenerAttributeResult::getSuccess()const
{
	return success_;
}

std::string GetListenerAttributeResult::getSecurityPolicyId()const
{
	return securityPolicyId_;
}

std::string GetListenerAttributeResult::getListenerStatus()const
{
	return listenerStatus_;
}

std::string GetListenerAttributeResult::getListenerDescription()const
{
	return listenerDescription_;
}

std::string GetListenerAttributeResult::getAlpnPolicy()const
{
	return alpnPolicy_;
}

std::vector<std::string> GetListenerAttributeResult::getCaCertificateIds()const
{
	return caCertificateIds_;
}

std::vector<std::string> GetListenerAttributeResult::getCertificateIds()const
{
	return certificateIds_;
}

int GetListenerAttributeResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

bool GetListenerAttributeResult::getSecSensorEnabled()const
{
	return secSensorEnabled_;
}

std::string GetListenerAttributeResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::vector<GetListenerAttributeResult::Tag> GetListenerAttributeResult::getTags()const
{
	return tags_;
}

bool GetListenerAttributeResult::getCaEnabled()const
{
	return caEnabled_;
}

int GetListenerAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

std::string GetListenerAttributeResult::getStartPort()const
{
	return startPort_;
}

std::string GetListenerAttributeResult::getServerGroupId()const
{
	return serverGroupId_;
}

int GetListenerAttributeResult::getMss()const
{
	return mss_;
}

std::string GetListenerAttributeResult::getCode()const
{
	return code_;
}

std::string GetListenerAttributeResult::getEndPort()const
{
	return endPort_;
}

bool GetListenerAttributeResult::getProxyProtocolEnabled()const
{
	return proxyProtocolEnabled_;
}

std::string GetListenerAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string GetListenerAttributeResult::getListenerId()const
{
	return listenerId_;
}

bool GetListenerAttributeResult::getAlpnEnabled()const
{
	return alpnEnabled_;
}

