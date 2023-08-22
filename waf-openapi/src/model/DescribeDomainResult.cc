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

#include <alibabacloud/waf-openapi/model/DescribeDomainResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeDomainResult::DescribeDomainResult() :
	ServiceResult()
{}

DescribeDomainResult::DescribeDomainResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainResult::~DescribeDomainResult()
{}

void DescribeDomainResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto domainNode = value["Domain"];
	if(!domainNode["HttpToUserIp"].isNull())
		domain_.httpToUserIp = std::stoi(domainNode["HttpToUserIp"].asString());
	if(!domainNode["SniStatus"].isNull())
		domain_.sniStatus = std::stoi(domainNode["SniStatus"].asString());
	if(!domainNode["IsAccessProduct"].isNull())
		domain_.isAccessProduct = std::stoi(domainNode["IsAccessProduct"].asString());
	if(!domainNode["AccessHeaderMode"].isNull())
		domain_.accessHeaderMode = std::stoi(domainNode["AccessHeaderMode"].asString());
	if(!domainNode["HttpsRedirect"].isNull())
		domain_.httpsRedirect = std::stoi(domainNode["HttpsRedirect"].asString());
	if(!domainNode["IpFollowStatus"].isNull())
		domain_.ipFollowStatus = std::stoi(domainNode["IpFollowStatus"].asString());
	if(!domainNode["LoadBalancing"].isNull())
		domain_.loadBalancing = std::stoi(domainNode["LoadBalancing"].asString());
	if(!domainNode["AccessType"].isNull())
		domain_.accessType = domainNode["AccessType"].asString();
	if(!domainNode["Version"].isNull())
		domain_.version = std::stol(domainNode["Version"].asString());
	if(!domainNode["ClusterType"].isNull())
		domain_.clusterType = std::stoi(domainNode["ClusterType"].asString());
	if(!domainNode["ReadTime"].isNull())
		domain_.readTime = std::stoi(domainNode["ReadTime"].asString());
	if(!domainNode["WriteTime"].isNull())
		domain_.writeTime = std::stoi(domainNode["WriteTime"].asString());
	if(!domainNode["SniHost"].isNull())
		domain_.sniHost = domainNode["SniHost"].asString();
	if(!domainNode["ResourceGroupId"].isNull())
		domain_.resourceGroupId = domainNode["ResourceGroupId"].asString();
	if(!domainNode["Cname"].isNull())
		domain_.cname = domainNode["Cname"].asString();
	if(!domainNode["ConnectionTime"].isNull())
		domain_.connectionTime = std::stoi(domainNode["ConnectionTime"].asString());
	if(!domainNode["Retry"].isNull())
		domain_.retry = domainNode["Retry"].asString() == "true";
	if(!domainNode["Keepalive"].isNull())
		domain_.keepalive = domainNode["Keepalive"].asString() == "true";
	if(!domainNode["KeepaliveRequests"].isNull())
		domain_.keepaliveRequests = std::stoi(domainNode["KeepaliveRequests"].asString());
	if(!domainNode["KeepaliveTimeout"].isNull())
		domain_.keepaliveTimeout = std::stoi(domainNode["KeepaliveTimeout"].asString());
	auto allLogHeadersNode = domainNode["LogHeaders"]["LogHeader"];
	for (auto domainNodeLogHeadersLogHeader : allLogHeadersNode)
	{
		Domain::LogHeader logHeaderObject;
		if(!domainNodeLogHeadersLogHeader["k"].isNull())
			logHeaderObject.k = domainNodeLogHeadersLogHeader["k"].asString();
		if(!domainNodeLogHeadersLogHeader["v"].isNull())
			logHeaderObject.v = domainNodeLogHeadersLogHeader["v"].asString();
		domain_.logHeaders.push_back(logHeaderObject);
	}
	auto allCloudNativeInstancesNode = domainNode["CloudNativeInstances"]["CloudNativeInstancesItem"];
	for (auto domainNodeCloudNativeInstancesCloudNativeInstancesItem : allCloudNativeInstancesNode)
	{
		Domain::CloudNativeInstancesItem cloudNativeInstancesItemObject;
		if(!domainNodeCloudNativeInstancesCloudNativeInstancesItem["RedirectionTypeName"].isNull())
			cloudNativeInstancesItemObject.redirectionTypeName = domainNodeCloudNativeInstancesCloudNativeInstancesItem["RedirectionTypeName"].asString();
		if(!domainNodeCloudNativeInstancesCloudNativeInstancesItem["CloudNativeProductName"].isNull())
			cloudNativeInstancesItemObject.cloudNativeProductName = domainNodeCloudNativeInstancesCloudNativeInstancesItem["CloudNativeProductName"].asString();
		if(!domainNodeCloudNativeInstancesCloudNativeInstancesItem["InstanceId"].isNull())
			cloudNativeInstancesItemObject.instanceId = domainNodeCloudNativeInstancesCloudNativeInstancesItem["InstanceId"].asString();
		auto allProtocolPortConfigsNode = domainNodeCloudNativeInstancesCloudNativeInstancesItem["ProtocolPortConfigs"]["ProtocolPortConfigsItem"];
		for (auto domainNodeCloudNativeInstancesCloudNativeInstancesItemProtocolPortConfigsProtocolPortConfigsItem : allProtocolPortConfigsNode)
		{
			Domain::CloudNativeInstancesItem::ProtocolPortConfigsItem protocolPortConfigsObject;
			if(!domainNodeCloudNativeInstancesCloudNativeInstancesItemProtocolPortConfigsProtocolPortConfigsItem["Protocol"].isNull())
				protocolPortConfigsObject.protocol = domainNodeCloudNativeInstancesCloudNativeInstancesItemProtocolPortConfigsProtocolPortConfigsItem["Protocol"].asString();
			auto allPorts = value["Ports"]["Port"];
			for (auto value : allPorts)
				protocolPortConfigsObject.ports.push_back(value.asString());
			cloudNativeInstancesItemObject.protocolPortConfigs.push_back(protocolPortConfigsObject);
		}
		auto allIPAddressList = value["IPAddressList"]["Ip"];
		for (auto value : allIPAddressList)
			cloudNativeInstancesItemObject.iPAddressList.push_back(value.asString());
		domain_.cloudNativeInstances.push_back(cloudNativeInstancesItemObject);
	}
		auto allHttpPort = domainNode["HttpPort"]["HttpPort"];
		for (auto value : allHttpPort)
			domain_.httpPort.push_back(value.asString());
		auto allHttp2Port = domainNode["Http2Port"]["Http2Port"];
		for (auto value : allHttp2Port)
			domain_.http2Port.push_back(value.asString());
		auto allSourceIps = domainNode["SourceIps"]["SourceIp"];
		for (auto value : allSourceIps)
			domain_.sourceIps.push_back(value.asString());
		auto allHttpsPort = domainNode["HttpsPort"]["HttpsPort"];
		for (auto value : allHttpsPort)
			domain_.httpsPort.push_back(value.asString());
		auto allAccessHeaders = domainNode["AccessHeaders"]["AccessHeaders"];
		for (auto value : allAccessHeaders)
			domain_.accessHeaders.push_back(value.asString());

}

DescribeDomainResult::Domain DescribeDomainResult::getDomain()const
{
	return domain_;
}

