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

#include <alibabacloud/slb/model/DescribeLoadBalancerListenersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeLoadBalancerListenersResult::DescribeLoadBalancerListenersResult() :
	ServiceResult()
{}

DescribeLoadBalancerListenersResult::DescribeLoadBalancerListenersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoadBalancerListenersResult::~DescribeLoadBalancerListenersResult()
{}

void DescribeLoadBalancerListenersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListenersNode = value["Listeners"]["Listener"];
	for (auto valueListenersListener : allListenersNode)
	{
		Listener listenersObject;
		if(!valueListenersListener["AclType"].isNull())
			listenersObject.aclType = valueListenersListener["AclType"].asString();
		if(!valueListenersListener["Status"].isNull())
			listenersObject.status = valueListenersListener["Status"].asString();
		if(!valueListenersListener["VServerGroupId"].isNull())
			listenersObject.vServerGroupId = valueListenersListener["VServerGroupId"].asString();
		if(!valueListenersListener["ListenerProtocol"].isNull())
			listenersObject.listenerProtocol = valueListenersListener["ListenerProtocol"].asString();
		if(!valueListenersListener["LoadBalancerId"].isNull())
			listenersObject.loadBalancerId = valueListenersListener["LoadBalancerId"].asString();
		if(!valueListenersListener["ListenerPort"].isNull())
			listenersObject.listenerPort = std::stoi(valueListenersListener["ListenerPort"].asString());
		if(!valueListenersListener["ServiceManagedMode"].isNull())
			listenersObject.serviceManagedMode = valueListenersListener["ServiceManagedMode"].asString();
		if(!valueListenersListener["AclId"].isNull())
			listenersObject.aclId = valueListenersListener["AclId"].asString();
		if(!valueListenersListener["Scheduler"].isNull())
			listenersObject.scheduler = valueListenersListener["Scheduler"].asString();
		if(!valueListenersListener["Bandwidth"].isNull())
			listenersObject.bandwidth = std::stoi(valueListenersListener["Bandwidth"].asString());
		if(!valueListenersListener["Description"].isNull())
			listenersObject.description = valueListenersListener["Description"].asString();
		if(!valueListenersListener["AclStatus"].isNull())
			listenersObject.aclStatus = valueListenersListener["AclStatus"].asString();
		if(!valueListenersListener["BackendServerPort"].isNull())
			listenersObject.backendServerPort = std::stoi(valueListenersListener["BackendServerPort"].asString());
		if(!valueListenersListener["BackendProtocol"].isNull())
			listenersObject.backendProtocol = valueListenersListener["BackendProtocol"].asString();
		auto allTagsNode = valueListenersListener["Tags"]["Tag"];
		for (auto valueListenersListenerTagsTag : allTagsNode)
		{
			Listener::Tag tagsObject;
			if(!valueListenersListenerTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueListenersListenerTagsTag["TagValue"].asString();
			if(!valueListenersListenerTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueListenersListenerTagsTag["TagKey"].asString();
			listenersObject.tags.push_back(tagsObject);
		}
		auto hTTPListenerConfigNode = value["HTTPListenerConfig"];
		if(!hTTPListenerConfigNode["HealthCheckHttpVersion"].isNull())
			listenersObject.hTTPListenerConfig.healthCheckHttpVersion = hTTPListenerConfigNode["HealthCheckHttpVersion"].asString();
		if(!hTTPListenerConfigNode["XForwardedFor_ClientSrcPort"].isNull())
			listenersObject.hTTPListenerConfig.xForwardedFor_ClientSrcPort = hTTPListenerConfigNode["XForwardedFor_ClientSrcPort"].asString();
		if(!hTTPListenerConfigNode["Cookie"].isNull())
			listenersObject.hTTPListenerConfig.cookie = hTTPListenerConfigNode["Cookie"].asString();
		if(!hTTPListenerConfigNode["Gzip"].isNull())
			listenersObject.hTTPListenerConfig.gzip = hTTPListenerConfigNode["Gzip"].asString();
		if(!hTTPListenerConfigNode["ForwardCode"].isNull())
			listenersObject.hTTPListenerConfig.forwardCode = std::stoi(hTTPListenerConfigNode["ForwardCode"].asString());
		if(!hTTPListenerConfigNode["HealthCheckConnectPort"].isNull())
			listenersObject.hTTPListenerConfig.healthCheckConnectPort = std::stoi(hTTPListenerConfigNode["HealthCheckConnectPort"].asString());
		if(!hTTPListenerConfigNode["HealthCheckTimeout"].isNull())
			listenersObject.hTTPListenerConfig.healthCheckTimeout = std::stoi(hTTPListenerConfigNode["HealthCheckTimeout"].asString());
		if(!hTTPListenerConfigNode["HealthCheckType"].isNull())
			listenersObject.hTTPListenerConfig.healthCheckType = hTTPListenerConfigNode["HealthCheckType"].asString();
		if(!hTTPListenerConfigNode["CookieTimeout"].isNull())
			listenersObject.hTTPListenerConfig.cookieTimeout = std::stoi(hTTPListenerConfigNode["CookieTimeout"].asString());
		if(!hTTPListenerConfigNode["HealthCheckDomain"].isNull())
			listenersObject.hTTPListenerConfig.healthCheckDomain = hTTPListenerConfigNode["HealthCheckDomain"].asString();
		if(!hTTPListenerConfigNode["UnhealthyThreshold"].isNull())
			listenersObject.hTTPListenerConfig.unhealthyThreshold = std::stoi(hTTPListenerConfigNode["UnhealthyThreshold"].asString());
		if(!hTTPListenerConfigNode["XForwardedFor_SLBID"].isNull())
			listenersObject.hTTPListenerConfig.xForwardedFor_SLBID = hTTPListenerConfigNode["XForwardedFor_SLBID"].asString();
		if(!hTTPListenerConfigNode["ForwardPort"].isNull())
			listenersObject.hTTPListenerConfig.forwardPort = std::stoi(hTTPListenerConfigNode["ForwardPort"].asString());
		if(!hTTPListenerConfigNode["HealthCheckHttpCode"].isNull())
			listenersObject.hTTPListenerConfig.healthCheckHttpCode = hTTPListenerConfigNode["HealthCheckHttpCode"].asString();
		if(!hTTPListenerConfigNode["ListenerForward"].isNull())
			listenersObject.hTTPListenerConfig.listenerForward = hTTPListenerConfigNode["ListenerForward"].asString();
		if(!hTTPListenerConfigNode["XForwardedFor"].isNull())
			listenersObject.hTTPListenerConfig.xForwardedFor = hTTPListenerConfigNode["XForwardedFor"].asString();
		if(!hTTPListenerConfigNode["IdleTimeout"].isNull())
			listenersObject.hTTPListenerConfig.idleTimeout = std::stoi(hTTPListenerConfigNode["IdleTimeout"].asString());
		if(!hTTPListenerConfigNode["RequestTimeout"].isNull())
			listenersObject.hTTPListenerConfig.requestTimeout = std::stoi(hTTPListenerConfigNode["RequestTimeout"].asString());
		if(!hTTPListenerConfigNode["HealthCheckInterval"].isNull())
			listenersObject.hTTPListenerConfig.healthCheckInterval = std::stoi(hTTPListenerConfigNode["HealthCheckInterval"].asString());
		if(!hTTPListenerConfigNode["XForwardedFor_SLBPORT"].isNull())
			listenersObject.hTTPListenerConfig.xForwardedFor_SLBPORT = hTTPListenerConfigNode["XForwardedFor_SLBPORT"].asString();
		if(!hTTPListenerConfigNode["HealthCheckURI"].isNull())
			listenersObject.hTTPListenerConfig.healthCheckURI = hTTPListenerConfigNode["HealthCheckURI"].asString();
		if(!hTTPListenerConfigNode["StickySessionType"].isNull())
			listenersObject.hTTPListenerConfig.stickySessionType = hTTPListenerConfigNode["StickySessionType"].asString();
		if(!hTTPListenerConfigNode["HealthyThreshold"].isNull())
			listenersObject.hTTPListenerConfig.healthyThreshold = std::stoi(hTTPListenerConfigNode["HealthyThreshold"].asString());
		if(!hTTPListenerConfigNode["XForwardedFor_proto"].isNull())
			listenersObject.hTTPListenerConfig.xForwardedFor_proto = hTTPListenerConfigNode["XForwardedFor_proto"].asString();
		if(!hTTPListenerConfigNode["XForwardedFor_SLBIP"].isNull())
			listenersObject.hTTPListenerConfig.xForwardedFor_SLBIP = hTTPListenerConfigNode["XForwardedFor_SLBIP"].asString();
		if(!hTTPListenerConfigNode["StickySession"].isNull())
			listenersObject.hTTPListenerConfig.stickySession = hTTPListenerConfigNode["StickySession"].asString();
		if(!hTTPListenerConfigNode["HealthCheckMethod"].isNull())
			listenersObject.hTTPListenerConfig.healthCheckMethod = hTTPListenerConfigNode["HealthCheckMethod"].asString();
		if(!hTTPListenerConfigNode["HealthCheck"].isNull())
			listenersObject.hTTPListenerConfig.healthCheck = hTTPListenerConfigNode["HealthCheck"].asString();
		if(!hTTPListenerConfigNode["MaxConnection"].isNull())
			listenersObject.hTTPListenerConfig.maxConnection = std::stoi(hTTPListenerConfigNode["MaxConnection"].asString());
		auto hTTPSListenerConfigNode = value["HTTPSListenerConfig"];
		if(!hTTPSListenerConfigNode["XForwardedFor_ClientCertClientVerify"].isNull())
			listenersObject.hTTPSListenerConfig.xForwardedFor_ClientCertClientVerify = hTTPSListenerConfigNode["XForwardedFor_ClientCertClientVerify"].asString();
		if(!hTTPSListenerConfigNode["HealthCheckHttpVersion"].isNull())
			listenersObject.hTTPSListenerConfig.healthCheckHttpVersion = hTTPSListenerConfigNode["HealthCheckHttpVersion"].asString();
		if(!hTTPSListenerConfigNode["XForwardedFor_ClientSrcPort"].isNull())
			listenersObject.hTTPSListenerConfig.xForwardedFor_ClientSrcPort = hTTPSListenerConfigNode["XForwardedFor_ClientSrcPort"].asString();
		if(!hTTPSListenerConfigNode["Cookie"].isNull())
			listenersObject.hTTPSListenerConfig.cookie = hTTPSListenerConfigNode["Cookie"].asString();
		if(!hTTPSListenerConfigNode["Gzip"].isNull())
			listenersObject.hTTPSListenerConfig.gzip = hTTPSListenerConfigNode["Gzip"].asString();
		if(!hTTPSListenerConfigNode["EnableHttp2"].isNull())
			listenersObject.hTTPSListenerConfig.enableHttp2 = hTTPSListenerConfigNode["EnableHttp2"].asString();
		if(!hTTPSListenerConfigNode["CACertificateId"].isNull())
			listenersObject.hTTPSListenerConfig.cACertificateId = hTTPSListenerConfigNode["CACertificateId"].asString();
		if(!hTTPSListenerConfigNode["XForwardedFor_ClientCertClientVerifyAlias"].isNull())
			listenersObject.hTTPSListenerConfig.xForwardedFor_ClientCertClientVerifyAlias = hTTPSListenerConfigNode["XForwardedFor_ClientCertClientVerifyAlias"].asString();
		if(!hTTPSListenerConfigNode["HealthCheckConnectPort"].isNull())
			listenersObject.hTTPSListenerConfig.healthCheckConnectPort = std::stoi(hTTPSListenerConfigNode["HealthCheckConnectPort"].asString());
		if(!hTTPSListenerConfigNode["HealthCheckTimeout"].isNull())
			listenersObject.hTTPSListenerConfig.healthCheckTimeout = std::stoi(hTTPSListenerConfigNode["HealthCheckTimeout"].asString());
		if(!hTTPSListenerConfigNode["HealthCheckType"].isNull())
			listenersObject.hTTPSListenerConfig.healthCheckType = hTTPSListenerConfigNode["HealthCheckType"].asString();
		if(!hTTPSListenerConfigNode["CookieTimeout"].isNull())
			listenersObject.hTTPSListenerConfig.cookieTimeout = std::stoi(hTTPSListenerConfigNode["CookieTimeout"].asString());
		if(!hTTPSListenerConfigNode["HealthCheckDomain"].isNull())
			listenersObject.hTTPSListenerConfig.healthCheckDomain = hTTPSListenerConfigNode["HealthCheckDomain"].asString();
		if(!hTTPSListenerConfigNode["UnhealthyThreshold"].isNull())
			listenersObject.hTTPSListenerConfig.unhealthyThreshold = std::stoi(hTTPSListenerConfigNode["UnhealthyThreshold"].asString());
		if(!hTTPSListenerConfigNode["XForwardedFor_SLBID"].isNull())
			listenersObject.hTTPSListenerConfig.xForwardedFor_SLBID = hTTPSListenerConfigNode["XForwardedFor_SLBID"].asString();
		if(!hTTPSListenerConfigNode["XForwardedFor_ClientCertSubjectDN"].isNull())
			listenersObject.hTTPSListenerConfig.xForwardedFor_ClientCertSubjectDN = hTTPSListenerConfigNode["XForwardedFor_ClientCertSubjectDN"].asString();
		if(!hTTPSListenerConfigNode["HealthCheckHttpCode"].isNull())
			listenersObject.hTTPSListenerConfig.healthCheckHttpCode = hTTPSListenerConfigNode["HealthCheckHttpCode"].asString();
		if(!hTTPSListenerConfigNode["XForwardedFor_ClientCertFingerprintAlias"].isNull())
			listenersObject.hTTPSListenerConfig.xForwardedFor_ClientCertFingerprintAlias = hTTPSListenerConfigNode["XForwardedFor_ClientCertFingerprintAlias"].asString();
		if(!hTTPSListenerConfigNode["XForwardedFor_ClientCertSubjectDNAlias"].isNull())
			listenersObject.hTTPSListenerConfig.xForwardedFor_ClientCertSubjectDNAlias = hTTPSListenerConfigNode["XForwardedFor_ClientCertSubjectDNAlias"].asString();
		if(!hTTPSListenerConfigNode["XForwardedFor_ClientCertIssuerDNAlias"].isNull())
			listenersObject.hTTPSListenerConfig.xForwardedFor_ClientCertIssuerDNAlias = hTTPSListenerConfigNode["XForwardedFor_ClientCertIssuerDNAlias"].asString();
		if(!hTTPSListenerConfigNode["XForwardedFor_ClientCertFingerprint"].isNull())
			listenersObject.hTTPSListenerConfig.xForwardedFor_ClientCertFingerprint = hTTPSListenerConfigNode["XForwardedFor_ClientCertFingerprint"].asString();
		if(!hTTPSListenerConfigNode["XForwardedFor"].isNull())
			listenersObject.hTTPSListenerConfig.xForwardedFor = hTTPSListenerConfigNode["XForwardedFor"].asString();
		if(!hTTPSListenerConfigNode["RequestTimeout"].isNull())
			listenersObject.hTTPSListenerConfig.requestTimeout = std::stoi(hTTPSListenerConfigNode["RequestTimeout"].asString());
		if(!hTTPSListenerConfigNode["IdleTimeout"].isNull())
			listenersObject.hTTPSListenerConfig.idleTimeout = std::stoi(hTTPSListenerConfigNode["IdleTimeout"].asString());
		if(!hTTPSListenerConfigNode["ServerCertificateId"].isNull())
			listenersObject.hTTPSListenerConfig.serverCertificateId = hTTPSListenerConfigNode["ServerCertificateId"].asString();
		if(!hTTPSListenerConfigNode["HealthCheckInterval"].isNull())
			listenersObject.hTTPSListenerConfig.healthCheckInterval = std::stoi(hTTPSListenerConfigNode["HealthCheckInterval"].asString());
		if(!hTTPSListenerConfigNode["XForwardedFor_SLBPORT"].isNull())
			listenersObject.hTTPSListenerConfig.xForwardedFor_SLBPORT = hTTPSListenerConfigNode["XForwardedFor_SLBPORT"].asString();
		if(!hTTPSListenerConfigNode["HealthCheckURI"].isNull())
			listenersObject.hTTPSListenerConfig.healthCheckURI = hTTPSListenerConfigNode["HealthCheckURI"].asString();
		if(!hTTPSListenerConfigNode["StickySessionType"].isNull())
			listenersObject.hTTPSListenerConfig.stickySessionType = hTTPSListenerConfigNode["StickySessionType"].asString();
		if(!hTTPSListenerConfigNode["XForwardedFor_ClientCertIssuerDN"].isNull())
			listenersObject.hTTPSListenerConfig.xForwardedFor_ClientCertIssuerDN = hTTPSListenerConfigNode["XForwardedFor_ClientCertIssuerDN"].asString();
		if(!hTTPSListenerConfigNode["HealthyThreshold"].isNull())
			listenersObject.hTTPSListenerConfig.healthyThreshold = std::stoi(hTTPSListenerConfigNode["HealthyThreshold"].asString());
		if(!hTTPSListenerConfigNode["XForwardedFor_proto"].isNull())
			listenersObject.hTTPSListenerConfig.xForwardedFor_proto = hTTPSListenerConfigNode["XForwardedFor_proto"].asString();
		if(!hTTPSListenerConfigNode["XForwardedFor_SLBIP"].isNull())
			listenersObject.hTTPSListenerConfig.xForwardedFor_SLBIP = hTTPSListenerConfigNode["XForwardedFor_SLBIP"].asString();
		if(!hTTPSListenerConfigNode["StickySession"].isNull())
			listenersObject.hTTPSListenerConfig.stickySession = hTTPSListenerConfigNode["StickySession"].asString();
		if(!hTTPSListenerConfigNode["HealthCheckMethod"].isNull())
			listenersObject.hTTPSListenerConfig.healthCheckMethod = hTTPSListenerConfigNode["HealthCheckMethod"].asString();
		if(!hTTPSListenerConfigNode["TLSCipherPolicy"].isNull())
			listenersObject.hTTPSListenerConfig.tLSCipherPolicy = hTTPSListenerConfigNode["TLSCipherPolicy"].asString();
		if(!hTTPSListenerConfigNode["HealthCheck"].isNull())
			listenersObject.hTTPSListenerConfig.healthCheck = hTTPSListenerConfigNode["HealthCheck"].asString();
		if(!hTTPSListenerConfigNode["MaxConnection"].isNull())
			listenersObject.hTTPSListenerConfig.maxConnection = std::stoi(hTTPSListenerConfigNode["MaxConnection"].asString());
		auto allServerCertificatesNode = hTTPSListenerConfigNode["ServerCertificates"]["ServerCertificate"];
		for (auto hTTPSListenerConfigNodeServerCertificatesServerCertificate : allServerCertificatesNode)
		{
			Listener::HTTPSListenerConfig::ServerCertificate serverCertificateObject;
			if(!hTTPSListenerConfigNodeServerCertificatesServerCertificate["EncryptionAlgorithm"].isNull())
				serverCertificateObject.encryptionAlgorithm = hTTPSListenerConfigNodeServerCertificatesServerCertificate["EncryptionAlgorithm"].asString();
			if(!hTTPSListenerConfigNodeServerCertificatesServerCertificate["StandardType"].isNull())
				serverCertificateObject.standardType = hTTPSListenerConfigNodeServerCertificatesServerCertificate["StandardType"].asString();
			if(!hTTPSListenerConfigNodeServerCertificatesServerCertificate["BindingType"].isNull())
				serverCertificateObject.bindingType = hTTPSListenerConfigNodeServerCertificatesServerCertificate["BindingType"].asString();
			if(!hTTPSListenerConfigNodeServerCertificatesServerCertificate["CertificateId"].isNull())
				serverCertificateObject.certificateId = hTTPSListenerConfigNodeServerCertificatesServerCertificate["CertificateId"].asString();
			listenersObject.hTTPSListenerConfig.serverCertificates.push_back(serverCertificateObject);
		}
		auto tCPListenerConfigNode = value["TCPListenerConfig"];
		if(!tCPListenerConfigNode["HealthCheckHttpCode"].isNull())
			listenersObject.tCPListenerConfig.healthCheckHttpCode = tCPListenerConfigNode["HealthCheckHttpCode"].asString();
		if(!tCPListenerConfigNode["ConnectionDrainTimeout"].isNull())
			listenersObject.tCPListenerConfig.connectionDrainTimeout = std::stoi(tCPListenerConfigNode["ConnectionDrainTimeout"].asString());
		if(!tCPListenerConfigNode["PersistenceTimeout"].isNull())
			listenersObject.tCPListenerConfig.persistenceTimeout = std::stoi(tCPListenerConfigNode["PersistenceTimeout"].asString());
		if(!tCPListenerConfigNode["HealthCheckInterval"].isNull())
			listenersObject.tCPListenerConfig.healthCheckInterval = std::stoi(tCPListenerConfigNode["HealthCheckInterval"].asString());
		if(!tCPListenerConfigNode["HealthCheckURI"].isNull())
			listenersObject.tCPListenerConfig.healthCheckURI = tCPListenerConfigNode["HealthCheckURI"].asString();
		if(!tCPListenerConfigNode["HealthCheckSwitch"].isNull())
			listenersObject.tCPListenerConfig.healthCheckSwitch = tCPListenerConfigNode["HealthCheckSwitch"].asString();
		if(!tCPListenerConfigNode["FullNatEnabled"].isNull())
			listenersObject.tCPListenerConfig.fullNatEnabled = tCPListenerConfigNode["FullNatEnabled"].asString();
		if(!tCPListenerConfigNode["HealthCheckConnectPort"].isNull())
			listenersObject.tCPListenerConfig.healthCheckConnectPort = std::stoi(tCPListenerConfigNode["HealthCheckConnectPort"].asString());
		if(!tCPListenerConfigNode["EstablishedTimeout"].isNull())
			listenersObject.tCPListenerConfig.establishedTimeout = std::stoi(tCPListenerConfigNode["EstablishedTimeout"].asString());
		if(!tCPListenerConfigNode["HealthCheckType"].isNull())
			listenersObject.tCPListenerConfig.healthCheckType = tCPListenerConfigNode["HealthCheckType"].asString();
		if(!tCPListenerConfigNode["HealthCheckConnectTimeout"].isNull())
			listenersObject.tCPListenerConfig.healthCheckConnectTimeout = std::stoi(tCPListenerConfigNode["HealthCheckConnectTimeout"].asString());
		if(!tCPListenerConfigNode["MasterSlaveServerGroupId"].isNull())
			listenersObject.tCPListenerConfig.masterSlaveServerGroupId = tCPListenerConfigNode["MasterSlaveServerGroupId"].asString();
		if(!tCPListenerConfigNode["HealthyThreshold"].isNull())
			listenersObject.tCPListenerConfig.healthyThreshold = std::stoi(tCPListenerConfigNode["HealthyThreshold"].asString());
		if(!tCPListenerConfigNode["HealthCheckDomain"].isNull())
			listenersObject.tCPListenerConfig.healthCheckDomain = tCPListenerConfigNode["HealthCheckDomain"].asString();
		if(!tCPListenerConfigNode["UnhealthyThreshold"].isNull())
			listenersObject.tCPListenerConfig.unhealthyThreshold = std::stoi(tCPListenerConfigNode["UnhealthyThreshold"].asString());
		if(!tCPListenerConfigNode["ConnectionDrain"].isNull())
			listenersObject.tCPListenerConfig.connectionDrain = tCPListenerConfigNode["ConnectionDrain"].asString();
		if(!tCPListenerConfigNode["HealthCheckMethod"].isNull())
			listenersObject.tCPListenerConfig.healthCheckMethod = tCPListenerConfigNode["HealthCheckMethod"].asString();
		if(!tCPListenerConfigNode["HealthCheck"].isNull())
			listenersObject.tCPListenerConfig.healthCheck = tCPListenerConfigNode["HealthCheck"].asString();
		if(!tCPListenerConfigNode["ProxyProtocolV2Enabled"].isNull())
			listenersObject.tCPListenerConfig.proxyProtocolV2Enabled = tCPListenerConfigNode["ProxyProtocolV2Enabled"].asString();
		if(!tCPListenerConfigNode["HealthCheckTcpFastCloseEnabled"].isNull())
			listenersObject.tCPListenerConfig.healthCheckTcpFastCloseEnabled = tCPListenerConfigNode["HealthCheckTcpFastCloseEnabled"].asString() == "true";
		if(!tCPListenerConfigNode["MasterSlaveModeEnabled"].isNull())
			listenersObject.tCPListenerConfig.masterSlaveModeEnabled = tCPListenerConfigNode["MasterSlaveModeEnabled"].asString() == "true";
		if(!tCPListenerConfigNode["MasterServerGroupId"].isNull())
			listenersObject.tCPListenerConfig.masterServerGroupId = tCPListenerConfigNode["MasterServerGroupId"].asString();
		if(!tCPListenerConfigNode["SlaveServerGroupId"].isNull())
			listenersObject.tCPListenerConfig.slaveServerGroupId = tCPListenerConfigNode["SlaveServerGroupId"].asString();
		if(!tCPListenerConfigNode["FailoverThreshold"].isNull())
			listenersObject.tCPListenerConfig.failoverThreshold = std::stoi(tCPListenerConfigNode["FailoverThreshold"].asString());
		if(!tCPListenerConfigNode["FailoverStrategy"].isNull())
			listenersObject.tCPListenerConfig.failoverStrategy = tCPListenerConfigNode["FailoverStrategy"].asString();
		if(!tCPListenerConfigNode["MaxConnection"].isNull())
			listenersObject.tCPListenerConfig.maxConnection = std::stoi(tCPListenerConfigNode["MaxConnection"].asString());
		auto allPortRangesNode = tCPListenerConfigNode["PortRanges"]["PortRange"];
		for (auto tCPListenerConfigNodePortRangesPortRange : allPortRangesNode)
		{
			Listener::TCPListenerConfig::PortRange portRangeObject;
			if(!tCPListenerConfigNodePortRangesPortRange["StartPort"].isNull())
				portRangeObject.startPort = std::stoi(tCPListenerConfigNodePortRangesPortRange["StartPort"].asString());
			if(!tCPListenerConfigNodePortRangesPortRange["EndPort"].isNull())
				portRangeObject.endPort = std::stoi(tCPListenerConfigNodePortRangesPortRange["EndPort"].asString());
			listenersObject.tCPListenerConfig.portRanges.push_back(portRangeObject);
		}
		auto tCPSListenerConfigNode = value["TCPSListenerConfig"];
		if(!tCPSListenerConfigNode["HealthCheckHttpCode"].isNull())
			listenersObject.tCPSListenerConfig.healthCheckHttpCode = tCPSListenerConfigNode["HealthCheckHttpCode"].asString();
		if(!tCPSListenerConfigNode["Cookie"].isNull())
			listenersObject.tCPSListenerConfig.cookie = tCPSListenerConfigNode["Cookie"].asString();
		if(!tCPSListenerConfigNode["IdleTimeout"].isNull())
			listenersObject.tCPSListenerConfig.idleTimeout = std::stoi(tCPSListenerConfigNode["IdleTimeout"].asString());
		if(!tCPSListenerConfigNode["ServerCertificateId"].isNull())
			listenersObject.tCPSListenerConfig.serverCertificateId = tCPSListenerConfigNode["ServerCertificateId"].asString();
		if(!tCPSListenerConfigNode["HealthCheckInterval"].isNull())
			listenersObject.tCPSListenerConfig.healthCheckInterval = std::stoi(tCPSListenerConfigNode["HealthCheckInterval"].asString());
		if(!tCPSListenerConfigNode["HealthCheckURI"].isNull())
			listenersObject.tCPSListenerConfig.healthCheckURI = tCPSListenerConfigNode["HealthCheckURI"].asString();
		if(!tCPSListenerConfigNode["CACertificateId"].isNull())
			listenersObject.tCPSListenerConfig.cACertificateId = tCPSListenerConfigNode["CACertificateId"].asString();
		if(!tCPSListenerConfigNode["StickySessionType"].isNull())
			listenersObject.tCPSListenerConfig.stickySessionType = tCPSListenerConfigNode["StickySessionType"].asString();
		if(!tCPSListenerConfigNode["HealthCheckConnectPort"].isNull())
			listenersObject.tCPSListenerConfig.healthCheckConnectPort = std::stoi(tCPSListenerConfigNode["HealthCheckConnectPort"].asString());
		if(!tCPSListenerConfigNode["HealthCheckTimeout"].isNull())
			listenersObject.tCPSListenerConfig.healthCheckTimeout = std::stoi(tCPSListenerConfigNode["HealthCheckTimeout"].asString());
		if(!tCPSListenerConfigNode["HealthCheckType"].isNull())
			listenersObject.tCPSListenerConfig.healthCheckType = tCPSListenerConfigNode["HealthCheckType"].asString();
		if(!tCPSListenerConfigNode["HealthyThreshold"].isNull())
			listenersObject.tCPSListenerConfig.healthyThreshold = std::stoi(tCPSListenerConfigNode["HealthyThreshold"].asString());
		if(!tCPSListenerConfigNode["CookieTimeout"].isNull())
			listenersObject.tCPSListenerConfig.cookieTimeout = std::stoi(tCPSListenerConfigNode["CookieTimeout"].asString());
		if(!tCPSListenerConfigNode["HealthCheckDomain"].isNull())
			listenersObject.tCPSListenerConfig.healthCheckDomain = tCPSListenerConfigNode["HealthCheckDomain"].asString();
		if(!tCPSListenerConfigNode["UnhealthyThreshold"].isNull())
			listenersObject.tCPSListenerConfig.unhealthyThreshold = std::stoi(tCPSListenerConfigNode["UnhealthyThreshold"].asString());
		if(!tCPSListenerConfigNode["StickySession"].isNull())
			listenersObject.tCPSListenerConfig.stickySession = tCPSListenerConfigNode["StickySession"].asString();
		if(!tCPSListenerConfigNode["HealthCheckMethod"].isNull())
			listenersObject.tCPSListenerConfig.healthCheckMethod = tCPSListenerConfigNode["HealthCheckMethod"].asString();
		if(!tCPSListenerConfigNode["TLSCipherPolicy"].isNull())
			listenersObject.tCPSListenerConfig.tLSCipherPolicy = tCPSListenerConfigNode["TLSCipherPolicy"].asString();
		if(!tCPSListenerConfigNode["HealthCheck"].isNull())
			listenersObject.tCPSListenerConfig.healthCheck = tCPSListenerConfigNode["HealthCheck"].asString();
		auto uDPListenerConfigNode = value["UDPListenerConfig"];
		if(!uDPListenerConfigNode["HealthCheckHttpCode"].isNull())
			listenersObject.uDPListenerConfig.healthCheckHttpCode = uDPListenerConfigNode["HealthCheckHttpCode"].asString();
		if(!uDPListenerConfigNode["ConnectionDrainTimeout"].isNull())
			listenersObject.uDPListenerConfig.connectionDrainTimeout = std::stoi(uDPListenerConfigNode["ConnectionDrainTimeout"].asString());
		if(!uDPListenerConfigNode["HealthCheckInterval"].isNull())
			listenersObject.uDPListenerConfig.healthCheckInterval = std::stoi(uDPListenerConfigNode["HealthCheckInterval"].asString());
		if(!uDPListenerConfigNode["HealthCheckExp"].isNull())
			listenersObject.uDPListenerConfig.healthCheckExp = uDPListenerConfigNode["HealthCheckExp"].asString();
		if(!uDPListenerConfigNode["HealthCheckURI"].isNull())
			listenersObject.uDPListenerConfig.healthCheckURI = uDPListenerConfigNode["HealthCheckURI"].asString();
		if(!uDPListenerConfigNode["HealthCheckSwitch"].isNull())
			listenersObject.uDPListenerConfig.healthCheckSwitch = uDPListenerConfigNode["HealthCheckSwitch"].asString();
		if(!uDPListenerConfigNode["FullNatEnabled"].isNull())
			listenersObject.uDPListenerConfig.fullNatEnabled = uDPListenerConfigNode["FullNatEnabled"].asString();
		if(!uDPListenerConfigNode["HealthCheckConnectPort"].isNull())
			listenersObject.uDPListenerConfig.healthCheckConnectPort = std::stoi(uDPListenerConfigNode["HealthCheckConnectPort"].asString());
		if(!uDPListenerConfigNode["HealthCheckType"].isNull())
			listenersObject.uDPListenerConfig.healthCheckType = uDPListenerConfigNode["HealthCheckType"].asString();
		if(!uDPListenerConfigNode["HealthCheckConnectTimeout"].isNull())
			listenersObject.uDPListenerConfig.healthCheckConnectTimeout = std::stoi(uDPListenerConfigNode["HealthCheckConnectTimeout"].asString());
		if(!uDPListenerConfigNode["MasterSlaveServerGroupId"].isNull())
			listenersObject.uDPListenerConfig.masterSlaveServerGroupId = uDPListenerConfigNode["MasterSlaveServerGroupId"].asString();
		if(!uDPListenerConfigNode["HealthyThreshold"].isNull())
			listenersObject.uDPListenerConfig.healthyThreshold = std::stoi(uDPListenerConfigNode["HealthyThreshold"].asString());
		if(!uDPListenerConfigNode["HealthCheckDomain"].isNull())
			listenersObject.uDPListenerConfig.healthCheckDomain = uDPListenerConfigNode["HealthCheckDomain"].asString();
		if(!uDPListenerConfigNode["UnhealthyThreshold"].isNull())
			listenersObject.uDPListenerConfig.unhealthyThreshold = std::stoi(uDPListenerConfigNode["UnhealthyThreshold"].asString());
		if(!uDPListenerConfigNode["ConnectionDrain"].isNull())
			listenersObject.uDPListenerConfig.connectionDrain = uDPListenerConfigNode["ConnectionDrain"].asString();
		if(!uDPListenerConfigNode["HealthCheckReq"].isNull())
			listenersObject.uDPListenerConfig.healthCheckReq = uDPListenerConfigNode["HealthCheckReq"].asString();
		if(!uDPListenerConfigNode["HealthCheckMethod"].isNull())
			listenersObject.uDPListenerConfig.healthCheckMethod = uDPListenerConfigNode["HealthCheckMethod"].asString();
		if(!uDPListenerConfigNode["HealthCheck"].isNull())
			listenersObject.uDPListenerConfig.healthCheck = uDPListenerConfigNode["HealthCheck"].asString();
		if(!uDPListenerConfigNode["ProxyProtocolV2Enabled"].isNull())
			listenersObject.uDPListenerConfig.proxyProtocolV2Enabled = uDPListenerConfigNode["ProxyProtocolV2Enabled"].asString();
		if(!uDPListenerConfigNode["QuicVersion"].isNull())
			listenersObject.uDPListenerConfig.quicVersion = uDPListenerConfigNode["QuicVersion"].asString();
		if(!uDPListenerConfigNode["PersistenceTimeout"].isNull())
			listenersObject.uDPListenerConfig.persistenceTimeout = std::stoi(uDPListenerConfigNode["PersistenceTimeout"].asString());
		if(!uDPListenerConfigNode["MasterSlaveModeEnabled"].isNull())
			listenersObject.uDPListenerConfig.masterSlaveModeEnabled = uDPListenerConfigNode["MasterSlaveModeEnabled"].asString() == "true";
		if(!uDPListenerConfigNode["MasterServerGroupId"].isNull())
			listenersObject.uDPListenerConfig.masterServerGroupId = uDPListenerConfigNode["MasterServerGroupId"].asString();
		if(!uDPListenerConfigNode["SlaveServerGroupId"].isNull())
			listenersObject.uDPListenerConfig.slaveServerGroupId = uDPListenerConfigNode["SlaveServerGroupId"].asString();
		if(!uDPListenerConfigNode["FailoverThreshold"].isNull())
			listenersObject.uDPListenerConfig.failoverThreshold = std::stoi(uDPListenerConfigNode["FailoverThreshold"].asString());
		if(!uDPListenerConfigNode["FailoverStrategy"].isNull())
			listenersObject.uDPListenerConfig.failoverStrategy = uDPListenerConfigNode["FailoverStrategy"].asString();
		if(!uDPListenerConfigNode["MaxConnection"].isNull())
			listenersObject.uDPListenerConfig.maxConnection = std::stoi(uDPListenerConfigNode["MaxConnection"].asString());
		auto allPortRanges1Node = uDPListenerConfigNode["PortRanges"]["PortRange"];
		for (auto uDPListenerConfigNodePortRangesPortRange : allPortRanges1Node)
		{
			Listener::UDPListenerConfig::PortRange2 portRange2Object;
			if(!uDPListenerConfigNodePortRangesPortRange["StartPort"].isNull())
				portRange2Object.startPort = std::stoi(uDPListenerConfigNodePortRangesPortRange["StartPort"].asString());
			if(!uDPListenerConfigNodePortRangesPortRange["EndPort"].isNull())
				portRange2Object.endPort = std::stoi(uDPListenerConfigNodePortRangesPortRange["EndPort"].asString());
			listenersObject.uDPListenerConfig.portRanges1.push_back(portRange2Object);
		}
		auto allAclIds = value["AclIds"]["AclId"];
		for (auto value : allAclIds)
			listenersObject.aclIds.push_back(value.asString());
		listeners_.push_back(listenersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<DescribeLoadBalancerListenersResult::Listener> DescribeLoadBalancerListenersResult::getListeners()const
{
	return listeners_;
}

int DescribeLoadBalancerListenersResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeLoadBalancerListenersResult::getNextToken()const
{
	return nextToken_;
}

int DescribeLoadBalancerListenersResult::getMaxResults()const
{
	return maxResults_;
}

