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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTSCALINGRULERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTSCALINGRULERESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT ListScalingRuleResult : public ServiceResult {
public:
  struct Rule {
    struct SchedulerTrigger {
      long launchTime;
      std::string recurrenceType;
      std::string recurrenceValue;
      long recurrenceEndTime;
      int launchExpirationTime;
    };
    struct CloudWatchTrigger {
      std::string metricName;
      std::string comparisonOperator;
      std::string metricDisplayName;
      int period;
      std::string evaluationCount;
      std::string unit;
      std::string statistics;
      std::string threshold;
    };
    std::string status;
    long gmtCreate;
    int adjustmentValue;
    SchedulerTrigger schedulerTrigger;
    CloudWatchTrigger cloudWatchTrigger;
    int cooldown;
    long gmtModified;
    std::string id;
    std::string ruleName;
    std::string ruleCategory;
    std::string adjustmentType;
  };

  ListScalingRuleResult();
  explicit ListScalingRuleResult(const std::string &payload);
  ~ListScalingRuleResult();
  std::vector<Rule> getRuleList() const;
  int getPageSize() const;
  int getPageNumber() const;
  int getTotal() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<Rule> ruleList_;
  int pageSize_;
  int pageNumber_;
  int total_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_LISTSCALINGRULERESULT_H_