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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEFLEETSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEFLEETSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeFleetsResult : public ServiceResult {
public:
  struct Fleet {
    struct SpotOptions {
      std::string allocationStrategy;
      std::string instanceInterruptionBehavior;
      int instancePoolsToUseCount;
    };
    struct OnDemandOptions {
      std::string allocationStrategy;
    };
    struct TargetCapacitySpecification {
      std::string defaultTargetCapacityType;
      float totalTargetCapacity;
      float onDemandTargetCapacity;
      float spotTargetCapacity;
      bool fillGapWithOnDemand;
    };
    struct LaunchTemplateConfig {
      float weightedCapacity;
      float priority;
      std::string instanceType;
      float maxPrice;
      std::string vSWitchId;
    };
    std::string status;
    TargetCapacitySpecification targetCapacitySpecification;
    OnDemandOptions onDemandOptions;
    std::string excessCapacityTerminationPolicy;
    std::string fleetType;
    SpotOptions spotOptions;
    std::vector<Fleet::LaunchTemplateConfig> launchTemplateConfigs;
    std::string launchTemplateId;
    std::string validUntil;
    bool terminateInstancesWithExpiration;
    std::string fleetName;
    std::string state;
    std::string fleetId;
    std::string launchTemplateVersion;
    std::string creationTime;
    std::string validFrom;
    float maxSpotPrice;
    std::string regionId;
    bool terminateInstances;
  };

  DescribeFleetsResult();
  explicit DescribeFleetsResult(const std::string &payload);
  ~DescribeFleetsResult();
  std::vector<Fleet> getFleets() const;
  int getTotalCount() const;
  int getPageSize() const;
  int getPageNumber() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<Fleet> fleets_;
  int totalCount_;
  int pageSize_;
  int pageNumber_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEFLEETSRESULT_H_