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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEETLJOBRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEETLJOBRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT DescribeETLJobResult : public ServiceResult {
public:
  struct ClusterConfig {
    struct DriverResource {
      int vcores;
      int memSize;
    };
    struct ExecutorResource {
      int vcores;
      int memSize;
    };
    bool isOnDemand;
    std::string userName;
    DriverResource driverResource;
    long sizeRate;
    std::string clusterId;
    std::string queue;
    ExecutorResource executorResource;
    long recordRate;
  };
  struct AlertConfig {
    struct Item {
      std::vector<std::string> alertUserGroupIdList;
      bool enable;
      std::string eventId;
      std::vector<std::string> alertDingDingGroupIdList;
    };
    std::vector<Item> items;
  };
  struct TriggerRule {
    long endTime;
    long startTime;
    bool enabled;
    std::string cronExpr;
  };
  struct Stage {
    std::string stageName;
    std::string stageConf;
    std::string stageType;
    std::string stagePlugin;
  };
  struct StageConnection {
    std::string port;
    std::string from;
    std::string to;
  };

  DescribeETLJobResult();
  explicit DescribeETLJobResult(const std::string &payload);
  ~DescribeETLJobResult();
  std::string getCategoryId() const;
  std::string getDescription() const;
  std::string getGraph() const;
  AlertConfig getAlertConfig() const;
  std::vector<StageConnection> getStageConnectionList() const;
  std::vector<Stage> getStageList() const;
  std::vector<TriggerRule> getTriggerRuleList() const;
  std::string getId() const;
  ClusterConfig getClusterConfig() const;
  std::string getName() const;

protected:
  void parse(const std::string &payload);

private:
  std::string categoryId_;
  std::string description_;
  std::string graph_;
  AlertConfig alertConfig_;
  std::vector<StageConnection> stageConnectionList_;
  std::vector<Stage> stageList_;
  std::vector<TriggerRule> triggerRuleList_;
  std::string id_;
  ClusterConfig clusterConfig_;
  std::string name_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEETLJOBRESULT_H_