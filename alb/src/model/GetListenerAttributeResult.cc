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

#include <alibabacloud/alb/model/GetListenerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

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
	auto allCertificatesNode = value["Certificates"]["Certificate"];
	for (auto valueCertificatesCertificate : allCertificatesNode)
	{
		Certificate certificatesObject;
		if(!valueCertificatesCertificate["CertificateId"].isNull())
			certificatesObject.certificateId = valueCertificatesCertificate["CertificateId"].asString();
		certificates_.push_back(certificatesObject);
	}
	auto allCaCertificatesNode = value["CaCertificates"]["Certificate"];
	for (auto valueCaCertificatesCertificate : allCaCertificatesNode)
	{
		Certificate1 caCertificatesObject;
		if(!valueCaCertificatesCertificate["CertificateId"].isNull())
			caCertificatesObject.certificateId = valueCaCertificatesCertificate["CertificateId"].asString();
		if(!valueCaCertificatesCertificate["Status"].isNull())
			caCertificatesObject.status = valueCaCertificatesCertificate["Status"].asString();
		if(!valueCaCertificatesCertificate["IsDefault"].isNull())
			caCertificatesObject.isDefault = valueCaCertificatesCertificate["IsDefault"].asString() == "true";
		caCertificates_.push_back(caCertificatesObject);
	}
	auto allDefaultActionsNode = value["DefaultActions"]["defaultAction"];
	for (auto valueDefaultActionsdefaultAction : allDefaultActionsNode)
	{
		DefaultAction defaultActionsObject;
		if(!valueDefaultActionsdefaultAction["Type"].isNull())
			defaultActionsObject.type = valueDefaultActionsdefaultAction["Type"].asString();
		auto forwardGroupConfigNode = value["ForwardGroupConfig"];
		auto allServerGroupTuplesNode = forwardGroupConfigNode["ServerGroupTuples"]["serverGroupTuple"];
		for (auto forwardGroupConfigNodeServerGroupTuplesserverGroupTuple : allServerGroupTuplesNode)
		{
			DefaultAction::ForwardGroupConfig::ServerGroupTuple serverGroupTupleObject;
			if(!forwardGroupConfigNodeServerGroupTuplesserverGroupTuple["ServerGroupId"].isNull())
				serverGroupTupleObject.serverGroupId = forwardGroupConfigNodeServerGroupTuplesserverGroupTuple["ServerGroupId"].asString();
			defaultActionsObject.forwardGroupConfig.serverGroupTuples.push_back(serverGroupTupleObject);
		}
		defaultActions_.push_back(defaultActionsObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["Key"].isNull())
			tagsObject.key = valueTagsTag["Key"].asString();
		if(!valueTagsTag["Value"].isNull())
			tagsObject.value = valueTagsTag["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto allAssociatedResourcesNode = value["AssociatedResources"]["AssociatedResource"];
	for (auto valueAssociatedResourcesAssociatedResource : allAssociatedResourcesNode)
	{
		AssociatedResource associatedResourcesObject;
		if(!valueAssociatedResourcesAssociatedResource["AssociatedResourceType"].isNull())
			associatedResourcesObject.associatedResourceType = valueAssociatedResourcesAssociatedResource["AssociatedResourceType"].asString();
		if(!valueAssociatedResourcesAssociatedResource["AssociatedResourceId"].isNull())
			associatedResourcesObject.associatedResourceId = valueAssociatedResourcesAssociatedResource["AssociatedResourceId"].asString();
		if(!valueAssociatedResourcesAssociatedResource["PolicyId"].isNull())
			associatedResourcesObject.policyId = valueAssociatedResourcesAssociatedResource["PolicyId"].asString();
		if(!valueAssociatedResourcesAssociatedResource["Status"].isNull())
			associatedResourcesObject.status = valueAssociatedResourcesAssociatedResource["Status"].asString();
		if(!valueAssociatedResourcesAssociatedResource["AssociatedMode"].isNull())
			associatedResourcesObject.associatedMode = valueAssociatedResourcesAssociatedResource["AssociatedMode"].asString();
		associatedResources_.push_back(associatedResourcesObject);
	}
	auto aclConfigNode = value["AclConfig"];
	if(!aclConfigNode["AclType"].isNull())
		aclConfig_.aclType = aclConfigNode["AclType"].asString();
	auto allAclRelationsNode = aclConfigNode["AclRelations"]["aclRelation"];
	for (auto aclConfigNodeAclRelationsaclRelation : allAclRelationsNode)
	{
		AclConfig::AclRelation aclRelationObject;
		if(!aclConfigNodeAclRelationsaclRelation["AclId"].isNull())
			aclRelationObject.aclId = aclConfigNodeAclRelationsaclRelation["AclId"].asString();
		if(!aclConfigNodeAclRelationsaclRelation["Status"].isNull())
			aclRelationObject.status = aclConfigNodeAclRelationsaclRelation["Status"].asString();
		aclConfig_.aclRelations.push_back(aclRelationObject);
	}
	auto logConfigNode = value["LogConfig"];
	if(!logConfigNode["AccessLogRecordCustomizedHeadersEnabled"].isNull())
		logConfig_.accessLogRecordCustomizedHeadersEnabled = logConfigNode["AccessLogRecordCustomizedHeadersEnabled"].asString() == "true";
	auto accessLogTracingConfigNode = logConfigNode["AccessLogTracingConfig"];
	if(!accessLogTracingConfigNode["TracingEnabled"].isNull())
		logConfig_.accessLogTracingConfig.tracingEnabled = accessLogTracingConfigNode["TracingEnabled"].asString() == "true";
	if(!accessLogTracingConfigNode["TracingSample"].isNull())
		logConfig_.accessLogTracingConfig.tracingSample = std::stoi(accessLogTracingConfigNode["TracingSample"].asString());
	if(!accessLogTracingConfigNode["TracingType"].isNull())
		logConfig_.accessLogTracingConfig.tracingType = accessLogTracingConfigNode["TracingType"].asString();
	auto quicConfigNode = value["QuicConfig"];
	if(!quicConfigNode["QuicListenerId"].isNull())
		quicConfig_.quicListenerId = quicConfigNode["QuicListenerId"].asString();
	if(!quicConfigNode["QuicUpgradeEnabled"].isNull())
		quicConfig_.quicUpgradeEnabled = quicConfigNode["QuicUpgradeEnabled"].asString() == "true";
	auto xForwardedForConfigNode = value["XForwardedForConfig"];
	if(!xForwardedForConfigNode["XForwardedForClientCertClientVerifyAlias"].isNull())
		xForwardedForConfig_.xForwardedForClientCertClientVerifyAlias = xForwardedForConfigNode["XForwardedForClientCertClientVerifyAlias"].asString();
	if(!xForwardedForConfigNode["XForwardedForClientCertClientVerifyEnabled"].isNull())
		xForwardedForConfig_.xForwardedForClientCertClientVerifyEnabled = xForwardedForConfigNode["XForwardedForClientCertClientVerifyEnabled"].asString() == "true";
	if(!xForwardedForConfigNode["XForwardedForClientCertFingerprintAlias"].isNull())
		xForwardedForConfig_.xForwardedForClientCertFingerprintAlias = xForwardedForConfigNode["XForwardedForClientCertFingerprintAlias"].asString();
	if(!xForwardedForConfigNode["XForwardedForClientCertFingerprintEnabled"].isNull())
		xForwardedForConfig_.xForwardedForClientCertFingerprintEnabled = xForwardedForConfigNode["XForwardedForClientCertFingerprintEnabled"].asString() == "true";
	if(!xForwardedForConfigNode["XForwardedForClientCertIssuerDNAlias"].isNull())
		xForwardedForConfig_.xForwardedForClientCertIssuerDNAlias = xForwardedForConfigNode["XForwardedForClientCertIssuerDNAlias"].asString();
	if(!xForwardedForConfigNode["XForwardedForClientCertIssuerDNEnabled"].isNull())
		xForwardedForConfig_.xForwardedForClientCertIssuerDNEnabled = xForwardedForConfigNode["XForwardedForClientCertIssuerDNEnabled"].asString() == "true";
	if(!xForwardedForConfigNode["XForwardedForClientCertSubjectDNAlias"].isNull())
		xForwardedForConfig_.xForwardedForClientCertSubjectDNAlias = xForwardedForConfigNode["XForwardedForClientCertSubjectDNAlias"].asString();
	if(!xForwardedForConfigNode["XForwardedForClientCertSubjectDNEnabled"].isNull())
		xForwardedForConfig_.xForwardedForClientCertSubjectDNEnabled = xForwardedForConfigNode["XForwardedForClientCertSubjectDNEnabled"].asString() == "true";
	if(!xForwardedForConfigNode["XForwardedForClientSrcPortEnabled"].isNull())
		xForwardedForConfig_.xForwardedForClientSrcPortEnabled = xForwardedForConfigNode["XForwardedForClientSrcPortEnabled"].asString() == "true";
	if(!xForwardedForConfigNode["XForwardedForEnabled"].isNull())
		xForwardedForConfig_.xForwardedForEnabled = xForwardedForConfigNode["XForwardedForEnabled"].asString() == "true";
	if(!xForwardedForConfigNode["XForwardedForProcessingMode"].isNull())
		xForwardedForConfig_.xForwardedForProcessingMode = xForwardedForConfigNode["XForwardedForProcessingMode"].asString();
	if(!xForwardedForConfigNode["XForwardedForProtoEnabled"].isNull())
		xForwardedForConfig_.xForwardedForProtoEnabled = xForwardedForConfigNode["XForwardedForProtoEnabled"].asString() == "true";
	if(!xForwardedForConfigNode["XForwardedForSLBIdEnabled"].isNull())
		xForwardedForConfig_.xForwardedForSLBIdEnabled = xForwardedForConfigNode["XForwardedForSLBIdEnabled"].asString() == "true";
	if(!xForwardedForConfigNode["XForwardedForSLBPortEnabled"].isNull())
		xForwardedForConfig_.xForwardedForSLBPortEnabled = xForwardedForConfigNode["XForwardedForSLBPortEnabled"].asString() == "true";
	if(!xForwardedForConfigNode["XForwardedForClientSourceIpsEnabled"].isNull())
		xForwardedForConfig_.xForwardedForClientSourceIpsEnabled = xForwardedForConfigNode["XForwardedForClientSourceIpsEnabled"].asString() == "true";
	if(!xForwardedForConfigNode["XForwardedForClientSourceIpsTrusted"].isNull())
		xForwardedForConfig_.xForwardedForClientSourceIpsTrusted = xForwardedForConfigNode["XForwardedForClientSourceIpsTrusted"].asString();
	if(!xForwardedForConfigNode["XForwardedForHostEnabled"].isNull())
		xForwardedForConfig_.xForwardedForHostEnabled = xForwardedForConfigNode["XForwardedForHostEnabled"].asString() == "true";
	if(!value["CaEnabled"].isNull())
		caEnabled_ = value["CaEnabled"].asString() == "true";
	if(!value["GzipEnabled"].isNull())
		gzipEnabled_ = value["GzipEnabled"].asString() == "true";
	if(!value["Http2Enabled"].isNull())
		http2Enabled_ = value["Http2Enabled"].asString() == "true";
	if(!value["ServiceManagedEnabled"].isNull())
		serviceManagedEnabled_ = value["ServiceManagedEnabled"].asString() == "true";
	if(!value["ServiceManagedMode"].isNull())
		serviceManagedMode_ = value["ServiceManagedMode"].asString();
	if(!value["IdleTimeout"].isNull())
		idleTimeout_ = std::stoi(value["IdleTimeout"].asString());
	if(!value["ListenerDescription"].isNull())
		listenerDescription_ = value["ListenerDescription"].asString();
	if(!value["ListenerId"].isNull())
		listenerId_ = value["ListenerId"].asString();
	if(!value["ListenerPort"].isNull())
		listenerPort_ = std::stoi(value["ListenerPort"].asString());
	if(!value["ListenerProtocol"].isNull())
		listenerProtocol_ = value["ListenerProtocol"].asString();
	if(!value["ListenerStatus"].isNull())
		listenerStatus_ = value["ListenerStatus"].asString();
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();
	if(!value["RequestTimeout"].isNull())
		requestTimeout_ = std::stoi(value["RequestTimeout"].asString());
	if(!value["SecurityPolicyId"].isNull())
		securityPolicyId_ = value["SecurityPolicyId"].asString();

}

bool GetListenerAttributeResult::getCaEnabled()const
{
	return caEnabled_;
}

bool GetListenerAttributeResult::getServiceManagedEnabled()const
{
	return serviceManagedEnabled_;
}

int GetListenerAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

int GetListenerAttributeResult::getRequestTimeout()const
{
	return requestTimeout_;
}

bool GetListenerAttributeResult::getHttp2Enabled()const
{
	return http2Enabled_;
}

std::vector<GetListenerAttributeResult::AssociatedResource> GetListenerAttributeResult::getAssociatedResources()const
{
	return associatedResources_;
}

std::vector<GetListenerAttributeResult::DefaultAction> GetListenerAttributeResult::getDefaultActions()const
{
	return defaultActions_;
}

std::vector<GetListenerAttributeResult::Certificate> GetListenerAttributeResult::getCertificates()const
{
	return certificates_;
}

int GetListenerAttributeResult::getIdleTimeout()const
{
	return idleTimeout_;
}

std::string GetListenerAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

GetListenerAttributeResult::QuicConfig GetListenerAttributeResult::getQuicConfig()const
{
	return quicConfig_;
}

std::string GetListenerAttributeResult::getListenerProtocol()const
{
	return listenerProtocol_;
}

bool GetListenerAttributeResult::getGzipEnabled()const
{
	return gzipEnabled_;
}

std::string GetListenerAttributeResult::getListenerStatus()const
{
	return listenerStatus_;
}

std::string GetListenerAttributeResult::getSecurityPolicyId()const
{
	return securityPolicyId_;
}

std::string GetListenerAttributeResult::getListenerDescription()const
{
	return listenerDescription_;
}

GetListenerAttributeResult::AclConfig GetListenerAttributeResult::getAclConfig()const
{
	return aclConfig_;
}

std::string GetListenerAttributeResult::getServiceManagedMode()const
{
	return serviceManagedMode_;
}

GetListenerAttributeResult::XForwardedForConfig GetListenerAttributeResult::getXForwardedForConfig()const
{
	return xForwardedForConfig_;
}

std::vector<GetListenerAttributeResult::Tag> GetListenerAttributeResult::getTags()const
{
	return tags_;
}

std::vector<GetListenerAttributeResult::Certificate1> GetListenerAttributeResult::getCaCertificates()const
{
	return caCertificates_;
}

GetListenerAttributeResult::LogConfig GetListenerAttributeResult::getLogConfig()const
{
	return logConfig_;
}

std::string GetListenerAttributeResult::getListenerId()const
{
	return listenerId_;
}

