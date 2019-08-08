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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYCOVERJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYCOVERJOBLISTRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT QueryCoverJobListResult : public ServiceResult {
public:
  struct CoverJob {
    struct Input {
      std::string bucket;
      std::string object;
      std::string location;
    };
    struct CoverConfig {
      struct OutputFile {
        std::string bucket;
        std::string object;
        std::string location;
      };
      OutputFile outputFile;
    };
    struct CoverImage {
      std::string score;
      std::string time;
      std::string url;
    };
    std::vector<CoverJob::CoverImage> coverImageList;
    Input input;
    std::string message;
    std::string userData;
    CoverConfig coverConfig;
    std::string state;
    std::string creationTime;
    std::string pipelineId;
    std::string id;
    std::string code;
  };

  QueryCoverJobListResult();
  explicit QueryCoverJobListResult(const std::string &payload);
  ~QueryCoverJobListResult();
  std::vector<CoverJob> getCoverJobList() const;
  std::vector<std::string> getNonExistIds() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<CoverJob> coverJobList_;
  std::vector<std::string> nonExistIds_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYCOVERJOBLISTRESULT_H_