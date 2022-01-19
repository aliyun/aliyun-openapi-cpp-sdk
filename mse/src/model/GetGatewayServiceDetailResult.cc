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
		auto allIps = dataNode["Ips"]["Ips"];
		for (auto value : allIps)
			data_.ips.push_back(value.asString());
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

