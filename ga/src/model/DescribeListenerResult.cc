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

#include <alibabacloud/ga/model/DescribeListenerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DescribeListenerResult::DescribeListenerResult() :
	ServiceResult()
{}

DescribeListenerResult::DescribeListenerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeListenerResult::~DescribeListenerResult()
{}

void DescribeListenerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBackendPortsNode = value["BackendPorts"]["BackendPort"];
	for (auto valueBackendPortsBackendPort : allBackendPortsNode)
	{
		BackendPort backendPortsObject;
		if(!valueBackendPortsBackendPort["FromPort"].isNull())
			backendPortsObject.fromPort = valueBackendPortsBackendPort["FromPort"].asString();
		if(!valueBackendPortsBackendPort["ToPort"].isNull())
			backendPortsObject.toPort = valueBackendPortsBackendPort["ToPort"].asString();
		backendPorts_.push_back(backendPortsObject);
	}
	auto allPortRangesNode = value["PortRanges"]["PortRangesItem"];
	for (auto valuePortRangesPortRangesItem : allPortRangesNode)
	{
		PortRangesItem portRangesObject;
		if(!valuePortRangesPortRangesItem["FromPort"].isNull())
			portRangesObject.fromPort = std::stoi(valuePortRangesPortRangesItem["FromPort"].asString());
		if(!valuePortRangesPortRangesItem["ToPort"].isNull())
			portRangesObject.toPort = std::stoi(valuePortRangesPortRangesItem["ToPort"].asString());
		portRanges_.push_back(portRangesObject);
	}
	auto allCertificatesNode = value["Certificates"]["Certificate"];
	for (auto valueCertificatesCertificate : allCertificatesNode)
	{
		Certificate certificatesObject;
		if(!valueCertificatesCertificate["Type"].isNull())
			certificatesObject.type = valueCertificatesCertificate["Type"].asString();
		if(!valueCertificatesCertificate["Id"].isNull())
			certificatesObject.id = valueCertificatesCertificate["Id"].asString();
		certificates_.push_back(certificatesObject);
	}
	auto allRelatedAclsNode = value["RelatedAcls"]["relatedAclsItem"];
	for (auto valueRelatedAclsrelatedAclsItem : allRelatedAclsNode)
	{
		RelatedAclsItem relatedAclsObject;
		if(!valueRelatedAclsrelatedAclsItem["Status"].isNull())
			relatedAclsObject.status = valueRelatedAclsrelatedAclsItem["Status"].asString();
		if(!valueRelatedAclsrelatedAclsItem["AclId"].isNull())
			relatedAclsObject.aclId = valueRelatedAclsrelatedAclsItem["AclId"].asString();
		relatedAcls_.push_back(relatedAclsObject);
	}
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["ProxyProtocol"].isNull())
		proxyProtocol_ = value["ProxyProtocol"].asString() == "true";
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["AclType"].isNull())
		aclType_ = value["AclType"].asString();
	if(!value["Protocol"].isNull())
		protocol_ = value["Protocol"].asString();
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["ClientAffinity"].isNull())
		clientAffinity_ = value["ClientAffinity"].asString();
	if(!value["ListenerId"].isNull())
		listenerId_ = value["ListenerId"].asString();

}

std::string DescribeListenerResult::getDescription()const
{
	return description_;
}

std::vector<DescribeListenerResult::BackendPort> DescribeListenerResult::getBackendPorts()const
{
	return backendPorts_;
}

std::vector<DescribeListenerResult::PortRangesItem> DescribeListenerResult::getPortRanges()const
{
	return portRanges_;
}

bool DescribeListenerResult::getProxyProtocol()const
{
	return proxyProtocol_;
}

std::string DescribeListenerResult::getCreateTime()const
{
	return createTime_;
}

std::vector<DescribeListenerResult::Certificate> DescribeListenerResult::getCertificates()const
{
	return certificates_;
}

std::vector<DescribeListenerResult::RelatedAclsItem> DescribeListenerResult::getRelatedAcls()const
{
	return relatedAcls_;
}

std::string DescribeListenerResult::getName()const
{
	return name_;
}

std::string DescribeListenerResult::getState()const
{
	return state_;
}

std::string DescribeListenerResult::getAclType()const
{
	return aclType_;
}

std::string DescribeListenerResult::getProtocol()const
{
	return protocol_;
}

std::string DescribeListenerResult::getAcceleratorId()const
{
	return acceleratorId_;
}

std::string DescribeListenerResult::getClientAffinity()const
{
	return clientAffinity_;
}

std::string DescribeListenerResult::getListenerId()const
{
	return listenerId_;
}

