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

#ifndef ALIBABACLOUD_EIAM_MODEL_GETIDENTITYPROVIDERUDPULLCONFIGURATIONRESULT_H_
#define ALIBABACLOUD_EIAM_MODEL_GETIDENTITYPROVIDERUDPULLCONFIGURATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eiam/EiamExport.h>

namespace AlibabaCloud
{
	namespace Eiam
	{
		namespace Model
		{
			class ALIBABACLOUD_EIAM_EXPORT GetIdentityProviderUdPullConfigurationResult : public ServiceResult
			{
			public:
				struct UdPullConfiguration
				{
					struct UdSyncScopeConfig
					{
						std::vector<std::string> sourceScopes;
						std::string targetScope;
					};
					struct PullProtectedRule
					{
						int userDeletedThreshold;
						int organizationalUnitDeletedThreshold;
						int groupDeletedThreshold;
					};
					struct LdapUdPullConfig
					{
						std::string groupObjectClass;
						std::string userObjectClassCustomFilter;
						std::string groupObjectClassCustomFilter;
						std::string organizationUnitObjectClass;
						std::string userObjectClass;
						std::string groupMemberAttributeName;
					};
					struct PeriodicSyncConfig
					{
						std::string periodicSyncCron;
						int periodicSyncTimes;
						std::string periodicSyncType;
					};
					LdapUdPullConfig ldapUdPullConfig;
					std::string periodicSyncStatus;
					UdSyncScopeConfig udSyncScopeConfig;
					std::string identityProviderId;
					PeriodicSyncConfig periodicSyncConfig;
					std::string instanceId;
					PullProtectedRule pullProtectedRule;
					std::string groupSyncStatus;
					std::string incrementalCallbackStatus;
				};


				GetIdentityProviderUdPullConfigurationResult();
				explicit GetIdentityProviderUdPullConfigurationResult(const std::string &payload);
				~GetIdentityProviderUdPullConfigurationResult();
				UdPullConfiguration getUdPullConfiguration()const;

			protected:
				void parse(const std::string &payload);
			private:
				UdPullConfiguration udPullConfiguration_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIAM_MODEL_GETIDENTITYPROVIDERUDPULLCONFIGURATIONRESULT_H_