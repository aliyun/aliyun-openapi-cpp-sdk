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

#ifndef ALIBABACLOUD_IVISION_MODEL_DESCRIBEPREDICTDATASRESULT_H_
#define ALIBABACLOUD_IVISION_MODEL_DESCRIBEPREDICTDATASRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ivision/IvisionExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Ivision {
namespace Model {
class ALIBABACLOUD_IVISION_EXPORT DescribePredictDatasResult
    : public ServiceResult {
public:
  struct PredictData {
    struct PredictionResult {
      struct Region {
        std::string left;
        std::string top;
        std::string height;
        std::string width;
      };
      std::string regionType;
      std::string tagName;
      std::string tagId;
      std::string probability;
      Region region;
      std::string overlap;
      std::string properties;
    };
    std::string status;
    std::string dataId;
    std::string iterationId;
    std::vector<PredictData::PredictionResult> predictionResults;
    std::string projectId;
    std::string dataUrl;
    std::string creationTime;
    std::string errorCode;
    std::string errorMessage;
    std::string dataName;
  };

  DescribePredictDatasResult();
  explicit DescribePredictDatasResult(const std::string &payload);
  ~DescribePredictDatasResult();
  std::vector<PredictData> getPredictDatas() const;
  long getTotalNum() const;
  long getPageSize() const;
  long getCurrentPage() const;
  std::string getNextPageToken() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<PredictData> predictDatas_;
  long totalNum_;
  long pageSize_;
  long currentPage_;
  std::string nextPageToken_;
};
} // namespace Model
} // namespace Ivision
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IVISION_MODEL_DESCRIBEPREDICTDATASRESULT_H_