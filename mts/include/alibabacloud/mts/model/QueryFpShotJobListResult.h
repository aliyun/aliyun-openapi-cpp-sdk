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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYFPSHOTJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYFPSHOTJOBLISTRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT QueryFpShotJobListResult : public ServiceResult {
public:
  struct FpShotJob {
    struct InputFile {
      std::string bucket;
      std::string object;
      std::string location;
    };
    struct FpShotConfig {
      std::string saveType;
      std::string primaryKey;
    };
    struct FpShotResult {
      struct FpShot {
        struct FpShotSlice {
          struct Input {
            std::string start;
            std::string duration;
          };
          struct Duplication {
            std::string start;
            std::string duration;
          };
          Input input;
          Duplication duplication;
        };
        std::string similarity;
        std::string primaryKey;
        std::vector<FpShot::FpShotSlice> fpShotSlices;
      };
      std::vector<FpShot> audioFpShots;
      std::vector<FpShot> fpShots;
    };
    FpShotConfig fpShotConfig;
    std::string message;
    std::string finishTime;
    std::string userData;
    std::string state;
    FpShotResult fpShotResult;
    std::string creationTime;
    std::string pipelineId;
    std::string fileId;
    std::string id;
    std::string code;
    InputFile inputFile;
  };

  QueryFpShotJobListResult();
  explicit QueryFpShotJobListResult(const std::string &payload);
  ~QueryFpShotJobListResult();
  std::string getNextPageToken() const;
  std::vector<std::string> getNonExistPrimaryKeys() const;
  std::vector<FpShotJob> getFpShotJobList() const;
  std::vector<std::string> getNonExistIds() const;

protected:
  void parse(const std::string &payload);

private:
  std::string nextPageToken_;
  std::vector<std::string> nonExistPrimaryKeys_;
  std::vector<FpShotJob> fpShotJobList_;
  std::vector<std::string> nonExistIds_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYFPSHOTJOBLISTRESULT_H_