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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_SLB_EXPORT DescribeLoadBalancerHTTPSListenerAttributeResult : public ServiceResult
			{
			public:
				struct Rule
				{
					std::string vServerGroupId;
					std::string ruleId;
					std::string domain;
					std::string ruleName;
					std::string url;
				};
				struct DomainExtension
				{
					std::string domainExtensionId;
					std::string serverCertificateId;
					std::string domain;
				};


				DescribeLoadBalancerHTTPSListenerAttributeResult();
				explicit DescribeLoadBalancerHTTPSListenerAttributeResult(const std::string &payload);
				~DescribeLoadBalancerHTTPSListenerAttributeResult();
				int getUnhealthyThreshold()const;
				std::string getHealthCheckURI()const;
				std::vector<DomainExtension> getDomainExtensions()const;
				std::string getHealthCheck()const;
				int getBackendServerPort()const;
				std::string getXForwardedFor_SLBPORT()const;
				std::string getStickySessionType()const;
				std::string getXForwardedFor_ClientCertSubjectDNAlias()const;
				std::string getStatus()const;
				std::string getCookie()const;
				int getRequestTimeout()const;
				std::string getXForwardedFor_ClientCertClientVerifyAlias()const;
				int getHealthCheckInterval()const;
				std::string getTLSCipherPolicy()const;
				std::string getCACertificateId()const;
				std::string getXForwardedFor_ClientCertFingerprintAlias()const;
				int getHealthCheckTimeout()const;
				std::string getAclStatus()const;
				std::string getVpcIds()const;
				int getHealthyThreshold()const;
				std::string getHealthCheckDomain()const;
				std::string getXForwardedFor_proto()const;
				std::string getAclType()const;
				std::string getEnableHttp2()const;
				std::string getHealthCheckType()const;
				int getCookieTimeout()const;
				int getMaxConnection()const;
				std::string getVServerGroupId()const;
				std::string getBackendProtocol()const;
				std::string getDescription()const;
				std::string getScheduler()const;
				int getIdleTimeout()const;
				std::string getXForwardedFor_SLBID()const;
				int getHealthCheckConnectPort()const;
				std::string getHealthCheckMethod()const;
				int getBandwidth()const;
				std::string getSecurityStatus()const;
				std::string getGzip()const;
				std::string getServerCertificateId()const;
				std::string getXForwardedFor_SLBIP()const;
				std::string getHealthCheckHttpCode()const;
				int getListenerPort()const;
				std::string getAclId()const;
				std::string getXForwardedFor_ClientCertSubjectDN()const;
				std::string getHealthCheckHttpVersion()const;
				std::string getXForwardedFor_ClientCertIssuerDNAlias()const;
				std::vector<Rule> getRules()const;
				std::string getXForwardedFor_ClientCertIssuerDN()const;
				std::string getStickySession()const;
				std::string getXForwardedFor()const;
				std::string getXForwardedFor_ClientSrcPort()const;
				std::string getXForwardedFor_ClientCertFingerprint()const;
				std::string getXForwardedFor_ClientCertClientVerify()const;
				std::vector<std::string> getAclIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				int unhealthyThreshold_;
				std::string healthCheckURI_;
				std::vector<DomainExtension> domainExtensions_;
				std::string healthCheck_;
				int backendServerPort_;
				std::string xForwardedFor_SLBPORT_;
				std::string stickySessionType_;
				std::string xForwardedFor_ClientCertSubjectDNAlias_;
				std::string status_;
				std::string cookie_;
				int requestTimeout_;
				std::string xForwardedFor_ClientCertClientVerifyAlias_;
				int healthCheckInterval_;
				std::string tLSCipherPolicy_;
				std::string cACertificateId_;
				std::string xForwardedFor_ClientCertFingerprintAlias_;
				int healthCheckTimeout_;
				std::string aclStatus_;
				std::string vpcIds_;
				int healthyThreshold_;
				std::string healthCheckDomain_;
				std::string xForwardedFor_proto_;
				std::string aclType_;
				std::string enableHttp2_;
				std::string healthCheckType_;
				int cookieTimeout_;
				int maxConnection_;
				std::string vServerGroupId_;
				std::string backendProtocol_;
				std::string description_;
				std::string scheduler_;
				int idleTimeout_;
				std::string xForwardedFor_SLBID_;
				int healthCheckConnectPort_;
				std::string healthCheckMethod_;
				int bandwidth_;
				std::string securityStatus_;
				std::string gzip_;
				std::string serverCertificateId_;
				std::string xForwardedFor_SLBIP_;
				std::string healthCheckHttpCode_;
				int listenerPort_;
				std::string aclId_;
				std::string xForwardedFor_ClientCertSubjectDN_;
				std::string healthCheckHttpVersion_;
				std::string xForwardedFor_ClientCertIssuerDNAlias_;
				std::vector<Rule> rules_;
				std::string xForwardedFor_ClientCertIssuerDN_;
				std::string stickySession_;
				std::string xForwardedFor_;
				std::string xForwardedFor_ClientSrcPort_;
				std::string xForwardedFor_ClientCertFingerprint_;
				std::string xForwardedFor_ClientCertClientVerify_;
				std::vector<std::string> aclIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESULT_H_