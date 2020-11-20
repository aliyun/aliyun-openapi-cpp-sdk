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
	if(!domainNode["IpFollowStatus"].isNull())
		domain_.ipFollowStatus = std::stoi(domainNode["IpFollowStatus"].asString());
	if(!domainNode["HttpToUserIp"].isNull())
		domain_.httpToUserIp = std::stoi(domainNode["HttpToUserIp"].asString());
	if(!domainNode["HttpsRedirect"].isNull())
		domain_.httpsRedirect = std::stoi(domainNode["HttpsRedirect"].asString());
	if(!domainNode["LoadBalancing"].isNull())
		domain_.loadBalancing = std::stoi(domainNode["LoadBalancing"].asString());
	if(!domainNode["Cname"].isNull())
		domain_.cname = domainNode["Cname"].asString();
	if(!domainNode["IsAccessProduct"].isNull())
		domain_.isAccessProduct = std::stoi(domainNode["IsAccessProduct"].asString());
	if(!domainNode["Version"].isNull())
		domain_.version = std::stol(domainNode["Version"].asString());
	if(!domainNode["ClusterType"].isNull())
		domain_.clusterType = std::stoi(domainNode["ClusterType"].asString());
	if(!domainNode["ConnectionTime"].isNull())
		domain_.connectionTime = std::stoi(domainNode["ConnectionTime"].asString());
	if(!domainNode["ReadTime"].isNull())
		domain_.readTime = std::stoi(domainNode["ReadTime"].asString());
	if(!domainNode["WriteTime"].isNull())
		domain_.writeTime = std::stoi(domainNode["WriteTime"].asString());
	if(!domainNode["ResourceGroupId"].isNull())
		domain_.resourceGroupId = domainNode["ResourceGroupId"].asString();
	if(!domainNode["AccessType"].isNull())
		domain_.accessType = domainNode["AccessType"].asString();
	auto allLogHeadersNode = domainNode["LogHeaders"]["LogHeader"];
	for (auto domainNodeLogHeadersLogHeader : allLogHeadersNode)
	{
		Domain::LogHeader logHeaderObject;
		if(!domainNodeLogHeadersLogHeader["v"].isNull())
			logHeaderObject.v = domainNodeLogHeadersLogHeader["v"].asString();
		if(!domainNodeLogHeadersLogHeader["k"].isNull())
			logHeaderObject.k = domainNodeLogHeadersLogHeader["k"].asString();
		domain_.logHeaders.push_back(logHeaderObject);
	}
	auto allCloudNativeInstancesNode = domainNode["CloudNativeInstances"]["CloudNativeInstancesItem"];
	for (auto domainNodeCloudNativeInstancesCloudNativeInstancesItem : allCloudNativeInstancesNode)
	{
		Domain::CloudNativeInstancesItem cloudNativeInstancesItemObject;
		if(!domainNodeCloudNativeInstancesCloudNativeInstancesItem["CloudNativeProductName"].isNull())
			cloudNativeInstancesItemObject.cloudNativeProductName = domainNodeCloudNativeInstancesCloudNativeInstancesItem["CloudNativeProductName"].asString();
		if(!domainNodeCloudNativeInstancesCloudNativeInstancesItem["InstanceId"].isNull())
			cloudNativeInstancesItemObject.instanceId = domainNodeCloudNativeInstancesCloudNativeInstancesItem["InstanceId"].asString();
		if(!domainNodeCloudNativeInstancesCloudNativeInstancesItem["IPAddressList"].isNull())
			cloudNativeInstancesItemObject.iPAddressList = domainNodeCloudNativeInstancesCloudNativeInstancesItem["IPAddressList"].asString();
		auto allProtocolPortConfigsNode = domainNodeCloudNativeInstancesCloudNativeInstancesItem["ProtocolPortConfigs"]["ProtocolPortConfigsItem"];
		for (auto domainNodeCloudNativeInstancesCloudNativeInstancesItemProtocolPortConfigsProtocolPortConfigsItem : allProtocolPortConfigsNode)
		{
			Domain::CloudNativeInstancesItem::ProtocolPortConfigsItem protocolPortConfigsObject;
			if(!domainNodeCloudNativeInstancesCloudNativeInstancesItemProtocolPortConfigsProtocolPortConfigsItem["Protocol"].isNull())
				protocolPortConfigsObject.protocol = domainNodeCloudNativeInstancesCloudNativeInstancesItemProtocolPortConfigsProtocolPortConfigsItem["Protocol"].asString();
			if(!domainNodeCloudNativeInstancesCloudNativeInstancesItemProtocolPortConfigsProtocolPortConfigsItem["Ports"].isNull())
				protocolPortConfigsObject.ports = domainNodeCloudNativeInstancesCloudNativeInstancesItemProtocolPortConfigsProtocolPortConfigsItem["Ports"].asString();
			cloudNativeInstancesItemObject.protocolPortConfigs.push_back(protocolPortConfigsObject);
		}
		domain_.cloudNativeInstances.push_back(cloudNativeInstancesItemObject);
	}
		auto allSourceIps = domainNode["SourceIps"]["SourceIp"];
		for (auto value : allSourceIps)
			domain_.sourceIps.push_back(value.asString());
		auto allHttp2Port = domainNode["Http2Port"]["Http2Port"];
		for (auto value : allHttp2Port)
			domain_.http2Port.push_back(value.asString());
		auto allHttpPort = domainNode["HttpPort"]["HttpPort"];
		for (auto value : allHttpPort)
			domain_.httpPort.push_back(value.asString());
		auto allHttpsPort = domainNode["HttpsPort"]["HttpsPort"];
		for (auto value : allHttpsPort)
			domain_.httpsPort.push_back(value.asString());

}

DescribeDomainResult::Domain DescribeDomainResult::getDomain()const
{
	return domain_;
}

