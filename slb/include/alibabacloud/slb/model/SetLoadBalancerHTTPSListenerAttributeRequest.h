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

#ifndef ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERHTTPSLISTENERATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERHTTPSLISTENERATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT SetLoadBalancerHTTPSListenerAttributeRequest : public RpcServiceRequest
			{

			public:
				SetLoadBalancerHTTPSListenerAttributeRequest();
				~SetLoadBalancerHTTPSListenerAttributeRequest();

				std::string getAccess_key_id()const;
				void setAccess_key_id(const std::string& access_key_id);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getHealthCheckTimeout()const;
				void setHealthCheckTimeout(int healthCheckTimeout);
				std::string getXForwardedFor()const;
				void setXForwardedFor(const std::string& xForwardedFor);
				std::string getHealthCheckURI()const;
				void setHealthCheckURI(const std::string& healthCheckURI);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				int getUnhealthyThreshold()const;
				void setUnhealthyThreshold(int unhealthyThreshold);
				int getHealthyThreshold()const;
				void setHealthyThreshold(int healthyThreshold);
				std::string getAclStatus()const;
				void setAclStatus(const std::string& aclStatus);
				std::string getScheduler()const;
				void setScheduler(const std::string& scheduler);
				std::string getAclType()const;
				void setAclType(const std::string& aclType);
				std::string getHealthCheck()const;
				void setHealthCheck(const std::string& healthCheck);
				int getMaxConnection()const;
				void setMaxConnection(int maxConnection);
				std::string getEnableHttp2()const;
				void setEnableHttp2(const std::string& enableHttp2);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getCookieTimeout()const;
				void setCookieTimeout(int cookieTimeout);
				std::string getStickySessionType()const;
				void setStickySessionType(const std::string& stickySessionType);
				std::string getVpcIds()const;
				void setVpcIds(const std::string& vpcIds);
				std::string getVServerGroupId()const;
				void setVServerGroupId(const std::string& vServerGroupId);
				std::string getAclId()const;
				void setAclId(const std::string& aclId);
				int getListenerPort()const;
				void setListenerPort(int listenerPort);
				std::string getCookie()const;
				void setCookie(const std::string& cookie);
				std::string getHealthCheckType()const;
				void setHealthCheckType(const std::string& healthCheckType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
				std::string getStickySession()const;
				void setStickySession(const std::string& stickySession);
				std::string getHealthCheckMethod()const;
				void setHealthCheckMethod(const std::string& healthCheckMethod);
				std::string getHealthCheckDomain()const;
				void setHealthCheckDomain(const std::string& healthCheckDomain);
				int getRequestTimeout()const;
				void setRequestTimeout(int requestTimeout);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getGzip()const;
				void setGzip(const std::string& gzip);
				std::string getTLSCipherPolicy()const;
				void setTLSCipherPolicy(const std::string& tLSCipherPolicy);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getServerCertificateId()const;
				void setServerCertificateId(const std::string& serverCertificateId);
				std::string getCACertificateId()const;
				void setCACertificateId(const std::string& cACertificateId);
				std::string getBackendProtocol()const;
				void setBackendProtocol(const std::string& backendProtocol);
				std::string getTags()const;
				void setTags(const std::string& tags);
				int getIdleTimeout()const;
				void setIdleTimeout(int idleTimeout);
				std::string getLoadBalancerId()const;
				void setLoadBalancerId(const std::string& loadBalancerId);
				std::string getXForwardedFor_SLBIP()const;
				void setXForwardedFor_SLBIP(const std::string& xForwardedFor_SLBIP);
				int getHealthCheckInterval()const;
				void setHealthCheckInterval(int healthCheckInterval);
				std::string getXForwardedFor_proto()const;
				void setXForwardedFor_proto(const std::string& xForwardedFor_proto);
				std::string getXForwardedFor_SLBID()const;
				void setXForwardedFor_SLBID(const std::string& xForwardedFor_SLBID);
				int getHealthCheckConnectPort()const;
				void setHealthCheckConnectPort(int healthCheckConnectPort);
				std::string getHealthCheckHttpCode()const;
				void setHealthCheckHttpCode(const std::string& healthCheckHttpCode);
				std::string getVServerGroup()const;
				void setVServerGroup(const std::string& vServerGroup);

            private:
				std::string access_key_id_;
				long resourceOwnerId_;
				int healthCheckTimeout_;
				std::string xForwardedFor_;
				std::string healthCheckURI_;
				std::string description_;
				int unhealthyThreshold_;
				int healthyThreshold_;
				std::string aclStatus_;
				std::string scheduler_;
				std::string aclType_;
				std::string healthCheck_;
				int maxConnection_;
				std::string enableHttp2_;
				std::string regionId_;
				int cookieTimeout_;
				std::string stickySessionType_;
				std::string vpcIds_;
				std::string vServerGroupId_;
				std::string aclId_;
				int listenerPort_;
				std::string cookie_;
				std::string healthCheckType_;
				std::string resourceOwnerAccount_;
				int bandwidth_;
				std::string stickySession_;
				std::string healthCheckMethod_;
				std::string healthCheckDomain_;
				int requestTimeout_;
				std::string ownerAccount_;
				std::string gzip_;
				std::string tLSCipherPolicy_;
				long ownerId_;
				std::string serverCertificateId_;
				std::string cACertificateId_;
				std::string backendProtocol_;
				std::string tags_;
				int idleTimeout_;
				std::string loadBalancerId_;
				std::string xForwardedFor_SLBIP_;
				int healthCheckInterval_;
				std::string xForwardedFor_proto_;
				std::string xForwardedFor_SLBID_;
				int healthCheckConnectPort_;
				std::string healthCheckHttpCode_;
				std::string vServerGroup_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERHTTPSLISTENERATTRIBUTEREQUEST_H_