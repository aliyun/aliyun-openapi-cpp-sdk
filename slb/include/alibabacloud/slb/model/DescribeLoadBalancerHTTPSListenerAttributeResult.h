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
				int getCookieTimeout()const;
				int getMaxConnection()const;
				std::string getVServerGroupId()const;
				int getBackendProtocol()const;
				std::string getDescription()const;
				int getUnhealthyThreshold()const;
				std::string getScheduler()const;
				std::string getHealthCheckURI()const;
				std::vector<DomainExtension> getDomainExtensions()const;
				std::string getHealthCheck()const;
				int getIdleTimeout()const;
				int getBackendServerPort()const;
				std::string getXForwardedFor_SLBID()const;
				int getHealthCheckConnectPort()const;
				std::string getHealthCheckMethod()const;
				int getBandwidth()const;
				std::string getSecurityStatus()const;
				std::string getGzip()const;
				std::string getServerCertificateId()const;
				std::string getStickySessionType()const;
				std::string getXForwardedFor_SLBIP()const;
				std::string getHealthCheckHttpCode()const;
				std::string getStatus()const;
				std::string getCookie()const;
				int getListenerPort()const;
				int getRequestTimeout()const;
				int getHealthCheckInterval()const;
				std::string getTLSCipherPolicy()const;
				std::string getCACertificateId()const;
				std::string getAclId()const;
				std::string getHealthCheckHttpVersion()const;
				int getHealthCheckTimeout()const;
				std::vector<Rule> getRules()const;
				std::string getStickySession()const;
				std::string getAclStatus()const;
				std::string getVpcIds()const;
				int getHealthyThreshold()const;
				std::string getXForwardedFor()const;
				std::string getHealthCheckDomain()const;
				std::string getXForwardedFor_proto()const;
				std::string getAclType()const;
				std::string getEnableHttp2()const;
				std::string getHealthCheckType()const;

			protected:
				void parse(const std::string &payload);
			private:
				int cookieTimeout_;
				int maxConnection_;
				std::string vServerGroupId_;
				int backendProtocol_;
				std::string description_;
				int unhealthyThreshold_;
				std::string scheduler_;
				std::string healthCheckURI_;
				std::vector<DomainExtension> domainExtensions_;
				std::string healthCheck_;
				int idleTimeout_;
				int backendServerPort_;
				std::string xForwardedFor_SLBID_;
				int healthCheckConnectPort_;
				std::string healthCheckMethod_;
				int bandwidth_;
				std::string securityStatus_;
				std::string gzip_;
				std::string serverCertificateId_;
				std::string stickySessionType_;
				std::string xForwardedFor_SLBIP_;
				std::string healthCheckHttpCode_;
				std::string status_;
				std::string cookie_;
				int listenerPort_;
				int requestTimeout_;
				int healthCheckInterval_;
				std::string tLSCipherPolicy_;
				std::string cACertificateId_;
				std::string aclId_;
				std::string healthCheckHttpVersion_;
				int healthCheckTimeout_;
				std::vector<Rule> rules_;
				std::string stickySession_;
				std::string aclStatus_;
				std::string vpcIds_;
				int healthyThreshold_;
				std::string xForwardedFor_;
				std::string healthCheckDomain_;
				std::string xForwardedFor_proto_;
				std::string aclType_;
				std::string enableHttp2_;
				std::string healthCheckType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESULT_H_