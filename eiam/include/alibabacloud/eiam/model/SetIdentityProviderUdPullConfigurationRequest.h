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

#ifndef ALIBABACLOUD_EIAM_MODEL_SETIDENTITYPROVIDERUDPULLCONFIGURATIONREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_SETIDENTITYPROVIDERUDPULLCONFIGURATIONREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT SetIdentityProviderUdPullConfigurationRequest : public RpcServiceRequest {
public:
	struct UdSyncScopeConfig {
		std::string targetScope;
		std::string string;
		std::vector<std::string> sourceScopes;
	};
	struct LdapUdPullConfig {
		std::string groupMemberAttributeName;
		std::string userObjectClass;
		std::string userObjectClassCustomFilter;
		std::string groupObjectClass;
		std::string groupObjectClassCustomFilter;
		std::string organizationUnitObjectClass;
	};
	struct PeriodicSyncConfig {
		int integer;
		std::vector<int> periodicSyncTimes;
		std::string periodicSyncCron;
		std::string periodicSyncType;
	};
	struct PullProtectedRule {
		int userDeletedThreshold;
		int groupDeletedThreshold;
		int organizationalUnitDeletedThreshold;
	};
	SetIdentityProviderUdPullConfigurationRequest();
	~SetIdentityProviderUdPullConfigurationRequest();
	std::string getGroupSyncStatus() const;
	void setGroupSyncStatus(const std::string &groupSyncStatus);
	UdSyncScopeConfig getUdSyncScopeConfig() const;
	void setUdSyncScopeConfig(const UdSyncScopeConfig &udSyncScopeConfig);
	std::string getPeriodicSyncStatus() const;
	void setPeriodicSyncStatus(const std::string &periodicSyncStatus);
	LdapUdPullConfig getLdapUdPullConfig() const;
	void setLdapUdPullConfig(const LdapUdPullConfig &ldapUdPullConfig);
	std::string getIdentityProviderId() const;
	void setIdentityProviderId(const std::string &identityProviderId);
	PeriodicSyncConfig getPeriodicSyncConfig() const;
	void setPeriodicSyncConfig(const PeriodicSyncConfig &periodicSyncConfig);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	PullProtectedRule getPullProtectedRule() const;
	void setPullProtectedRule(const PullProtectedRule &pullProtectedRule);
	std::string getIncrementalCallbackStatus() const;
	void setIncrementalCallbackStatus(const std::string &incrementalCallbackStatus);

private:
	std::string groupSyncStatus_;
	UdSyncScopeConfig udSyncScopeConfig_;
	std::string periodicSyncStatus_;
	LdapUdPullConfig ldapUdPullConfig_;
	std::string identityProviderId_;
	PeriodicSyncConfig periodicSyncConfig_;
	std::string instanceId_;
	PullProtectedRule pullProtectedRule_;
	std::string incrementalCallbackStatus_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_SETIDENTITYPROVIDERUDPULLCONFIGURATIONREQUEST_H_
