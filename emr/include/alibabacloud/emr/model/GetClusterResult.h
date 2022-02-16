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

#ifndef ALIBABACLOUD_EMR_MODEL_GETCLUSTERRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_GETCLUSTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT GetClusterResult : public ServiceResult
			{
			public:
				struct Cluster
				{
					struct SubscriptionConfig
					{
						std::string autoRenewDurationUnit;
						bool autoPayOrder;
						bool autoRenew;
						std::string paymentDurationUnit;
						int paymentDuration;
						int autoRenewDuration;
					};
					struct NodeAttributes
					{
						struct OSUser
						{
							std::string group;
							std::string user;
							std::string password;
						};
						std::string deploymentSetId;
						std::string keyPairName;
						std::string vpcId;
						std::string zoneId;
						std::string masterRootPassword;
						std::string securityGroupId;
						std::string dataDiskKMSKeyId;
						bool enableDeploymentSet;
						std::string ramRole;
						bool dataDiskEncrypted;
						std::vector<OSUser> users;
					};
					struct FailedReason
					{
						std::string requestId;
						std::string errorMsg;
						std::string errorCode;
						std::string errorMessage;
					};
					struct AssociatedCluster
					{
						std::string associatedType;
						std::string clusterId;
						std::string clusterName;
					};
					bool autoRenew;
					long deleteTime;
					std::string nodeKeyPairName;
					std::string releaseVersion;
					std::vector<AssociatedCluster> associatedClusters;
					std::string deployMode;
					std::string networkType;
					long expiredTime;
					std::string securityMode;
					NodeAttributes nodeAttributes;
					std::string clusterName;
					std::string paymentType;
					std::string paymentStatus;
					std::string clusterState;
					std::string mainVersion;
					std::string zoneId;
					std::string clusterId;
					long createTime;
					std::string securityGroupId;
					FailedReason failedReason;
					std::string nodeRootPassword;
					std::string metaStoreType;
					std::string clusterType;
					SubscriptionConfig subscriptionConfig;
					std::string vpcId;
					std::string nodeRamRole;
					std::string regionId;
					bool hasUncompletedOrder;
				};


				GetClusterResult();
				explicit GetClusterResult(const std::string &payload);
				~GetClusterResult();
				Cluster getCluster()const;

			protected:
				void parse(const std::string &payload);
			private:
				Cluster cluster_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_GETCLUSTERRESULT_H_