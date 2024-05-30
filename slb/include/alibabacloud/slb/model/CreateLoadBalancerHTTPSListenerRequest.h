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

#ifndef ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERHTTPSLISTENERREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERHTTPSLISTENERREQUEST_H_

#include <alibabacloud/slb/SlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Slb {
namespace Model {
class ALIBABACLOUD_SLB_EXPORT CreateLoadBalancerHTTPSListenerRequest : public RpcServiceRequest {
public:
	struct ServerCertificate {
		std::string bindingType;
		std::string certificateId;
		std::string standardType;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateLoadBalancerHTTPSListenerRequest();
	~CreateLoadBalancerHTTPSListenerRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<ServerCertificate> getServerCertificate() const;
	void setServerCertificate(const std::vector<ServerCertificate> &serverCertificate);
	int getHealthCheckTimeout() const;
	void setHealthCheckTimeout(int healthCheckTimeout);
	std::string getXForwardedFor() const;
	void setXForwardedFor(const std::string &xForwardedFor);
	std::string getHealthCheckURI() const;
	void setHealthCheckURI(const std::string &healthCheckURI);
	std::string getXForwardedFor_SLBPORT() const;
	void setXForwardedFor_SLBPORT(const std::string &xForwardedFor_SLBPORT);
	std::string getAclStatus() const;
	void setAclStatus(const std::string &aclStatus);
	std::string getAclType() const;
	void setAclType(const std::string &aclType);
	std::string getHealthCheck() const;
	void setHealthCheck(const std::string &healthCheck);
	std::string getVpcIds() const;
	void setVpcIds(const std::string &vpcIds);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getVServerGroupId() const;
	void setVServerGroupId(const std::string &vServerGroupId);
	std::string getAclId() const;
	void setAclId(const std::string &aclId);
	std::string getXForwardedFor_ClientCertClientVerify() const;
	void setXForwardedFor_ClientCertClientVerify(const std::string &xForwardedFor_ClientCertClientVerify);
	std::string getCookie() const;
	void setCookie(const std::string &cookie);
	std::string getHealthCheckMethod() const;
	void setHealthCheckMethod(const std::string &healthCheckMethod);
	std::string getHealthCheckDomain() const;
	void setHealthCheckDomain(const std::string &healthCheckDomain);
	int getRequestTimeout() const;
	void setRequestTimeout(int requestTimeout);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getCACertificateId() const;
	void setCACertificateId(const std::string &cACertificateId);
	std::string getBackendProtocol() const;
	void setBackendProtocol(const std::string &backendProtocol);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getXForwardedFor_ClientCertFingerprintAlias() const;
	void setXForwardedFor_ClientCertFingerprintAlias(const std::string &xForwardedFor_ClientCertFingerprintAlias);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);
	std::string getXForwardedFor_SLBIP() const;
	void setXForwardedFor_SLBIP(const std::string &xForwardedFor_SLBIP);
	int getBackendServerPort() const;
	void setBackendServerPort(int backendServerPort);
	int getHealthCheckInterval() const;
	void setHealthCheckInterval(int healthCheckInterval);
	std::string getXForwardedFor_ClientCertClientVerifyAlias() const;
	void setXForwardedFor_ClientCertClientVerifyAlias(const std::string &xForwardedFor_ClientCertClientVerifyAlias);
	std::string getXForwardedFor_SLBID() const;
	void setXForwardedFor_SLBID(const std::string &xForwardedFor_SLBID);
	std::string getXForwardedFor_ClientCertFingerprint() const;
	void setXForwardedFor_ClientCertFingerprint(const std::string &xForwardedFor_ClientCertFingerprint);
	std::string getHealthCheckHttpVersion() const;
	void setHealthCheckHttpVersion(const std::string &healthCheckHttpVersion);
	std::string getAccess_key_id() const;
	void setAccess_key_id(const std::string &access_key_id);
	std::string getXForwardedFor_ClientSrcPort() const;
	void setXForwardedFor_ClientSrcPort(const std::string &xForwardedFor_ClientSrcPort);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getUnhealthyThreshold() const;
	void setUnhealthyThreshold(int unhealthyThreshold);
	std::string getXForwardedFor_ClientCertIssuerDNAlias() const;
	void setXForwardedFor_ClientCertIssuerDNAlias(const std::string &xForwardedFor_ClientCertIssuerDNAlias);
	int getHealthyThreshold() const;
	void setHealthyThreshold(int healthyThreshold);
	std::string getScheduler() const;
	void setScheduler(const std::string &scheduler);
	int getMaxConnection() const;
	void setMaxConnection(int maxConnection);
	std::string getEnableHttp2() const;
	void setEnableHttp2(const std::string &enableHttp2);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getXForwardedFor_ClientCertSubjectDN() const;
	void setXForwardedFor_ClientCertSubjectDN(const std::string &xForwardedFor_ClientCertSubjectDN);
	int getCookieTimeout() const;
	void setCookieTimeout(int cookieTimeout);
	std::string getStickySessionType() const;
	void setStickySessionType(const std::string &stickySessionType);
	int getListenerPort() const;
	void setListenerPort(int listenerPort);
	std::string getHealthCheckType() const;
	void setHealthCheckType(const std::string &healthCheckType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	int getBandwidth() const;
	void setBandwidth(int bandwidth);
	std::string getStickySession() const;
	void setStickySession(const std::string &stickySession);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getGzip() const;
	void setGzip(const std::string &gzip);
	std::string getTLSCipherPolicy() const;
	void setTLSCipherPolicy(const std::string &tLSCipherPolicy);
	std::string getServerCertificateId() const;
	void setServerCertificateId(const std::string &serverCertificateId);
	int getIdleTimeout() const;
	void setIdleTimeout(int idleTimeout);
	std::string getXForwardedFor_proto() const;
	void setXForwardedFor_proto(const std::string &xForwardedFor_proto);
	std::string getXForwardedFor_ClientCertSubjectDNAlias() const;
	void setXForwardedFor_ClientCertSubjectDNAlias(const std::string &xForwardedFor_ClientCertSubjectDNAlias);
	int getHealthCheckConnectPort() const;
	void setHealthCheckConnectPort(int healthCheckConnectPort);
	std::string getHealthCheckHttpCode() const;
	void setHealthCheckHttpCode(const std::string &healthCheckHttpCode);
	std::string getXForwardedFor_ClientCertIssuerDN() const;
	void setXForwardedFor_ClientCertIssuerDN(const std::string &xForwardedFor_ClientCertIssuerDN);

private:
	long resourceOwnerId_;
	std::vector<ServerCertificate> serverCertificate_;
	int healthCheckTimeout_;
	std::string xForwardedFor_;
	std::string healthCheckURI_;
	std::string xForwardedFor_SLBPORT_;
	std::string aclStatus_;
	std::string aclType_;
	std::string healthCheck_;
	std::string vpcIds_;
	std::vector<Tag> tag_;
	std::string vServerGroupId_;
	std::string aclId_;
	std::string xForwardedFor_ClientCertClientVerify_;
	std::string cookie_;
	std::string healthCheckMethod_;
	std::string healthCheckDomain_;
	int requestTimeout_;
	long ownerId_;
	std::string cACertificateId_;
	std::string backendProtocol_;
	std::string tags_;
	std::string xForwardedFor_ClientCertFingerprintAlias_;
	std::string loadBalancerId_;
	std::string xForwardedFor_SLBIP_;
	int backendServerPort_;
	int healthCheckInterval_;
	std::string xForwardedFor_ClientCertClientVerifyAlias_;
	std::string xForwardedFor_SLBID_;
	std::string xForwardedFor_ClientCertFingerprint_;
	std::string healthCheckHttpVersion_;
	std::string access_key_id_;
	std::string xForwardedFor_ClientSrcPort_;
	std::string description_;
	int unhealthyThreshold_;
	std::string xForwardedFor_ClientCertIssuerDNAlias_;
	int healthyThreshold_;
	std::string scheduler_;
	int maxConnection_;
	std::string enableHttp2_;
	std::string regionId_;
	std::string xForwardedFor_ClientCertSubjectDN_;
	int cookieTimeout_;
	std::string stickySessionType_;
	int listenerPort_;
	std::string healthCheckType_;
	std::string resourceOwnerAccount_;
	int bandwidth_;
	std::string stickySession_;
	std::string ownerAccount_;
	std::string gzip_;
	std::string tLSCipherPolicy_;
	std::string serverCertificateId_;
	int idleTimeout_;
	std::string xForwardedFor_proto_;
	std::string xForwardedFor_ClientCertSubjectDNAlias_;
	int healthCheckConnectPort_;
	std::string healthCheckHttpCode_;
	std::string xForwardedFor_ClientCertIssuerDN_;
};
} // namespace Model
} // namespace Slb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERHTTPSLISTENERREQUEST_H_
