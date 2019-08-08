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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGACTIVITYRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGACTIVITYRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT DescribeScalingActivityResult
    : public ServiceResult {
public:
  DescribeScalingActivityResult();
  explicit DescribeScalingActivityResult(const std::string &payload);
  ~DescribeScalingActivityResult();
  std::string getStatus() const;
  std::string getDescription() const;
  long getEndTime() const;
  int getExpectNum() const;
  std::string getCause() const;
  long getStartTime() const;
  std::string getTransition() const;
  std::string getScalingRuleId() const;
  int getTotalCapacity() const;
  std::string getInstanceIds() const;
  std::string getBizId() const;

protected:
  void parse(const std::string &payload);

private:
  std::string status_;
  std::string description_;
  long endTime_;
  int expectNum_;
  std::string cause_;
  long startTime_;
  std::string transition_;
  std::string scalingRuleId_;
  int totalCapacity_;
  std::string instanceIds_;
  std::string bizId_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGACTIVITYRESULT_H_