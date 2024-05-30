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

#ifndef ALIBABACLOUD_SLB_MODEL_SETRULEREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_SETRULEREQUEST_H_

#include <alibabacloud/slb/SlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Slb {
namespace Model {
class ALIBABACLOUD_SLB_EXPORT SetRuleRequest : public RpcServiceRequest {
public:
	SetRuleRequest();
	~SetRuleRequest();
	std::string getAccess_key_id() const;
	void setAccess_key_id(const std::string &access_key_id);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getHealthCheckTimeout() const;
	void setHealthCheckTimeout(int healthCheckTimeout);
	std::string getHealthCheckURI() const;
	void setHealthCheckURI(const std::string &healthCheckURI);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	int getUnhealthyThreshold() const;
	void setUnhealthyThreshold(int unhealthyThreshold);
	int getHealthyThreshold() const;
	void setHealthyThreshold(int healthyThreshold);
	std::string getScheduler() const;
	void setScheduler(const std::string &scheduler);
	std::string getHealthCheck() const;
	void setHealthCheck(const std::string &healthCheck);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getListenerSync() const;
	void setListenerSync(const std::string &listenerSync);
	int getCookieTimeout() const;
	void setCookieTimeout(int cookieTimeout);
	std::string getStickySessionType() const;
	void setStickySessionType(const std::string &stickySessionType);
	std::string getVServerGroupId() const;
	void setVServerGroupId(const std::string &vServerGroupId);
	std::string getCookie() const;
	void setCookie(const std::string &cookie);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getStickySession() const;
	void setStickySession(const std::string &stickySession);
	std::string getHealthCheckDomain() const;
	void setHealthCheckDomain(const std::string &healthCheckDomain);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTags() const;
	void setTags(const std::string &tags);
	int getHealthCheckInterval() const;
	void setHealthCheckInterval(int healthCheckInterval);
	std::string getRuleId() const;
	void setRuleId(const std::string &ruleId);
	int getHealthCheckConnectPort() const;
	void setHealthCheckConnectPort(int healthCheckConnectPort);
	std::string getHealthCheckHttpCode() const;
	void setHealthCheckHttpCode(const std::string &healthCheckHttpCode);

private:
	std::string access_key_id_;
	long resourceOwnerId_;
	int healthCheckTimeout_;
	std::string healthCheckURI_;
	std::string ruleName_;
	int unhealthyThreshold_;
	int healthyThreshold_;
	std::string scheduler_;
	std::string healthCheck_;
	std::string regionId_;
	std::string listenerSync_;
	int cookieTimeout_;
	std::string stickySessionType_;
	std::string vServerGroupId_;
	std::string cookie_;
	std::string resourceOwnerAccount_;
	std::string stickySession_;
	std::string healthCheckDomain_;
	std::string ownerAccount_;
	long ownerId_;
	std::string tags_;
	int healthCheckInterval_;
	std::string ruleId_;
	int healthCheckConnectPort_;
	std::string healthCheckHttpCode_;
};
} // namespace Model
} // namespace Slb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SLB_MODEL_SETRULEREQUEST_H_
