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


				DescribeLoadBalancerHTTPListenerAttributeResult();
				explicit DescribeLoadBalancerHTTPListenerAttributeResult(const std::string &payload);
				~DescribeLoadBalancerHTTPListenerAttributeResult();
				int getCookieTimeout()const;
				int getMaxConnection()const;
				std::string getVServerGroupId()const;
				int getUnhealthyThreshold()const;
				std::string getScheduler()const;
				std::string getHealthCheckURI()const;
				std::string getHealthCheck()const;
				int getBackendServerPort()const;
				std::string getXForwardedFor_SLBID()const;
				int getHealthCheckConnectPort()const;
				int getBandwidth()const;
				std::string getSecurityStatus()const;
				std::string getGzip()const;
				std::string getStickySessionType()const;
				std::string getXForwardedFor_SLBIP()const;
				std::string getHealthCheckHttpCode()const;
				std::string getStatus()const;
				std::string getCookie()const;
				int getListenerPort()const;
				int getHealthCheckInterval()const;
				int getHealthCheckTimeout()const;
				std::string getStickySession()const;
				int getHealthyThreshold()const;
				std::string getXForwardedFor()const;
				std::string getHealthCheckDomain()const;
				std::string getXForwardedFor_proto()const;

			protected:
				void parse(const std::string &payload);
			private:
				int cookieTimeout_;
				int maxConnection_;
				std::string vServerGroupId_;
				int unhealthyThreshold_;
				std::string scheduler_;
				std::string healthCheckURI_;
				std::string healthCheck_;
				int backendServerPort_;
				std::string xForwardedFor_SLBID_;
				int healthCheckConnectPort_;
				int bandwidth_;
				std::string securityStatus_;
				std::string gzip_;
				std::string stickySessionType_;
				std::string xForwardedFor_SLBIP_;
				std::string healthCheckHttpCode_;
				std::string status_;
				std::string cookie_;
				int listenerPort_;
				int healthCheckInterval_;
				int healthCheckTimeout_;
				std::string stickySession_;
				int healthyThreshold_;
				std::string xForwardedFor_;
				std::string healthCheckDomain_;
				std::string xForwardedFor_proto_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESULT_H_