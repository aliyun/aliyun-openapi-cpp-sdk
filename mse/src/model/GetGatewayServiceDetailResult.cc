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

#include <alibabacloud/mse/model/GetGatewayServiceDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetGatewayServiceDetailResult::GetGatewayServiceDetailResult() :
	ServiceResult()
{}

GetGatewayServiceDetailResult::GetGatewayServiceDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGatewayServiceDetailResult::~GetGatewayServiceDetailResult()
{}

void GetGatewayServiceDetailResult::parse(const std::string &payload)
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
	if(!dataNode["GatewayUniqueId"].isNull())
		data_.gatewayUniqueId = dataNode["GatewayUniqueId"].asString();
	if(!dataNode["GatewayId"].isNull())
		data_.gatewayId = std::stol(dataNode["GatewayId"].asString());
	if(!dataNode["SourceType"].isNull())
		data_.sourceType = dataNode["SourceType"].asString();
	if(!dataNode["Namespace"].isNull())
		data_._namespace = dataNode["Namespace"].asString();
	if(!dataNode["GroupName"].isNull())
		data_.groupName = dataNode["GroupName"].asString();
	if(!dataNode["SourceId"].isNull())
		data_.sourceId = std::stol(dataNode["SourceId"].asString());
	if(!dataNode["ServiceNameInRegistry"].isNull())
		data_.serviceNameInRegistry = dataNode["ServiceNameInRegistry"].asString();
	if(!dataNode["MetaInfo"].isNull())
		data_.metaInfo = dataNode["MetaInfo"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["HealthStatus"].isNull())
		data_.healthStatus = dataNode["HealthStatus"].asString();
	if(!dataNode["HealthCheck"].isNull())
		data_.healthCheck = dataNode["HealthCheck"].asString();
	if(!dataNode["ServiceProtocol"].isNull())
		data_.serviceProtocol = dataNode["ServiceProtocol"].asString();
	auto allVersionsNode = dataNode["Versions"]["VersionsItem"];
	for (auto dataNodeVersionsVersionsItem : allVersionsNode)
	{
		Data::VersionsItem versionsItemObject;
		if(!dataNodeVersionsVersionsItem["Label"].isNull())
			versionsItemObject.label = dataNodeVersionsVersionsItem["Label"].asString();
		if(!dataNodeVersionsVersionsItem["Value"].isNull())
			versionsItemObject.value = dataNodeVersionsVersionsItem["Value"].asString();
		if(!dataNodeVersionsVersionsItem["Type"].isNull())
			versionsItemObject.type = dataNodeVersionsVersionsItem["Type"].asString();
		data_.versions.push_back(versionsItemObject);
	}
	auto allLabelDetailsNode = dataNode["LabelDetails"]["LabelDetailsItem"];
	for (auto dataNodeLabelDetailsLabelDetailsItem : allLabelDetailsNode)
	{
		Data::LabelDetailsItem labelDetailsItemObject;
		if(!dataNodeLabelDetailsLabelDetailsItem["Key"].isNull())
			labelDetailsItemObject.key = dataNodeLabelDetailsLabelDetailsItem["Key"].asString();
		auto allValues = value["Values"]["values"];
		for (auto value : allValues)
			labelDetailsItemObject.values.push_back(value.asString());
		data_.labelDetails.push_back(labelDetailsItemObject);
	}
	auto allVersionDetailsNode = dataNode["VersionDetails"]["VersionDetailsItem"];
	for (auto dataNodeVersionDetailsVersionDetailsItem : allVersionDetailsNode)
	{
		Data::VersionDetailsItem versionDetailsItemObject;
		if(!dataNodeVersionDetailsVersionDetailsItem["EndpointNum"].isNull())
			versionDetailsItemObject.endpointNum = std::stoi(dataNodeVersionDetailsVersionDetailsItem["EndpointNum"].asString());
		if(!dataNodeVersionDetailsVersionDetailsItem["EndpointNumPercent"].isNull())
			versionDetailsItemObject.endpointNumPercent = dataNodeVersionDetailsVersionDetailsItem["EndpointNumPercent"].asString();
		auto serviceVersionNode = value["ServiceVersion"];
		if(!serviceVersionNode["Name"].isNull())
			versionDetailsItemObject.serviceVersion.name = serviceVersionNode["Name"].asString();
		auto allLabelsNode = serviceVersionNode["Labels"]["LabelsItem"];
		for (auto serviceVersionNodeLabelsLabelsItem : allLabelsNode)
		{
			Data::VersionDetailsItem::ServiceVersion::LabelsItem labelsItemObject;
			if(!serviceVersionNodeLabelsLabelsItem["Key"].isNull())
				labelsItemObject.key = serviceVersionNodeLabelsLabelsItem["Key"].asString();
			if(!serviceVersionNodeLabelsLabelsItem["Value"].isNull())
				labelsItemObject.value = serviceVersionNodeLabelsLabelsItem["Value"].asString();
			versionDetailsItemObject.serviceVersion.labels.push_back(labelsItemObject);
		}
		data_.versionDetails.push_back(versionDetailsItemObject);
	}
	auto allPortTrafficPolicyListNode = dataNode["PortTrafficPolicyList"]["PortTrafficPolicyListItem"];
	for (auto dataNodePortTrafficPolicyListPortTrafficPolicyListItem : allPortTrafficPolicyListNode)
	{
		Data::PortTrafficPolicyListItem portTrafficPolicyListItemObject;
		if(!dataNodePortTrafficPolicyListPortTrafficPolicyListItem["Id"].isNull())
			portTrafficPolicyListItemObject.id = std::stol(dataNodePortTrafficPolicyListPortTrafficPolicyListItem["Id"].asString());
		if(!dataNodePortTrafficPolicyListPortTrafficPolicyListItem["ServiceId"].isNull())
			portTrafficPolicyListItemObject.serviceId = std::stol(dataNodePortTrafficPolicyListPortTrafficPolicyListItem["ServiceId"].asString());
		if(!dataNodePortTrafficPolicyListPortTrafficPolicyListItem["ServicePort"].isNull())
			portTrafficPolicyListItemObject.servicePort = std::stoi(dataNodePortTrafficPolicyListPortTrafficPolicyListItem["ServicePort"].asString());
		if(!dataNodePortTrafficPolicyListPortTrafficPolicyListItem["GatewayUniqueId"].isNull())
			portTrafficPolicyListItemObject.gatewayUniqueId = dataNodePortTrafficPolicyListPortTrafficPolicyListItem["GatewayUniqueId"].asString();
		if(!dataNodePortTrafficPolicyListPortTrafficPolicyListItem["GmtCreate"].isNull())
			portTrafficPolicyListItemObject.gmtCreate = dataNodePortTrafficPolicyListPortTrafficPolicyListItem["GmtCreate"].asString();
		if(!dataNodePortTrafficPolicyListPortTrafficPolicyListItem["GmtModified"].isNull())
			portTrafficPolicyListItemObject.gmtModified = dataNodePortTrafficPolicyListPortTrafficPolicyListItem["GmtModified"].asString();
		auto trafficPolicyNode = value["TrafficPolicy"];
		auto tlsSettingNode = trafficPolicyNode["TlsSetting"];
		if(!tlsSettingNode["TlsMode"].isNull())
			portTrafficPolicyListItemObject.trafficPolicy.tlsSetting.tlsMode = tlsSettingNode["TlsMode"].asString();
		if(!tlsSettingNode["CertId"].isNull())
			portTrafficPolicyListItemObject.trafficPolicy.tlsSetting.certId = tlsSettingNode["CertId"].asString();
		if(!tlsSettingNode["CaCertContent"].isNull())
			portTrafficPolicyListItemObject.trafficPolicy.tlsSetting.caCertContent = tlsSettingNode["CaCertContent"].asString();
		if(!tlsSettingNode["Sni"].isNull())
			portTrafficPolicyListItemObject.trafficPolicy.tlsSetting.sni = tlsSettingNode["Sni"].asString();
		auto loadBalancerSettingsNode = trafficPolicyNode["LoadBalancerSettings"];
		if(!loadBalancerSettingsNode["LoadbalancerType"].isNull())
			portTrafficPolicyListItemObject.trafficPolicy.loadBalancerSettings.loadbalancerType = loadBalancerSettingsNode["LoadbalancerType"].asString();
		if(!loadBalancerSettingsNode["WarmupDuration"].isNull())
			portTrafficPolicyListItemObject.trafficPolicy.loadBalancerSettings.warmupDuration = std::stol(loadBalancerSettingsNode["WarmupDuration"].asString());
		auto consistentHashLBConfigNode = loadBalancerSettingsNode["ConsistentHashLBConfig"];
		if(!consistentHashLBConfigNode["ParameterName"].isNull())
			portTrafficPolicyListItemObject.trafficPolicy.loadBalancerSettings.consistentHashLBConfig.parameterName = consistentHashLBConfigNode["ParameterName"].asString();
		if(!consistentHashLBConfigNode["ConsistentHashLBType"].isNull())
			portTrafficPolicyListItemObject.trafficPolicy.loadBalancerSettings.consistentHashLBConfig.consistentHashLBType = consistentHashLBConfigNode["ConsistentHashLBType"].asString();
		auto httpCookieNode = consistentHashLBConfigNode["HttpCookie"];
		if(!httpCookieNode["Name"].isNull())
			portTrafficPolicyListItemObject.trafficPolicy.loadBalancerSettings.consistentHashLBConfig.httpCookie.name = httpCookieNode["Name"].asString();
		if(!httpCookieNode["Path"].isNull())
			portTrafficPolicyListItemObject.trafficPolicy.loadBalancerSettings.consistentHashLBConfig.httpCookie.path = httpCookieNode["Path"].asString();
		if(!httpCookieNode["TTL"].isNull())
			portTrafficPolicyListItemObject.trafficPolicy.loadBalancerSettings.consistentHashLBConfig.httpCookie.tTL = httpCookieNode["TTL"].asString();
		data_.portTrafficPolicyList.push_back(portTrafficPolicyListItemObject);
	}
	auto gatewayTrafficPolicyNode = dataNode["GatewayTrafficPolicy"];
	auto tlsSetting1Node = gatewayTrafficPolicyNode["TlsSetting"];
	if(!tlsSetting1Node["TlsMode"].isNull())
		data_.gatewayTrafficPolicy.tlsSetting1.tlsMode = tlsSetting1Node["TlsMode"].asString();
	if(!tlsSetting1Node["CertId"].isNull())
		data_.gatewayTrafficPolicy.tlsSetting1.certId = tlsSetting1Node["CertId"].asString();
	if(!tlsSetting1Node["CaCertContent"].isNull())
		data_.gatewayTrafficPolicy.tlsSetting1.caCertContent = tlsSetting1Node["CaCertContent"].asString();
	if(!tlsSetting1Node["Sni"].isNull())
		data_.gatewayTrafficPolicy.tlsSetting1.sni = tlsSetting1Node["Sni"].asString();
	auto loadBalancerSettings2Node = gatewayTrafficPolicyNode["LoadBalancerSettings"];
	if(!loadBalancerSettings2Node["LoadbalancerType"].isNull())
		data_.gatewayTrafficPolicy.loadBalancerSettings2.loadbalancerType = loadBalancerSettings2Node["LoadbalancerType"].asString();
	if(!loadBalancerSettings2Node["WarmupDuration"].isNull())
		data_.gatewayTrafficPolicy.loadBalancerSettings2.warmupDuration = std::stol(loadBalancerSettings2Node["WarmupDuration"].asString());
	auto consistentHashLBConfig3Node = loadBalancerSettings2Node["ConsistentHashLBConfig"];
	if(!consistentHashLBConfig3Node["ParameterName"].isNull())
		data_.gatewayTrafficPolicy.loadBalancerSettings2.consistentHashLBConfig3.parameterName = consistentHashLBConfig3Node["ParameterName"].asString();
	if(!consistentHashLBConfig3Node["ConsistentHashLBType"].isNull())
		data_.gatewayTrafficPolicy.loadBalancerSettings2.consistentHashLBConfig3.consistentHashLBType = consistentHashLBConfig3Node["ConsistentHashLBType"].asString();
	auto httpCookie4Node = consistentHashLBConfig3Node["HttpCookie"];
	if(!httpCookie4Node["Name"].isNull())
		data_.gatewayTrafficPolicy.loadBalancerSettings2.consistentHashLBConfig3.httpCookie4.name = httpCookie4Node["Name"].asString();
	if(!httpCookie4Node["Path"].isNull())
		data_.gatewayTrafficPolicy.loadBalancerSettings2.consistentHashLBConfig3.httpCookie4.path = httpCookie4Node["Path"].asString();
	if(!httpCookie4Node["TTL"].isNull())
		data_.gatewayTrafficPolicy.loadBalancerSettings2.consistentHashLBConfig3.httpCookie4.tTL = httpCookie4Node["TTL"].asString();
		auto allIps = dataNode["Ips"]["Ips"];
		for (auto value : allIps)
			data_.ips.push_back(value.asString());
		auto allPorts = dataNode["Ports"]["ports"];
		for (auto value : allPorts)
			data_.ports.push_back(value.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetGatewayServiceDetailResult::getMessage()const
{
	return message_;
}

int GetGatewayServiceDetailResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetGatewayServiceDetailResult::Data GetGatewayServiceDetailResult::getData()const
{
	return data_;
}

int GetGatewayServiceDetailResult::getCode()const
{
	return code_;
}

bool GetGatewayServiceDetailResult::getSuccess()const
{
	return success_;
}

