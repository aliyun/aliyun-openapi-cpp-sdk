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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEETLJOBINSTANCERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEETLJOBINSTANCERESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT DescribeETLJobInstanceResult
    : public ServiceResult {
public:
  struct TriggerHistory {
    std::string triggerType;
    std::string fireState;
    long fireTime;
    std::string historyId;
    std::string triggerId;
  };
  struct Arguments {
    std::string value;
    std::string key;
  };
  struct Metrics {
    long recordsOut;
    long vcores;
    long memSize;
    long totalTime;
    std::string recordsRate;
    long recordsIn;
    long recordsError;
  };
  struct FlowRelation {
    std::string flowJobId;
    std::string flowJobInstanceId;
  };
  struct StageInstance {
    struct Metrics1 {
      long recordsOut;
      long vcores;
      long memSize;
      long totalTime;
      std::string recordsRate;
      long recordsIn;
      long recordsError;
    };
    long endTime;
    Metrics1 metrics1;
    long startTime;
    std::string id;
    std::string name;
  };

  DescribeETLJobInstanceResult();
  explicit DescribeETLJobInstanceResult(const std::string &payload);
  ~DescribeETLJobInstanceResult();
  std::string getTriggerUser() const;
  Metrics getMetrics() const;
  long getEndTime() const;
  TriggerHistory getTriggerHistory() const;
  std::string getInstanceStatus() const;
  Arguments getArguments() const;
  long getStartTime() const;
  std::string getId() const;
  std::vector<FlowRelation> getFlowRelationList() const;
  std::vector<StageInstance> getStageInstanceList() const;
  std::string getEtlJobId() const;

protected:
  void parse(const std::string &payload);

private:
  std::string triggerUser_;
  Metrics metrics_;
  long endTime_;
  TriggerHistory triggerHistory_;
  std::string instanceStatus_;
  Arguments arguments_;
  long startTime_;
  std::string id_;
  std::vector<FlowRelation> flowRelationList_;
  std::vector<StageInstance> stageInstanceList_;
  std::string etlJobId_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEETLJOBINSTANCERESULT_H_