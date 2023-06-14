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

#include <alibabacloud/ga/model/ListListenersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListListenersResult::ListListenersResult() :
	ServiceResult()
{}

ListListenersResult::ListListenersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListListenersResult::~ListListenersResult()
{}

void ListListenersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListenersNode = value["Listeners"]["ListenersItem"];
	for (auto valueListenersListenersItem : allListenersNode)
	{
		ListenersItem listenersObject;
		if(!valueListenersListenersItem["ListenerId"].isNull())
			listenersObject.listenerId = valueListenersListenersItem["ListenerId"].asString();
		if(!valueListenersListenersItem["Description"].isNull())
			listenersObject.description = valueListenersListenersItem["Description"].asString();
		if(!valueListenersListenersItem["State"].isNull())
			listenersObject.state = valueListenersListenersItem["State"].asString();
		if(!valueListenersListenersItem["ClientAffinity"].isNull())
			listenersObject.clientAffinity = valueListenersListenersItem["ClientAffinity"].asString();
		if(!valueListenersListenersItem["Protocol"].isNull())
			listenersObject.protocol = valueListenersListenersItem["Protocol"].asString();
		if(!valueListenersListenersItem["CreateTime"].isNull())
			listenersObject.createTime = std::stol(valueListenersListenersItem["CreateTime"].asString());
		if(!valueListenersListenersItem["Name"].isNull())
			listenersObject.name = valueListenersListenersItem["Name"].asString();
		if(!valueListenersListenersItem["ProxyProtocol"].isNull())
			listenersObject.proxyProtocol = valueListenersListenersItem["ProxyProtocol"].asString() == "true";
		if(!valueListenersListenersItem["AcceleratorId"].isNull())
			listenersObject.acceleratorId = valueListenersListenersItem["AcceleratorId"].asString();
		if(!valueListenersListenersItem["SecurityPolicyId"].isNull())
			listenersObject.securityPolicyId = valueListenersListenersItem["SecurityPolicyId"].asString();
		if(!valueListenersListenersItem["Type"].isNull())
			listenersObject.type = valueListenersListenersItem["Type"].asString();
		auto allCertificatesNode = valueListenersListenersItem["Certificates"]["Certificate"];
		for (auto valueListenersListenersItemCertificatesCertificate : allCertificatesNode)
		{
			ListenersItem::Certificate certificatesObject;
			if(!valueListenersListenersItemCertificatesCertificate["Type"].isNull())
				certificatesObject.type = valueListenersListenersItemCertificatesCertificate["Type"].asString();
			if(!valueListenersListenersItemCertificatesCertificate["Id"].isNull())
				certificatesObject.id = valueListenersListenersItemCertificatesCertificate["Id"].asString();
			listenersObject.certificates.push_back(certificatesObject);
		}
		auto allBackendPortsNode = valueListenersListenersItem["BackendPorts"]["BackendPort"];
		for (auto valueListenersListenersItemBackendPortsBackendPort : allBackendPortsNode)
		{
			ListenersItem::BackendPort backendPortsObject;
			if(!valueListenersListenersItemBackendPortsBackendPort["FromPort"].isNull())
				backendPortsObject.fromPort = valueListenersListenersItemBackendPortsBackendPort["FromPort"].asString();
			if(!valueListenersListenersItemBackendPortsBackendPort["ToPort"].isNull())
				backendPortsObject.toPort = valueListenersListenersItemBackendPortsBackendPort["ToPort"].asString();
			listenersObject.backendPorts.push_back(backendPortsObject);
		}
		auto allPortRangesNode = valueListenersListenersItem["PortRanges"]["PortRangesItem"];
		for (auto valueListenersListenersItemPortRangesPortRangesItem : allPortRangesNode)
		{
			ListenersItem::PortRangesItem portRangesObject;
			if(!valueListenersListenersItemPortRangesPortRangesItem["FromPort"].isNull())
				portRangesObject.fromPort = std::stoi(valueListenersListenersItemPortRangesPortRangesItem["FromPort"].asString());
			if(!valueListenersListenersItemPortRangesPortRangesItem["ToPort"].isNull())
				portRangesObject.toPort = std::stoi(valueListenersListenersItemPortRangesPortRangesItem["ToPort"].asString());
			listenersObject.portRanges.push_back(portRangesObject);
		}
		auto xForwardedForConfigNode = value["XForwardedForConfig"];
		if(!xForwardedForConfigNode["XForwardedForGaIdEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForGaIdEnabled = xForwardedForConfigNode["XForwardedForGaIdEnabled"].asString() == "true";
		if(!xForwardedForConfigNode["XRealIpEnabled"].isNull())
			listenersObject.xForwardedForConfig.xRealIpEnabled = xForwardedForConfigNode["XRealIpEnabled"].asString() == "true";
		if(!xForwardedForConfigNode["XForwardedForGaApEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForGaApEnabled = xForwardedForConfigNode["XForwardedForGaApEnabled"].asString() == "true";
		if(!xForwardedForConfigNode["XForwardedForProtoEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForProtoEnabled = xForwardedForConfigNode["XForwardedForProtoEnabled"].asString() == "true";
		if(!xForwardedForConfigNode["XForwardedForPortEnabled"].isNull())
			listenersObject.xForwardedForConfig.xForwardedForPortEnabled = xForwardedForConfigNode["XForwardedForPortEnabled"].asString() == "true";
		listeners_.push_back(listenersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<ListListenersResult::ListenersItem> ListListenersResult::getListeners()const
{
	return listeners_;
}

int ListListenersResult::getTotalCount()const
{
	return totalCount_;
}

int ListListenersResult::getPageSize()const
{
	return pageSize_;
}

int ListListenersResult::getPageNumber()const
{
	return pageNumber_;
}

