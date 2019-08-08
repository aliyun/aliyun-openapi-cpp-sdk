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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTETLJOBINSTANCERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTETLJOBINSTANCERESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT ListETLJobInstanceResult : public ServiceResult {
public:
  struct Instance {
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
    std::string triggerUser;
    std::string triggerType;
    Metrics metrics;
    long endTime;
    std::string instanceStatus;
    Arguments arguments;
    long startTime;
    std::string id;
    std::vector<Instance::FlowRelation> flowRelationList;
    std::vector<Instance::StageInstance> stageInstanceList;
    std::string etlJobId;
    std::string name;
  };

  ListETLJobInstanceResult();
  explicit ListETLJobInstanceResult(const std::string &payload);
  ~ListETLJobInstanceResult();
  int getPageSize() const;
  int getPageNumber() const;
  int getTotal() const;
  std::vector<Instance> getInstanceList() const;

protected:
  void parse(const std::string &payload);

private:
  int pageSize_;
  int pageNumber_;
  int total_;
  std::vector<Instance> instanceList_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_LISTETLJOBINSTANCERESULT_H_