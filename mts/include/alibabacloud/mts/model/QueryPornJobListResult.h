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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYPORNJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYPORNJOBLISTRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT QueryPornJobListResult : public ServiceResult {
public:
  struct PornJob {
    struct Input {
      std::string bucket;
      std::string object;
      std::string location;
    };
    struct PornConfig {
      struct OutputFile {
        std::string bucket;
        std::string object;
        std::string location;
      };
      OutputFile outputFile;
      std::string bizType;
      std::string interval;
    };
    struct CensorPornResult {
      struct Counter {
        std::string label;
        int count;
      };
      struct Top {
        std::string score;
        std::string label;
        std::string index;
        std::string object;
        std::string timestamp;
      };
      std::string suggestion;
      std::string maxScore;
      std::string averageScore;
      std::vector<Counter> pornCounterList;
      std::vector<Top> pornTopList;
      std::string label;
    };
    Input input;
    std::string message;
    std::string userData;
    std::string state;
    CensorPornResult censorPornResult;
    std::string creationTime;
    std::string pipelineId;
    PornConfig pornConfig;
    std::string id;
    std::string code;
  };

  QueryPornJobListResult();
  explicit QueryPornJobListResult(const std::string &payload);
  ~QueryPornJobListResult();
  std::vector<PornJob> getPornJobList() const;
  std::vector<std::string> getNonExistIds() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<PornJob> pornJobList_;
  std::vector<std::string> nonExistIds_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYPORNJOBLISTRESULT_H_