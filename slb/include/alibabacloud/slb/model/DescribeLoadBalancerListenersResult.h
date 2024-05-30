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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERLISTENERSRESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERLISTENERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT DescribeLoadBalancerListenersResult : public ServiceResult
			{
			public:
				struct Listener
				{
					struct HTTPListenerConfig
					{
						int cookieTimeout;
						int maxConnection;
						int unhealthyThreshold;
						std::string healthCheckURI;
						std::string healthCheck;
						int idleTimeout;
						std::string xForwardedFor_SLBID;
						int healthCheckConnectPort;
						std::string xForwardedFor_SLBPORT;
						std::string healthCheckMethod;
						std::string gzip;
						std::string stickySessionType;
						std::string xForwardedFor_SLBIP;
						std::string healthCheckHttpCode;
						int forwardCode;
						std::string cookie;
						int requestTimeout;
						int healthCheckInterval;
						std::string healthCheckHttpVersion;
						int healthCheckTimeout;
						std::string listenerForward;
						std::string stickySession;
						int forwardPort;
						int healthyThreshold;
						std::string xForwardedFor_ClientSrcPort;
						std::string xForwardedFor;
						std::string healthCheckDomain;
						std::string xForwardedFor_proto;
						std::string healthCheckType;
					};
					struct HTTPSListenerConfig
					{
						struct ServerCertificate
						{
							std::string bindingType;
							std::string certificateId;
							std::string encryptionAlgorithm;
							std::string standardType;
						};
						int cookieTimeout;
						int maxConnection;
						int unhealthyThreshold;
						std::string healthCheckURI;
						std::string healthCheck;
						int idleTimeout;
						std::string xForwardedFor_SLBID;
						int healthCheckConnectPort;
						std::string xForwardedFor_SLBPORT;
						std::string healthCheckMethod;
						std::string gzip;
						std::string serverCertificateId;
						std::string stickySessionType;
						std::string xForwardedFor_SLBIP;
						std::string healthCheckHttpCode;
						std::string xForwardedFor_ClientCertSubjectDNAlias;
						std::string cookie;
						std::string xForwardedFor_ClientCertClientVerifyAlias;
						int requestTimeout;
						int healthCheckInterval;
						std::string tLSCipherPolicy;
						std::string cACertificateId;
						std::string xForwardedFor_ClientCertSubjectDN;
						std::vector<ServerCertificate> serverCertificates;
						std::string healthCheckHttpVersion;
						std::string xForwardedFor_ClientCertFingerprintAlias;
						std::string xForwardedFor_ClientCertIssuerDNAlias;
						int healthCheckTimeout;
						std::string xForwardedFor_ClientCertIssuerDN;
						std::string stickySession;
						int healthyThreshold;
						std::string xForwardedFor_ClientSrcPort;
						std::string xForwardedFor;
						std::string healthCheckDomain;
						std::string xForwardedFor_proto;
						std::string enableHttp2;
						std::string xForwardedFor_ClientCertClientVerify;
						std::string xForwardedFor_ClientCertFingerprint;
						std::string healthCheckType;
					};
					struct TCPListenerConfig
					{
						struct PortRange
						{
							int startPort;
							int endPort;
						};
						int maxConnection;
						int unhealthyThreshold;
						std::string proxyProtocolV2Enabled;
						int failoverThreshold;
						std::string healthCheckURI;
						std::string healthCheck;
						bool masterSlaveModeEnabled;
						bool healthCheckTcpFastCloseEnabled;
						int connectionDrainTimeout;
						int persistenceTimeout;
						int healthCheckConnectPort;
						std::string masterServerGroupId;
						std::string healthCheckMethod;
						std::string healthCheckHttpCode;
						std::string slaveServerGroupId;
						int establishedTimeout;
						int healthCheckInterval;
						std::vector<PortRange> portRanges;
						int healthCheckConnectTimeout;
						std::string connectionDrain;
						std::string healthCheckSwitch;
						int healthyThreshold;
						std::string failoverStrategy;
						std::string masterSlaveServerGroupId;
						std::string healthCheckDomain;
						std::string fullNatEnabled;
						std::string healthCheckType;
					};
					struct TCPSListenerConfig
					{
						std::string cookie;
						int cookieTimeout;
						int healthCheckInterval;
						std::string tLSCipherPolicy;
						std::string cACertificateId;
						int unhealthyThreshold;
						std::string healthCheckURI;
						std::string healthCheck;
						int idleTimeout;
						int healthCheckTimeout;
						std::string stickySession;
						int healthCheckConnectPort;
						std::string healthCheckMethod;
						int healthyThreshold;
						std::string serverCertificateId;
						std::string healthCheckDomain;
						std::string stickySessionType;
						std::string healthCheckHttpCode;
						std::string healthCheckType;
					};
					struct UDPListenerConfig
					{
						struct PortRange2
						{
							int startPort;
							int endPort;
						};
						int maxConnection;
						int unhealthyThreshold;
						std::string proxyProtocolV2Enabled;
						int failoverThreshold;
						std::string healthCheckURI;
						std::string healthCheck;
						bool masterSlaveModeEnabled;
						int connectionDrainTimeout;
						int persistenceTimeout;
						int healthCheckConnectPort;
						std::string masterServerGroupId;
						std::string healthCheckMethod;
						std::string quicVersion;
						std::string healthCheckHttpCode;
						std::string slaveServerGroupId;
						int healthCheckInterval;
						int healthCheckConnectTimeout;
						std::string connectionDrain;
						std::vector<PortRange2> portRanges1;
						std::string healthCheckSwitch;
						std::string healthCheckReq;
						std::string healthCheckExp;
						int healthyThreshold;
						std::string failoverStrategy;
						std::string masterSlaveServerGroupId;
						std::string healthCheckDomain;
						std::string fullNatEnabled;
						std::string healthCheckType;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string status;
					std::string vServerGroupId;
					int listenerPort;
					std::string description;
					std::string backendProtocol;
					HTTPSListenerConfig hTTPSListenerConfig;
					std::string scheduler;
					HTTPListenerConfig hTTPListenerConfig;
					std::string aclId;
					UDPListenerConfig uDPListenerConfig;
					std::string loadBalancerId;
					std::string listenerProtocol;
					int backendServerPort;
					std::string aclStatus;
					TCPListenerConfig tCPListenerConfig;
					std::string serviceManagedMode;
					int bandwidth;
					TCPSListenerConfig tCPSListenerConfig;
					std::string aclType;
					std::vector<Listener::Tag> tags;
					std::vector<std::string> aclIds;
				};


				DescribeLoadBalancerListenersResult();
				explicit DescribeLoadBalancerListenersResult(const std::string &payload);
				~DescribeLoadBalancerListenersResult();
				std::vector<Listener> getListeners()const;
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Listener> listeners_;
				int totalCount_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERLISTENERSRESULT_H_