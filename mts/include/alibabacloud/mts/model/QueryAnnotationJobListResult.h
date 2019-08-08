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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYANNOTATIONJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYANNOTATIONJOBLISTRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT QueryAnnotationJobListResult
    : public ServiceResult {
public:
  struct AnnotationJob {
    struct Input {
      std::string bucket;
      std::string object;
      std::string location;
    };
    struct VideoAnnotationResult {
      struct Annotation {
        std::string score;
        std::string label;
      };
      std::vector<Annotation> annotations;
      std::string details;
    };
    VideoAnnotationResult videoAnnotationResult;
    Input input;
    std::string message;
    std::string userData;
    std::string state;
    std::string creationTime;
    std::string pipelineId;
    std::string id;
    std::string code;
  };

  QueryAnnotationJobListResult();
  explicit QueryAnnotationJobListResult(const std::string &payload);
  ~QueryAnnotationJobListResult();
  std::vector<AnnotationJob> getAnnotationJobList() const;
  std::vector<std::string> getNonExistIds() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<AnnotationJob> annotationJobList_;
  std::vector<std::string> nonExistIds_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYANNOTATIONJOBLISTRESULT_H_