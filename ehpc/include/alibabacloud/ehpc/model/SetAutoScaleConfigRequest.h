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

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT SetAutoScaleConfigRequest
    : public RpcServiceRequest {
  struct Queues {
    std::string spotStrategy;
    std::string queueName;
    RepeatList instanceTypes;
    std::string instanceType;
    bool enableAutoGrow;
    float spotPriceLimit;
    bool enableAutoShrink;
  };

public:
  SetAutoScaleConfigRequest();
  ~SetAutoScaleConfigRequest();

  int getShrinkIdleTimes() const;
  void setShrinkIdleTimes(int shrinkIdleTimes);
  int getGrowTimeoutInMinutes() const;
  void setGrowTimeoutInMinutes(int growTimeoutInMinutes);
  std::string getClusterId() const;
  void setClusterId(const std::string &clusterId);
  bool getEnableAutoGrow() const;
  void setEnableAutoGrow(bool enableAutoGrow);
  float getSpotPriceLimit() const;
  void setSpotPriceLimit(float spotPriceLimit);
  bool getEnableAutoShrink() const;
  void setEnableAutoShrink(bool enableAutoShrink);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  std::string getSpotStrategy() const;
  void setSpotStrategy(const std::string &spotStrategy);
  int getMaxNodesInCluster() const;
  void setMaxNodesInCluster(int maxNodesInCluster);
  std::string getExcludeNodes() const;
  void setExcludeNodes(const std::string &excludeNodes);
  int getShrinkIntervalInMinutes() const;
  void setShrinkIntervalInMinutes(int shrinkIntervalInMinutes);
  std::vector<Queues> getQueues() const;
  void setQueues(const std::vector<Queues> &queues);
  int getExtraNodesGrowRatio() const;
  void setExtraNodesGrowRatio(int extraNodesGrowRatio);
  int getGrowIntervalInMinutes() const;
  void setGrowIntervalInMinutes(int growIntervalInMinutes);
  int getGrowRatio() const;
  void setGrowRatio(int growRatio);

private:
  int shrinkIdleTimes_;
  int growTimeoutInMinutes_;
  std::string clusterId_;
  bool enableAutoGrow_;
  float spotPriceLimit_;
  bool enableAutoShrink_;
  std::string accessKeyId_;
  std::string spotStrategy_;
  int maxNodesInCluster_;
  std::string excludeNodes_;
  int shrinkIntervalInMinutes_;
  std::vector<Queues> queues_;
  int extraNodesGrowRatio_;
  int growIntervalInMinutes_;
  int growRatio_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_SETAUTOSCALECONFIGREQUEST_H_