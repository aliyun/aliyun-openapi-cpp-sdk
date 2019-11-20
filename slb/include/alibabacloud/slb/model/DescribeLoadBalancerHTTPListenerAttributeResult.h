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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_SLB_EXPORT DescribeLoadBalancerHTTPListenerAttributeResult : public ServiceResult
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


				DescribeLoadBalancerHTTPListenerAttributeResult();
				explicit DescribeLoadBalancerHTTPListenerAttributeResult(const std::string &payload);
				~DescribeLoadBalancerHTTPListenerAttributeResult();
				int getCookieTimeout()const;
				int getMaxConnection()const;
				std::string getVServerGroupId()const;
				std::string getDescription()const;
				int getUnhealthyThreshold()const;
				std::string getScheduler()const;
				std::string getHealthCheckURI()const;
				std::string getHealthCheck()const;
				int getIdleTimeout()const;
				int getBackendServerPort()const;
				std::string getXForwardedFor_SLBID()const;
				int getHealthCheckConnectPort()const;
				std::string getHealthCheckMethod()const;
				int getBandwidth()const;
				std::string getSecurityStatus()const;
				std::string getGzip()const;
				std::string getStickySessionType()const;
				std::string getXForwardedFor_SLBIP()const;
				std::string getHealthCheckHttpCode()const;
				std::string getStatus()const;
				std::string getCookie()const;
				int getListenerPort()const;
				int getRequestTimeout()const;
				int getHealthCheckInterval()const;
				std::string getAclId()const;
				std::string getHealthCheckHttpVersion()const;
				int getHealthCheckTimeout()const;
				std::vector<Rule> getRules()const;
				std::string getListenerForward()const;
				std::string getStickySession()const;
				std::string getAclStatus()const;
				int getForwardPort()const;
				std::string getVpcIds()const;
				int getHealthyThreshold()const;
				std::string getXForwardedFor()const;
				std::string getHealthCheckDomain()const;
				std::string getXForwardedFor_proto()const;
				std::string getAclType()const;
				std::vector<std::string> getAclIds()const;
				std::string getHealthCheckType()const;

			protected:
				void parse(const std::string &payload);
			private:
				int cookieTimeout_;
				int maxConnection_;
				std::string vServerGroupId_;
				std::string description_;
				int unhealthyThreshold_;
				std::string scheduler_;
				std::string healthCheckURI_;
				std::string healthCheck_;
				int idleTimeout_;
				int backendServerPort_;
				std::string xForwardedFor_SLBID_;
				int healthCheckConnectPort_;
				std::string healthCheckMethod_;
				int bandwidth_;
				std::string securityStatus_;
				std::string gzip_;
				std::string stickySessionType_;
				std::string xForwardedFor_SLBIP_;
				std::string healthCheckHttpCode_;
				std::string status_;
				std::string cookie_;
				int listenerPort_;
				int requestTimeout_;
				int healthCheckInterval_;
				std::string aclId_;
				std::string healthCheckHttpVersion_;
				int healthCheckTimeout_;
				std::vector<Rule> rules_;
				std::string listenerForward_;
				std::string stickySession_;
				std::string aclStatus_;
				int forwardPort_;
				std::string vpcIds_;
				int healthyThreshold_;
				std::string xForwardedFor_;
				std::string healthCheckDomain_;
				std::string xForwardedFor_proto_;
				std::string aclType_;
				std::vector<std::string> aclIds_;
				std::string healthCheckType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESULT_H_