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

#ifndef ALIBABACLOUD_IVISION_MODEL_CREATETRAINDATASFROMPREDICTIONRESULT_H_
#define ALIBABACLOUD_IVISION_MODEL_CREATETRAINDATASFROMPREDICTIONRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ivision/IvisionExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Ivision {
namespace Model {
class ALIBABACLOUD_IVISION_EXPORT CreateTrainDatasFromPredictionResult
    : public ServiceResult {
public:
  struct TrainData {
    struct TagItem {
      struct Region {
        std::string left;
        std::string top;
        std::string height;
        std::string width;
      };
      std::string regionType;
      std::string tagId;
      Region region;
    };
    std::string status;
    std::string dataId;
    std::string iterationId;
    std::string tagStatus;
    std::string projectId;
    std::string dataUrl;
    std::string creationTime;
    std::vector<TrainData::TagItem> tagItems;
    std::string dataName;
  };

  CreateTrainDatasFromPredictionResult();
  explicit CreateTrainDatasFromPredictionResult(const std::string &payload);
  ~CreateTrainDatasFromPredictionResult();
  std::vector<TrainData> getTrainDatas() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<TrainData> trainDatas_;
};
} // namespace Model
} // namespace Ivision
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IVISION_MODEL_CREATETRAINDATASFROMPREDICTIONRESULT_H_