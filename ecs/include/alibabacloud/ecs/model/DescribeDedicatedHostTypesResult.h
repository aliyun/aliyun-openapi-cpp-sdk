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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDHOSTTYPESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDHOSTTYPESRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeDedicatedHostTypesResult
    : public ServiceResult {
public:
  struct DedicatedHostType {
    int physicalGpus;
    float memorySize;
    long localStorageCapacity;
    std::string dedicatedHostType;
    int localStorageAmount;
    int cores;
    std::string localStorageCategory;
    int sockets;
    std::string gPUSpec;
    std::vector<std::string> supportedInstanceTypeFamilies;
    int totalVgpus;
    std::vector<std::string> supportedInstanceTypesList;
    int totalVcpus;
  };

  DescribeDedicatedHostTypesResult();
  explicit DescribeDedicatedHostTypesResult(const std::string &payload);
  ~DescribeDedicatedHostTypesResult();
  std::vector<DedicatedHostType> getDedicatedHostTypes() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<DedicatedHostType> dedicatedHostTypes_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDHOSTTYPESRESULT_H_