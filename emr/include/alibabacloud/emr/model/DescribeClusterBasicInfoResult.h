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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERBASICINFORESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERBASICINFORESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT DescribeClusterBasicInfoResult
    : public ServiceResult {
public:
  struct ClusterInfo {
    struct SoftwareInfo {
      struct Software {
        int startTpe;
        std::string version;
        std::string displayName;
        bool onlyDisplay;
        std::string name;
      };
      std::vector<Software> softwares;
      std::string emrVer;
      std::string clusterType;
    };
    struct FailReason {
      std::string requestId;
      std::string errorMsg;
      std::string errorCode;
    };
    struct BootstrapAction {
      std::string path;
      std::string arg;
      std::string name;
    };
    int taskNodeInService;
    bool showSoftwareInterface;
    int coreNodeInService;
    std::string securityGroupName;
    std::vector<BootstrapAction> bootstrapActionList;
    bool logEnable;
    int masterNodeInService;
    FailReason failReason;
    std::string name;
    bool highAvailabilityEnable;
    long expiredTime;
    std::string createType;
    int coreNodeTotal;
    std::string imageId;
    std::string configurations;
    std::string netType;
    std::string userDefinedEmrEcsRole;
    long stopTime;
    std::string status;
    bool ioOptimized;
    std::string zoneId;
    bool bootstrapFailed;
    std::string vSwitchId;
    std::string securityGroupId;
    long startTime;
    int taskNodeTotal;
    int period;
    int masterNodeTotal;
    std::string clusterType;
    bool easEnable;
    std::string vpcId;
    std::string chargeType;
    std::string instanceGeneration;
    std::string id;
    std::string regionId;
    std::string bizId;
    std::string logPath;
    int runningTime;
    SoftwareInfo softwareInfo;
  };

  DescribeClusterBasicInfoResult();
  explicit DescribeClusterBasicInfoResult(const std::string &payload);
  ~DescribeClusterBasicInfoResult();
  ClusterInfo getClusterInfo() const;

protected:
  void parse(const std::string &payload);

private:
  ClusterInfo clusterInfo_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERBASICINFORESULT_H_