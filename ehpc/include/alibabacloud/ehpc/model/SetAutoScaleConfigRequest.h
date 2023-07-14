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

#ifndef ALIBABACLOUD_EHPC_MODEL_SETAUTOSCALECONFIGREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_SETAUTOSCALECONFIGREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT SetAutoScaleConfigRequest : public RpcServiceRequest {
public:
	struct Queues {
		std::string queueName;
		std::string systemDiskLevel;
		bool sortedByInventory;
		struct InstanceTypes {
			std::string vSwitchId;
			std::string spotStrategy;
			std::string spotInterruptionBehavior;
			std::string zoneId;
			std::string instanceType;
			float spotPriceLimit;
			int spotDuration;
		};
		std::vector<InstanceTypes> instanceTypes;
		bool enableAutoGrow;
		std::string hostNameSuffix;
		float spotPriceLimit;
		bool enableAutoShrink;
		std::string spotStrategy;
		struct DataDisks {
			bool dataDiskDeleteWithInstance;
			bool dataDiskEncrypted;
			std::string dataDiskKMSKeyId;
			int dataDiskSize;
			std::string dataDiskCategory;
			std::string dataDiskPerformanceLevel;
		};
		std::vector<DataDisks> dataDisks;
		int minNodesInQueue;
		long maxNodesPerCycle;
		std::string systemDiskCategory;
		int maxNodesInQueue;
		int systemDiskSize;
		std::string queueImageId;
		std::string instanceType;
		std::string hostNamePrefix;
		long minNodesPerCycle;
	};
	SetAutoScaleConfigRequest();
	~SetAutoScaleConfigRequest();
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getDnsConfig() const;
	void setDnsConfig(const std::string &dnsConfig);
	float getSpotPriceLimit() const;
	void setSpotPriceLimit(float spotPriceLimit);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getExcludeNodes() const;
	void setExcludeNodes(const std::string &excludeNodes);
	int getExtraNodesGrowRatio() const;
	void setExtraNodesGrowRatio(int extraNodesGrowRatio);
	int getShrinkIdleTimes() const;
	void setShrinkIdleTimes(int shrinkIdleTimes);
	int getGrowTimeoutInMinutes() const;
	void setGrowTimeoutInMinutes(int growTimeoutInMinutes);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	bool getEnableAutoGrow() const;
	void setEnableAutoGrow(bool enableAutoGrow);
	bool getEnableAutoShrink() const;
	void setEnableAutoShrink(bool enableAutoShrink);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
	int getMaxNodesInCluster() const;
	void setMaxNodesInCluster(int maxNodesInCluster);
	bool getComputeEnableHt() const;
	void setComputeEnableHt(bool computeEnableHt);
	int getShrinkIntervalInMinutes() const;
	void setShrinkIntervalInMinutes(int shrinkIntervalInMinutes);
	std::vector<Queues> getQueues() const;
	void setQueues(const std::vector<Queues> &queues);
	int getGrowIntervalInMinutes() const;
	void setGrowIntervalInMinutes(int growIntervalInMinutes);
	int getGrowRatio() const;
	void setGrowRatio(int growRatio);

private:
	std::string imageId_;
	std::string dnsConfig_;
	float spotPriceLimit_;
	std::string accessKeyId_;
	std::string excludeNodes_;
	int extraNodesGrowRatio_;
	int shrinkIdleTimes_;
	int growTimeoutInMinutes_;
	std::string clusterId_;
	bool enableAutoGrow_;
	bool enableAutoShrink_;
	std::string spotStrategy_;
	int maxNodesInCluster_;
	bool computeEnableHt_;
	int shrinkIntervalInMinutes_;
	std::vector<Queues> queues_;
	int growIntervalInMinutes_;
	int growRatio_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_SETAUTOSCALECONFIGREQUEST_H_
