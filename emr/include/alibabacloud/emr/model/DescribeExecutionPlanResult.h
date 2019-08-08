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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEEXECUTIONPLANRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEEXECUTIONPLANRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT DescribeExecutionPlanResult
    : public ServiceResult {
public:
  struct ClusterInfo {
    struct SoftwareInfo {
      struct Software {
        int startTpe;
        bool optional;
        std::string version;
        std::string displayName;
        bool onlyDisplay;
        std::string name;
      };
      std::vector<Software> softwares;
      std::string emrVer;
      std::string clusterType;
    };
    struct EcsOrderInfo {
      std::string diskType;
      int diskCount;
      int diskCapacity;
      int nodeCount;
      std::string nodeType;
      int index;
      std::string instanceType;
    };
    struct BootstrapAction {
      std::string path;
      std::string arg;
      std::string name;
    };
    struct Config {
      std::string configValue;
      std::string configKey;
      std::string serviceName;
      std::string fileName;
      std::string encrypt;
    };
    bool useLocalMetaDb;
    bool ioOptimized;
    std::string zoneId;
    std::vector<BootstrapAction> bootstrapActionList;
    std::string securityGroupId;
    std::string vSwitchId;
    bool logEnable;
    std::string emrVer;
    std::string clusterType;
    std::vector<EcsOrderInfo> ecsOrders;
    std::string name;
    bool highAvailabilityEnable;
    bool easEnable;
    std::string vpcId;
    bool useCustomHiveMetaDB;
    std::string instanceGeneration;
    std::string configurations;
    std::string logPath;
    std::string netType;
    std::string userDefinedEmrEcsRole;
    std::vector<Config> configList;
    bool initCustomHiveMetaDB;
    SoftwareInfo softwareInfo;
  };
  struct JobInfo {
    std::string failAct;
    std::string type;
    std::string runParameter;
    std::string id;
    std::string name;
  };

  DescribeExecutionPlanResult();
  explicit DescribeExecutionPlanResult(const std::string &payload);
  ~DescribeExecutionPlanResult();
  std::string getStatus() const;
  std::string getWorkflowApp() const;
  std::string getDayOfWeek() const;
  int getTimeInterval() const;
  std::string getClusterId() const;
  std::string getDayOfMonth() const;
  long getStartTime() const;
  long getExecutionPlanVersion() const;
  std::string getName() const;
  std::vector<JobInfo> getJobInfoList() const;
  ClusterInfo getClusterInfo() const;
  std::string getStrategy() const;
  std::string getTimeUnit() const;
  std::string getClusterName() const;
  std::string getId() const;
  bool getCreateClusterOnDemand() const;

protected:
  void parse(const std::string &payload);

private:
  std::string status_;
  std::string workflowApp_;
  std::string dayOfWeek_;
  int timeInterval_;
  std::string clusterId_;
  std::string dayOfMonth_;
  long startTime_;
  long executionPlanVersion_;
  std::string name_;
  std::vector<JobInfo> jobInfoList_;
  ClusterInfo clusterInfo_;
  std::string strategy_;
  std::string timeUnit_;
  std::string clusterName_;
  std::string id_;
  bool createClusterOnDemand_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEEXECUTIONPLANRESULT_H_