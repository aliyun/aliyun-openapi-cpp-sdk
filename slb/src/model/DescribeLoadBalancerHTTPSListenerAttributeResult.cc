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

#include <alibabacloud/slb/model/DescribeLoadBalancerHTTPSListenerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeLoadBalancerHTTPSListenerAttributeResult::DescribeLoadBalancerHTTPSListenerAttributeResult() :
	ServiceResult()
{}

DescribeLoadBalancerHTTPSListenerAttributeResult::DescribeLoadBalancerHTTPSListenerAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadBalancerHTTPSListenerAttributeResult::~DescribeLoadBalancerHTTPSListenerAttributeResult()
{}

void DescribeLoadBalancerHTTPSListenerAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRulesNode = value["Rules"]["Rule"];
	for (auto valueRulesRule : allRulesNode)
	{
		Rule rulesObject;
		if(!valueRulesRule["VServerGroupId"].isNull())
			rulesObject.vServerGroupId = valueRulesRule["VServerGroupId"].asString();
		if(!valueRulesRule["Url"].isNull())
			rulesObject.url = valueRulesRule["Url"].asString();
		if(!valueRulesRule["Domain"].isNull())
			rulesObject.domain = valueRulesRule["Domain"].asString();
		if(!valueRulesRule["RuleName"].isNull())
			rulesObject.ruleName = valueRulesRule["RuleName"].asString();
		if(!valueRulesRule["RuleId"].isNull())
			rulesObject.ruleId = valueRulesRule["RuleId"].asString();
		rules_.push_back(rulesObject);
	}
	auto allDomainExtensionsNode = value["DomainExtensions"]["DomainExtension"];
	for (auto valueDomainExtensionsDomainExtension : allDomainExtensionsNode)
	{
		DomainExtension domainExtensionsObject;
		if(!valueDomainExtensionsDomainExtension["ServerCertificateId"].isNull())
			domainExtensionsObject.serverCertificateId = valueDomainExtensionsDomainExtension["ServerCertificateId"].asString();
		if(!valueDomainExtensionsDomainExtension["Domain"].isNull())
			domainExtensionsObject.domain = valueDomainExtensionsDomainExtension["Domain"].asString();
		if(!valueDomainExtensionsDomainExtension["DomainExtensionId"].isNull())
			domainExtensionsObject.domainExtensionId = valueDomainExtensionsDomainExtension["DomainExtensionId"].asString();
		auto allCertificatesNode = valueDomainExtensionsDomainExtension["Certificates"]["Certificate"];
		for (auto valueDomainExtensionsDomainExtensionCertificatesCertificate : allCertificatesNode)
		{
			DomainExtension::Certificate certificatesObject;
			if(!valueDomainExtensionsDomainExtensionCertificatesCertificate["EncryptionAlgorithm"].isNull())
				certificatesObject.encryptionAlgorithm = valueDomainExtensionsDomainExtensionCertificatesCertificate["EncryptionAlgorithm"].asString();
			if(!valueDomainExtensionsDomainExtensionCertificatesCertificate["CertificateId"].isNull())
				certificatesObject.certificateId = valueDomainExtensionsDomainExtensionCertificatesCertificate["CertificateId"].asString();
			domainExtensionsObject.certificates.push_back(certificatesObject);
		}
		auto allServerCertificates1Node = valueDomainExtensionsDomainExtension["ServerCertificates"]["ServerCertificate"];
		for (auto valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate : allServerCertificates1Node)
		{
			DomainExtension::ServerCertificate serverCertificates1Object;
			if(!valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["EncryptionAlgorithm"].isNull())
				serverCertificates1Object.encryptionAlgorithm = valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["EncryptionAlgorithm"].asString();
			if(!valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["StandardType"].isNull())
				serverCertificates1Object.standardType = valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["StandardType"].asString();
			if(!valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["BindingType"].isNull())
				serverCertificates1Object.bindingType = valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["BindingType"].asString();
			if(!valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["CertificateId"].isNull())
				serverCertificates1Object.certificateId = valueDomainExtensionsDomainExtensionServerCertificatesServerCertificate["CertificateId"].asString();
			domainExtensionsObject.serverCertificates1.push_back(serverCertificates1Object);
		}
		domainExtensions_.push_back(domainExtensionsObject);
	}
	auto allServerCertificatesNode = value["ServerCertificates"]["ServerCertificate"];
	for (auto valueServerCertificatesServerCertificate : allServerCertificatesNode)
	{
		ServerCertificate2 serverCertificatesObject;
		if(!valueServerCertificatesServerCertificate["EncryptionAlgorithm"].isNull())
			serverCertificatesObject.encryptionAlgorithm = valueServerCertificatesServerCertificate["EncryptionAlgorithm"].asString();
		if(!valueServerCertificatesServerCertificate["StandardType"].isNull())
			serverCertificatesObject.standardType = valueServerCertificatesServerCertificate["StandardType"].asString();
		if(!valueServerCertificatesServerCertificate["BindingType"].isNull())
			serverCertificatesObject.bindingType = valueServerCertificatesServerCertificate["BindingType"].asString();
		if(!valueServerCertificatesServerCertificate["CertificateId"].isNull())
			serverCertificatesObject.certificateId = valueServerCertificatesServerCertificate["CertificateId"].asString();
		serverCertificates_.push_back(serverCertificatesObject);
	}
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
	auto allAclIds = value["AclIds"]["AclId"];
	for (const auto &item : allAclIds)
		aclIds_.push_back(item.asString());
	if(!value["AclType"].isNull())
		aclType_ = value["AclType"].asString();
	if(!value["XForwardedFor_ClientCertClientVerify"].isNull())
		xForwardedFor_ClientCertClientVerify_ = value["XForwardedFor_ClientCertClientVerify"].asString();
	if(!value["CACertificateId"].isNull())
		cACertificateId_ = value["CACertificateId"].asString();
	if(!value["XForwardedFor_ClientCertClientVerifyAlias"].isNull())
		xForwardedFor_ClientCertClientVerifyAlias_ = value["XForwardedFor_ClientCertClientVerifyAlias"].asString();
	if(!value["HealthCheckConnectPort"].isNull())
		healthCheckConnectPort_ = std::stoi(value["HealthCheckConnectPort"].asString());
	if(!value["BackendProtocol"].isNull())
		backendProtocol_ = value["BackendProtocol"].asString();
	if(!value["HealthCheckType"].isNull())
		healthCheckType_ = value["HealthCheckType"].asString();
	if(!value["BackendServerPort"].isNull())
		backendServerPort_ = std::stoi(value["BackendServerPort"].asString());
	if(!value["CookieTimeout"].isNull())
		cookieTimeout_ = std::stoi(value["CookieTimeout"].asString());
	if(!value["HealthCheckDomain"].isNull())
		healthCheckDomain_ = value["HealthCheckDomain"].asString();
	if(!value["XForwardedFor_ClientCertFingerprintAlias"].isNull())
		xForwardedFor_ClientCertFingerprintAlias_ = value["XForwardedFor_ClientCertFingerprintAlias"].asString();
	if(!value["XForwardedFor_ClientCertIssuerDNAlias"].isNull())
		xForwardedFor_ClientCertIssuerDNAlias_ = value["XForwardedFor_ClientCertIssuerDNAlias"].asString();
	if(!value["XForwardedFor"].isNull())
		xForwardedFor_ = value["XForwardedFor"].asString();
	if(!value["XForwardedFor_ClientCertFingerprint"].isNull())
		xForwardedFor_ClientCertFingerprint_ = value["XForwardedFor_ClientCertFingerprint"].asString();
	if(!value["IdleTimeout"].isNull())
		idleTimeout_ = std::stoi(value["IdleTimeout"].asString());
	if(!value["ListenerPort"].isNull())
		listenerPort_ = std::stoi(value["ListenerPort"].asString());
	if(!value["HealthCheckURI"].isNull())
		healthCheckURI_ = value["HealthCheckURI"].asString();
	if(!value["XForwardedFor_SLBPORT"].isNull())
		xForwardedFor_SLBPORT_ = value["XForwardedFor_SLBPORT"].asString();
	if(!value["StickySessionType"].isNull())
		stickySessionType_ = value["StickySessionType"].asString();
	if(!value["Scheduler"].isNull())
		scheduler_ = value["Scheduler"].asString();
	if(!value["XForwardedFor_proto"].isNull())
		xForwardedFor_proto_ = value["XForwardedFor_proto"].asString();
	if(!value["HealthCheckMethod"].isNull())
		healthCheckMethod_ = value["HealthCheckMethod"].asString();
	if(!value["TLSCipherPolicy"].isNull())
		tLSCipherPolicy_ = value["TLSCipherPolicy"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["HealthCheckHttpVersion"].isNull())
		healthCheckHttpVersion_ = value["HealthCheckHttpVersion"].asString();
	if(!value["VServerGroupId"].isNull())
		vServerGroupId_ = value["VServerGroupId"].asString();
	if(!value["XForwardedFor_ClientSrcPort"].isNull())
		xForwardedFor_ClientSrcPort_ = value["XForwardedFor_ClientSrcPort"].asString();
	if(!value["Cookie"].isNull())
		cookie_ = value["Cookie"].asString();
	if(!value["Gzip"].isNull())
		gzip_ = value["Gzip"].asString();
	if(!value["EnableHttp2"].isNull())
		enableHttp2_ = value["EnableHttp2"].asString();
	if(!value["ServiceManagedMode"].isNull())
		serviceManagedMode_ = value["ServiceManagedMode"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["HealthCheckTimeout"].isNull())
		healthCheckTimeout_ = std::stoi(value["HealthCheckTimeout"].asString());
	if(!value["AclStatus"].isNull())
		aclStatus_ = value["AclStatus"].asString();
	if(!value["UnhealthyThreshold"].isNull())
		unhealthyThreshold_ = std::stoi(value["UnhealthyThreshold"].asString());
	if(!value["XForwardedFor_SLBID"].isNull())
		xForwardedFor_SLBID_ = value["XForwardedFor_SLBID"].asString();
	if(!value["XForwardedFor_ClientCertSubjectDN"].isNull())
		xForwardedFor_ClientCertSubjectDN_ = value["XForwardedFor_ClientCertSubjectDN"].asString();
	if(!value["SecurityStatus"].isNull())
		securityStatus_ = value["SecurityStatus"].asString();
	if(!value["HealthCheckHttpCode"].isNull())
		healthCheckHttpCode_ = value["HealthCheckHttpCode"].asString();
	if(!value["XForwardedFor_ClientCertSubjectDNAlias"].isNull())
		xForwardedFor_ClientCertSubjectDNAlias_ = value["XForwardedFor_ClientCertSubjectDNAlias"].asString();
	if(!value["MaxConnection"].isNull())
		maxConnection_ = std::stoi(value["MaxConnection"].asString());
	if(!value["RequestTimeout"].isNull())
		requestTimeout_ = std::stoi(value["RequestTimeout"].asString());
	if(!value["HealthCheckInterval"].isNull())
		healthCheckInterval_ = std::stoi(value["HealthCheckInterval"].asString());
	if(!value["ServerCertificateId"].isNull())
		serverCertificateId_ = value["ServerCertificateId"].asString();
	if(!value["AclId"].isNull())
		aclId_ = value["AclId"].asString();
	if(!value["XForwardedFor_ClientCertIssuerDN"].isNull())
		xForwardedFor_ClientCertIssuerDN_ = value["XForwardedFor_ClientCertIssuerDN"].asString();
	if(!value["VpcIds"].isNull())
		vpcIds_ = value["VpcIds"].asString();
	if(!value["HealthyThreshold"].isNull())
		healthyThreshold_ = std::stoi(value["HealthyThreshold"].asString());
	if(!value["XForwardedFor_SLBIP"].isNull())
		xForwardedFor_SLBIP_ = value["XForwardedFor_SLBIP"].asString();
	if(!value["StickySession"].isNull())
		stickySession_ = value["StickySession"].asString();
	if(!value["HealthCheck"].isNull())
		healthCheck_ = value["HealthCheck"].asString();
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();

}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getUnhealthyThreshold()const
{
	return unhealthyThreshold_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckURI()const
{
	return healthCheckURI_;
}

std::vector<DescribeLoadBalancerHTTPSListenerAttributeResult::DomainExtension> DescribeLoadBalancerHTTPSListenerAttributeResult::getDomainExtensions()const
{
	return domainExtensions_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheck()const
{
	return healthCheck_;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getBackendServerPort()const
{
	return backendServerPort_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_SLBPORT()const
{
	return xForwardedFor_SLBPORT_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getServiceManagedMode()const
{
	return serviceManagedMode_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getStickySessionType()const
{
	return stickySessionType_;
}

std::vector<DescribeLoadBalancerHTTPSListenerAttributeResult::Tag> DescribeLoadBalancerHTTPSListenerAttributeResult::getTags()const
{
	return tags_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_ClientCertSubjectDNAlias()const
{
	return xForwardedFor_ClientCertSubjectDNAlias_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getCookie()const
{
	return cookie_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_ClientCertClientVerifyAlias()const
{
	return xForwardedFor_ClientCertClientVerifyAlias_;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getRequestTimeout()const
{
	return requestTimeout_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getTLSCipherPolicy()const
{
	return tLSCipherPolicy_;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckInterval()const
{
	return healthCheckInterval_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getCACertificateId()const
{
	return cACertificateId_;
}

std::vector<DescribeLoadBalancerHTTPSListenerAttributeResult::ServerCertificate2> DescribeLoadBalancerHTTPSListenerAttributeResult::getServerCertificates()const
{
	return serverCertificates_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_ClientCertFingerprintAlias()const
{
	return xForwardedFor_ClientCertFingerprintAlias_;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckTimeout()const
{
	return healthCheckTimeout_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getAclStatus()const
{
	return aclStatus_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getVpcIds()const
{
	return vpcIds_;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthyThreshold()const
{
	return healthyThreshold_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckDomain()const
{
	return healthCheckDomain_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getAclType()const
{
	return aclType_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_proto()const
{
	return xForwardedFor_proto_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getEnableHttp2()const
{
	return enableHttp2_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckType()const
{
	return healthCheckType_;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getCookieTimeout()const
{
	return cookieTimeout_;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getMaxConnection()const
{
	return maxConnection_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getBackendProtocol()const
{
	return backendProtocol_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getDescription()const
{
	return description_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getScheduler()const
{
	return scheduler_;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getIdleTimeout()const
{
	return idleTimeout_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_SLBID()const
{
	return xForwardedFor_SLBID_;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckConnectPort()const
{
	return healthCheckConnectPort_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckMethod()const
{
	return healthCheckMethod_;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getBandwidth()const
{
	return bandwidth_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getSecurityStatus()const
{
	return securityStatus_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getGzip()const
{
	return gzip_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getServerCertificateId()const
{
	return serverCertificateId_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_SLBIP()const
{
	return xForwardedFor_SLBIP_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckHttpCode()const
{
	return healthCheckHttpCode_;
}

int DescribeLoadBalancerHTTPSListenerAttributeResult::getListenerPort()const
{
	return listenerPort_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_ClientCertSubjectDN()const
{
	return xForwardedFor_ClientCertSubjectDN_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getAclId()const
{
	return aclId_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_ClientCertIssuerDNAlias()const
{
	return xForwardedFor_ClientCertIssuerDNAlias_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getHealthCheckHttpVersion()const
{
	return healthCheckHttpVersion_;
}

std::vector<DescribeLoadBalancerHTTPSListenerAttributeResult::Rule> DescribeLoadBalancerHTTPSListenerAttributeResult::getRules()const
{
	return rules_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_ClientCertIssuerDN()const
{
	return xForwardedFor_ClientCertIssuerDN_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getStickySession()const
{
	return stickySession_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor()const
{
	return xForwardedFor_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_ClientSrcPort()const
{
	return xForwardedFor_ClientSrcPort_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_ClientCertClientVerify()const
{
	return xForwardedFor_ClientCertClientVerify_;
}

std::string DescribeLoadBalancerHTTPSListenerAttributeResult::getXForwardedFor_ClientCertFingerprint()const
{
	return xForwardedFor_ClientCertFingerprint_;
}

std::vector<std::string> DescribeLoadBalancerHTTPSListenerAttributeResult::getAclIds()const
{
	return aclIds_;
}

