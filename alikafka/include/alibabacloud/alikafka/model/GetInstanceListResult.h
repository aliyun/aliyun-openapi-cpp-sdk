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

#ifndef ALIBABACLOUD_ALIKAFKA_MODEL_GETINSTANCELISTRESULT_H_
#define ALIBABACLOUD_ALIKAFKA_MODEL_GETINSTANCELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alikafka/AlikafkaExport.h>

namespace AlibabaCloud
{
	namespace Alikafka
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIKAFKA_EXPORT GetInstanceListResult : public ServiceResult
			{
			public:
				struct InstanceVO
				{
					struct UpgradeServiceDetailInfo
					{
						std::string current2OpenSourceVersion;
					};
					struct ConfluentConfig
					{
						int ksqlStorage;
						int kafkaRestProxyCU;
						int zooKeeperReplica;
						int kafkaReplica;
						int connectReplica;
						int controlCenterStorage;
						int schemaRegistryCU;
						int kafkaCU;
						int connectCU;
						int ksqlCU;
						int controlCenterReplica;
						int ksqlReplica;
						int schemaRegistryReplica;
						int zooKeeperCU;
						int kafkaRestProxyReplica;
						int zooKeeperStorage;
						int controlCenterCU;
						int kafkaStorage;
					};
					struct TagVO
					{
						std::string value;
						std::string key;
					};
					int deployType;
					int reservedPublishCapacity;
					std::string resourceGroupId;
					std::string specType;
					int ioMax;
					std::string allConfig;
					std::string endPoint;
					UpgradeServiceDetailInfo upgradeServiceDetailInfo;
					std::string saslDomainEndpoint;
					std::string name;
					int viewInstanceStatusCode;
					ConfluentConfig confluentConfig;
					int diskType;
					std::string sslDomainEndpoint;
					int serviceStatus;
					int reservedSubscribeCapacity;
					int msgRetain;
					long expiredTime;
					int diskSize;
					int topicNumLimit;
					std::vector<InstanceVO::TagVO> tags;
					int usedPartitionCount;
					std::string sslEndPoint;
					int eipMax;
					std::string zoneId;
					std::string kmsKeyId;
					std::string instanceId;
					long createTime;
					std::string vSwitchId;
					int usedTopicCount;
					std::string securityGroup;
					int usedGroupCount;
					std::string vpcId;
					std::string domainEndpoint;
					int paidType;
					std::string standardZoneId;
					std::string ioMaxSpec;
					std::string regionId;
				};


				GetInstanceListResult();
				explicit GetInstanceListResult(const std::string &payload);
				~GetInstanceListResult();
				std::string getMessage()const;
				std::vector<InstanceVO> getInstanceList()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<InstanceVO> instanceList_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIKAFKA_MODEL_GETINSTANCELISTRESULT_H_