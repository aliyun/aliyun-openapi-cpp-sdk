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

#ifndef ALIBABACLOUD_ECS_WORKBENCH_MODEL_LOGININSTANCEREQUEST_H_
#define ALIBABACLOUD_ECS_WORKBENCH_MODEL_LOGININSTANCEREQUEST_H_

#include <alibabacloud/ecs-workbench/Ecs_workbenchExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs_workbench {
namespace Model {
class ALIBABACLOUD_ECS_WORKBENCH_EXPORT LoginInstanceRequest : public RpcServiceRequest {
public:
	struct PartnerInfo {
		std::string partnerName;
		std::string partnerId;
	};
	struct InstanceLoginInfo {
		std::string expireTime;
		bool loginByInstanceShortcut;
		std::string certificate;
		std::string authenticationType;
		std::string dockerExec;
		std::string shortcutToken;
		std::string resourceGroupId;
		std::string protocol;
		std::string password;
		bool loginByInstanceCredential;
		std::string instanceId;
		std::string regionId;
		int port;
		std::string vpcId;
		std::string host;
		struct Options {
			int operationDisableSeconds;
			std::string notificationRecipientUrl;
			std::string sessionControl;
			int videoFreezeSeconds;
			struct ContainerInfo {
				std::map<std::string, std::string> headers;
				std::string endpoint;
				std::string containerName;
				std::string clusterName;
				std::string _namespace;
				std::string podName;
				std::string clusterId;
				std::string deployment;
			};
			ContainerInfo containerInfo;
			int notificationRetryIntervalSeconds;
			int audioMuteSeconds;
			int fixedHeight;
			int fixedWidth;
			std::string notificationEventTypes;
			int notificationRetryLimit;
		};
		Options options;
		std::string instanceType;
		std::string dockerContainerName;
		std::string passPhrase;
		std::string credentialToken;
		long durationSeconds;
		std::string networkAccessMode;
		std::string username;
	};
	struct UserAccount {
		long accountId;
		std::string empId;
		std::string expireTime;
		std::string loginName;
		struct Options {
			long loginLimit;
		};
		Options options;
		std::string accountStructure;
		long durationSeconds;
		long parentId;
		std::string accountPlatform;
	};
	LoginInstanceRequest();
	~LoginInstanceRequest();
	PartnerInfo getPartnerInfo() const;
	void setPartnerInfo(const PartnerInfo &partnerInfo);
	InstanceLoginInfo getInstanceLoginInfo() const;
	void setInstanceLoginInfo(const InstanceLoginInfo &instanceLoginInfo);
	UserAccount getUserAccount() const;
	void setUserAccount(const UserAccount &userAccount);

private:
	PartnerInfo partnerInfo_;
	InstanceLoginInfo instanceLoginInfo_;
	UserAccount userAccount_;
};
} // namespace Model
} // namespace Ecs_workbench
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_WORKBENCH_MODEL_LOGININSTANCEREQUEST_H_
