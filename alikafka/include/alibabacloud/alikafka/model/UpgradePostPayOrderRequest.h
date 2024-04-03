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

#ifndef ALIBABACLOUD_ALIKAFKA_MODEL_UPGRADEPOSTPAYORDERREQUEST_H_
#define ALIBABACLOUD_ALIKAFKA_MODEL_UPGRADEPOSTPAYORDERREQUEST_H_

#include <alibabacloud/alikafka/AlikafkaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alikafka {
namespace Model {
class ALIBABACLOUD_ALIKAFKA_EXPORT UpgradePostPayOrderRequest : public RpcServiceRequest {
public:
	struct ServerlessConfig {
		long reservedPublishCapacity;
		long reservedSubscribeCapacity;
	};
	UpgradePostPayOrderRequest();
	~UpgradePostPayOrderRequest();
	ServerlessConfig getServerlessConfig() const;
	void setServerlessConfig(const ServerlessConfig &serverlessConfig);
	int getDiskSize() const;
	void setDiskSize(int diskSize);
	int getIoMax() const;
	void setIoMax(int ioMax);
	bool getEipModel() const;
	void setEipModel(bool eipModel);
	std::string getIoMaxSpec() const;
	void setIoMaxSpec(const std::string &ioMaxSpec);
	int getTopicQuota() const;
	void setTopicQuota(int topicQuota);
	int getEipMax() const;
	void setEipMax(int eipMax);
	std::string getSpecType() const;
	void setSpecType(const std::string &specType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPartitionNum() const;
	void setPartitionNum(int partitionNum);

private:
	ServerlessConfig serverlessConfig_;
	int diskSize_;
	int ioMax_;
	bool eipModel_;
	std::string ioMaxSpec_;
	int topicQuota_;
	int eipMax_;
	std::string specType_;
	std::string instanceId_;
	std::string regionId_;
	int partitionNum_;
};
} // namespace Model
} // namespace Alikafka
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIKAFKA_MODEL_UPGRADEPOSTPAYORDERREQUEST_H_
