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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYCENSORJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYCENSORJOBLISTRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT QueryCensorJobListResult : public ServiceResult {
public:
  struct CensorJob {
    struct Input {
      std::string bucket;
      std::string object;
      std::string location;
    };
    struct CensorConfig {
      struct OutputFile {
        std::string bucket;
        std::string object;
        std::string location;
      };
      OutputFile outputFile;
      std::string scenes;
      std::string saveType;
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
    struct CensorTerrorismResult {
      struct Counter1 {
        std::string label;
        int count;
      };
      struct Top2 {
        std::string score;
        std::string label;
        std::string index;
        std::string object;
        std::string timestamp;
      };
      std::vector<Counter1> terrorismCounterList;
      std::string suggestion;
      std::string maxScore;
      std::string averageScore;
      std::string label;
      std::vector<Top2> terrorismTopList;
    };
    struct ImageCensorResult {
      std::string imageBucket;
      std::string imageObject;
      std::string imageLocation;
      std::string result;
    };
    CensorTerrorismResult censorTerrorismResult;
    std::vector<CensorJob::ImageCensorResult> imageCensorResults;
    std::string message;
    std::string userData;
    std::string descCensorResult;
    CensorPornResult censorPornResult;
    std::string code;
    Input input;
    std::string state;
    std::string creationTime;
    std::string barrageCensorResult;
    std::string pipelineId;
    std::string resultSaveObject;
    std::string id;
    CensorConfig censorConfig;
    std::string titleCensorResult;
  };

  QueryCensorJobListResult();
  explicit QueryCensorJobListResult(const std::string &payload);
  ~QueryCensorJobListResult();
  std::vector<CensorJob> getCensorJobList() const;
  std::vector<std::string> getNonExistIds() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<CensorJob> censorJobList_;
  std::vector<std::string> nonExistIds_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYCENSORJOBLISTRESULT_H_