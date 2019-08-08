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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTPREDICTIVEJOBGROUPSRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTPREDICTIVEJOBGROUPSRESULT_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT ListPredictiveJobGroupsResult
    : public ServiceResult {
public:
  struct JobGroups {
    struct JobGroup {
      struct Strategy {
        struct TimeFrame {
          std::string endTime;
          std::string beginTime;
        };
        std::vector<TimeFrame> workingTime;
        int minAttemptInterval;
        long endTime;
        std::string strategyId;
        long startTime;
        int maxAttemptsPerDay;
      };
      struct Progress {
        struct KeyValuePair {
          std::string value;
          std::string key;
        };
        std::string status;
        std::vector<KeyValuePair> categories;
        long startTime;
        int duration;
        int totalCompleted;
        int totalNotAnswered;
        int totalJobs;
      };
      Progress progress;
      std::string description;
      std::string endTime;
      std::string instanceId;
      std::string startTime;
      std::string skillGroupId;
      std::string name;
      std::string jobGroupId;
      std::string skillGroupName;
      std::string taskType;
      long creationTime;
      Strategy strategy;
      std::string occupancyRate;
    };
    int totalCount;
    int pageSize;
    int pageNumber;
    std::vector<JobGroup> list;
  };

  ListPredictiveJobGroupsResult();
  explicit ListPredictiveJobGroupsResult(const std::string &payload);
  ~ListPredictiveJobGroupsResult();
  std::string getMessage() const;
  int getHttpStatusCode() const;
  std::string getCode() const;
  JobGroups getJobGroups() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  std::string message_;
  int httpStatusCode_;
  std::string code_;
  JobGroups jobGroups_;
  bool success_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_LISTPREDICTIVEJOBGROUPSRESULT_H_