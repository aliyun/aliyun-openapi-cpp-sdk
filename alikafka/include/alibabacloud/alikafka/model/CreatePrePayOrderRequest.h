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

#ifndef ALIBABACLOUD_ALIKAFKA_MODEL_CREATEPREPAYORDERREQUEST_H_
#define ALIBABACLOUD_ALIKAFKA_MODEL_CREATEPREPAYORDERREQUEST_H_

#include <alibabacloud/alikafka/AlikafkaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alikafka {
namespace Model {
class ALIBABACLOUD_ALIKAFKA_EXPORT CreatePrePayOrderRequest : public RpcServiceRequest {
public:
	struct ConfluentConfig {
		int ksqlStorage;
		int controlCenterStorage;
		int kafkaRestProxyReplica;
		int zooKeeperReplica;
		int connectCU;
		int kafkaReplica;
		int schemaRegistryReplica;
		int kafkaCU;
		int connectReplica;
		int controlCenterCU;
		int ksqlReplica;
		int controlCenterReplica;
		int kafkaStorage;
		int zooKeeperStorage;
		int ksqlCU;
		int schemaRegistryCU;
		int zooKeeperCU;
		int kafkaRestProxyCU;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	CreatePrePayOrderRequest();
	~CreatePrePayOrderRequest();
	int getIoMax() const;
	void setIoMax(int ioMax);
	int getEipMax() const;
	void setEipMax(int eipMax);
	int getDuration() const;
	void setDuration(int duration);
	std::string getSpecType() const;
	void setSpecType(const std::string &specType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	ConfluentConfig getConfluentConfig() const;
	void setConfluentConfig(const ConfluentConfig &confluentConfig);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	int getPartitionNum() const;
	void setPartitionNum(int partitionNum);
	int getPaidType() const;
	void setPaidType(int paidType);
	int getDiskSize() const;
	void setDiskSize(int diskSize);
	std::string getIoMaxSpec() const;
	void setIoMaxSpec(const std::string &ioMaxSpec);
	std::string getDiskType() const;
	void setDiskType(const std::string &diskType);
	int getTopicQuota() const;
	void setTopicQuota(int topicQuota);
	int getDeployType() const;
	void setDeployType(int deployType);

private:
	int ioMax_;
	int eipMax_;
	int duration_;
	std::string specType_;
	std::string resourceGroupId_;
	std::string regionId_;
	ConfluentConfig confluentConfig_;
	std::vector<Tag> tag_;
	int partitionNum_;
	int paidType_;
	int diskSize_;
	std::string ioMaxSpec_;
	std::string diskType_;
	int topicQuota_;
	int deployType_;
};
} // namespace Model
} // namespace Alikafka
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIKAFKA_MODEL_CREATEPREPAYORDERREQUEST_H_
