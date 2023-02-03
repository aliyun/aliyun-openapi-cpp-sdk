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

#include <alibabacloud/mse/model/UpdateGatewayServiceTrafficPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

UpdateGatewayServiceTrafficPolicyResult::UpdateGatewayServiceTrafficPolicyResult() :
	ServiceResult()
{}

UpdateGatewayServiceTrafficPolicyResult::UpdateGatewayServiceTrafficPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateGatewayServiceTrafficPolicyResult::~UpdateGatewayServiceTrafficPolicyResult()
{}

void UpdateGatewayServiceTrafficPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["SourceType"].isNull())
		data_.sourceType = dataNode["SourceType"].asString();
	if(!dataNode["GatewayUniqueId"].isNull())
		data_.gatewayUniqueId = dataNode["GatewayUniqueId"].asString();
	if(!dataNode["MetaInfo"].isNull())
		data_.metaInfo = dataNode["MetaInfo"].asString();
	if(!dataNode["Namespace"].isNull())
		data_._namespace = dataNode["Namespace"].asString();
	if(!dataNode["GroupName"].isNull())
		data_.groupName = dataNode["GroupName"].asString();
	auto gatewayTrafficPolicyNode = dataNode["GatewayTrafficPolicy"];
	auto tlsSettingNode = gatewayTrafficPolicyNode["TlsSetting"];
	if(!tlsSettingNode["TlsMode"].isNull())
		data_.gatewayTrafficPolicy.tlsSetting.tlsMode = tlsSettingNode["TlsMode"].asString();
	if(!tlsSettingNode["CertId"].isNull())
		data_.gatewayTrafficPolicy.tlsSetting.certId = tlsSettingNode["CertId"].asString();
	if(!tlsSettingNode["CaCertContent"].isNull())
		data_.gatewayTrafficPolicy.tlsSetting.caCertContent = tlsSettingNode["CaCertContent"].asString();
	if(!tlsSettingNode["Sni"].isNull())
		data_.gatewayTrafficPolicy.tlsSetting.sni = tlsSettingNode["Sni"].asString();
	auto loadBalancerSettingsNode = gatewayTrafficPolicyNode["LoadBalancerSettings"];
	if(!loadBalancerSettingsNode["LoadbalancerType"].isNull())
		data_.gatewayTrafficPolicy.loadBalancerSettings.loadbalancerType = loadBalancerSettingsNode["LoadbalancerType"].asString();
	if(!loadBalancerSettingsNode["WarmupDuration"].isNull())
		data_.gatewayTrafficPolicy.loadBalancerSettings.warmupDuration = std::stol(loadBalancerSettingsNode["WarmupDuration"].asString());
	auto consistentHashLBConfigNode = loadBalancerSettingsNode["ConsistentHashLBConfig"];
	if(!consistentHashLBConfigNode["ParameterName"].isNull())
		data_.gatewayTrafficPolicy.loadBalancerSettings.consistentHashLBConfig.parameterName = consistentHashLBConfigNode["ParameterName"].asString();
	if(!consistentHashLBConfigNode["ConsistentHashLBType"].isNull())
		data_.gatewayTrafficPolicy.loadBalancerSettings.consistentHashLBConfig.consistentHashLBType = consistentHashLBConfigNode["ConsistentHashLBType"].asString();
	auto httpCookieNode = consistentHashLBConfigNode["HttpCookie"];
	if(!httpCookieNode["Name"].isNull())
		data_.gatewayTrafficPolicy.loadBalancerSettings.consistentHashLBConfig.httpCookie.name = httpCookieNode["Name"].asString();
	if(!httpCookieNode["Path"].isNull())
		data_.gatewayTrafficPolicy.loadBalancerSettings.consistentHashLBConfig.httpCookie.path = httpCookieNode["Path"].asString();
	if(!httpCookieNode["TTL"].isNull())
		data_.gatewayTrafficPolicy.loadBalancerSettings.consistentHashLBConfig.httpCookie.tTL = httpCookieNode["TTL"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string UpdateGatewayServiceTrafficPolicyResult::getMessage()const
{
	return message_;
}

int UpdateGatewayServiceTrafficPolicyResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

UpdateGatewayServiceTrafficPolicyResult::Data UpdateGatewayServiceTrafficPolicyResult::getData()const
{
	return data_;
}

int UpdateGatewayServiceTrafficPolicyResult::getCode()const
{
	return code_;
}

bool UpdateGatewayServiceTrafficPolicyResult::getSuccess()const
{
	return success_;
}

