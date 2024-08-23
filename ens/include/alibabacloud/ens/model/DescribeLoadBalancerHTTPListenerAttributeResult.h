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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeLoadBalancerHTTPListenerAttributeResult : public ServiceResult
			{
			public:


				DescribeLoadBalancerHTTPListenerAttributeResult();
				explicit DescribeLoadBalancerHTTPListenerAttributeResult(const std::string &payload);
				~DescribeLoadBalancerHTTPListenerAttributeResult();
				int getCookieTimeout()const;
				std::string getDescription()const;
				int getUnhealthyThreshold()const;
				std::string getScheduler()const;
				std::string getHealthCheckURI()const;
				std::string getHealthCheck()const;
				int getIdleTimeout()const;
				int getBackendServerPort()const;
				int getHealthCheckConnectPort()const;
				std::string getHealthCheckMethod()const;
				int getBandwidth()const;
				std::string getServerCertificateId()const;
				std::string getStickySessionType()const;
				std::string getHealthCheckHttpCode()const;
				std::string getStatus()const;
				std::string getCookie()const;
				int getListenerPort()const;
				int getRequestTimeout()const;
				int getHealthCheckInterval()const;
				int getHealthCheckTimeout()const;
				std::string getListenerForward()const;
				std::string getStickySession()const;
				int getForwardPort()const;
				int getHealthyThreshold()const;
				std::string getXForwardedFor()const;
				std::string getHealthCheckDomain()const;

			protected:
				void parse(const std::string &payload);
			private:
				int cookieTimeout_;
				std::string description_;
				int unhealthyThreshold_;
				std::string scheduler_;
				std::string healthCheckURI_;
				std::string healthCheck_;
				int idleTimeout_;
				int backendServerPort_;
				int healthCheckConnectPort_;
				std::string healthCheckMethod_;
				int bandwidth_;
				std::string serverCertificateId_;
				std::string stickySessionType_;
				std::string healthCheckHttpCode_;
				std::string status_;
				std::string cookie_;
				int listenerPort_;
				int requestTimeout_;
				int healthCheckInterval_;
				int healthCheckTimeout_;
				std::string listenerForward_;
				std::string stickySession_;
				int forwardPort_;
				int healthyThreshold_;
				std::string xForwardedFor_;
				std::string healthCheckDomain_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESULT_H_