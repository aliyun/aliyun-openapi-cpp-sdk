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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYMEDIADETAILJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYMEDIADETAILJOBLISTRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT QueryMediaDetailJobListResult
    : public ServiceResult {
public:
  struct Job {
    struct Input {
      std::string bucket;
      std::string object;
      std::string location;
    };
    struct MediaDetailConfig {
      struct OutputFile {
        std::string bucket;
        std::string object;
        std::string location;
      };
      OutputFile outputFile;
      std::string detailType;
      std::string scenario;
    };
    struct MediaDetailResult {
      struct MediaDetailRecgResult {
        struct Celebrity {
          std::string score;
          std::string target;
          std::string name;
        };
        struct Sensitive {
          std::string score;
          std::string target;
          std::string name;
        };
        struct Politician {
          std::string score;
          std::string target;
          std::string name;
        };
        struct FrameTagInfo {
          std::string score;
          std::string category;
          std::string tag;
        };
        struct Custom {
          struct Clip {
            std::string maxScore;
            std::string startTarget;
            std::string endTime;
            std::string startTime;
            std::string endTarget;
            std::string minScore;
            std::string avgScore;
          };
          std::vector<Custom::Clip> clips;
          std::string name;
        };
        std::vector<MediaDetailRecgResult::Politician> politicians;
        std::vector<MediaDetailRecgResult::Custom> customs;
        std::string ocrText;
        std::vector<MediaDetailRecgResult::Celebrity> celebrities;
        std::vector<MediaDetailRecgResult::Sensitive> sensitives;
        std::string imageUrl;
        std::vector<std::string> frameTags;
        std::string time;
        std::vector<MediaDetailRecgResult::FrameTagInfo> frameTagInfos;
      };
      std::string status;
      std::vector<MediaDetailRecgResult> mediaDetailRecgResults;
      std::vector<std::string> tags;
    };
    MediaDetailConfig mediaDetailConfig;
    Input input;
    std::string message;
    std::string userData;
    std::string state;
    MediaDetailResult mediaDetailResult;
    std::string creationTime;
    std::string pipelineId;
    std::string id;
    std::string code;
  };

  QueryMediaDetailJobListResult();
  explicit QueryMediaDetailJobListResult(const std::string &payload);
  ~QueryMediaDetailJobListResult();
  std::vector<Job> getJobList() const;
  std::vector<std::string> getNonExistIds() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<Job> jobList_;
  std::vector<std::string> nonExistIds_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYMEDIADETAILJOBLISTRESULT_H_