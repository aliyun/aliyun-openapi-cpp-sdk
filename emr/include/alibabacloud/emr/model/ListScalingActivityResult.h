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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTSCALINGACTIVITYRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTSCALINGACTIVITYRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT ListScalingActivityResult : public ServiceResult {
public:
  struct ScalingActivity {
    std::string status;
    std::string description;
    long endTime;
    int expectNum;
    std::string cause;
    long startTime;
    std::string transition;
    std::string scalingRuleId;
    int totalCapacity;
    std::string instanceIds;
    std::string bizId;
  };

  ListScalingActivityResult();
  explicit ListScalingActivityResult(const std::string &payload);
  ~ListScalingActivityResult();
  int getPageSize() const;
  int getPageNumber() const;
  int getTotal() const;
  std::vector<ScalingActivity> getScalingActivityList() const;

protected:
  void parse(const std::string &payload);

private:
  int pageSize_;
  int pageNumber_;
  int total_;
  std::vector<ScalingActivity> scalingActivityList_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_LISTSCALINGACTIVITYRESULT_H_