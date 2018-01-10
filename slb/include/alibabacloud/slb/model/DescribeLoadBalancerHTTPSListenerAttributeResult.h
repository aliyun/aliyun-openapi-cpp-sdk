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


				DescribeLoadBalancerHTTPSListenerAttributeResult();
				explicit DescribeLoadBalancerHTTPSListenerAttributeResult(const std::string &payload);
				~DescribeLoadBalancerHTTPSListenerAttributeResult();
				int getCookieTimeout()const;
				void setCookieTimeout(int cookieTimeout);
				int getMaxConnection()const;
				void setMaxConnection(int maxConnection);
				std::string getVServerGroupId()const;
				void setVServerGroupId(const std::string& vServerGroupId);
				int getUnhealthyThreshold()const;
				void setUnhealthyThreshold(int unhealthyThreshold);
				std::string getScheduler()const;
				void setScheduler(const std::string& scheduler);
				std::string getHealthCheckURI()const;
				void setHealthCheckURI(const std::string& healthCheckURI);
				std::string getHealthCheck()const;
				void setHealthCheck(const std::string& healthCheck);
				int getBackendServerPort()const;
				void setBackendServerPort(int backendServerPort);
				std::string getXForwardedFor_SLBID()const;
				void setXForwardedFor_SLBID(const std::string& xForwardedFor_SLBID);
				int getHealthCheckConnectPort()const;
				void setHealthCheckConnectPort(int healthCheckConnectPort);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
				std::string getSecurityStatus()const;
				void setSecurityStatus(const std::string& securityStatus);
				std::string getGzip()const;
				void setGzip(const std::string& gzip);
				std::string getServerCertificateId()const;
				void setServerCertificateId(const std::string& serverCertificateId);
				std::string getStickySessionType()const;
				void setStickySessionType(const std::string& stickySessionType);
				std::string getXForwardedFor_SLBIP()const;
				void setXForwardedFor_SLBIP(const std::string& xForwardedFor_SLBIP);
				std::string getHealthCheckHttpCode()const;
				void setHealthCheckHttpCode(const std::string& healthCheckHttpCode);
				std::string getStatus()const;
				void setStatus(const std::string& status);
				std::string getCookie()const;
				void setCookie(const std::string& cookie);
				int getListenerPort()const;
				void setListenerPort(int listenerPort);
				int getHealthCheckInterval()const;
				void setHealthCheckInterval(int healthCheckInterval);
				std::string getCACertificateId()const;
				void setCACertificateId(const std::string& cACertificateId);
				int getHealthCheckTimeout()const;
				void setHealthCheckTimeout(int healthCheckTimeout);
				std::string getStickySession()const;
				void setStickySession(const std::string& stickySession);
				int getHealthyThreshold()const;
				void setHealthyThreshold(int healthyThreshold);
				std::string getXForwardedFor()const;
				void setXForwardedFor(const std::string& xForwardedFor);
				std::string getHealthCheckDomain()const;
				void setHealthCheckDomain(const std::string& healthCheckDomain);
				std::string getXForwardedFor_proto()const;
				void setXForwardedFor_proto(const std::string& xForwardedFor_proto);

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
				std::string serverCertificateId_;
				std::string stickySessionType_;
				std::string xForwardedFor_SLBIP_;
				std::string healthCheckHttpCode_;
				std::string status_;
				std::string cookie_;
				int listenerPort_;
				int healthCheckInterval_;
				std::string cACertificateId_;
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
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESULT_H_