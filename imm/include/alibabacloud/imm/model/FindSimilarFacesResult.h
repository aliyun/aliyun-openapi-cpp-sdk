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

#ifndef ALIBABACLOUD_IMM_MODEL_FINDSIMILARFACESRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_FINDSIMILARFACESRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT FindSimilarFacesResult : public ServiceResult {
public:
  struct FacesItem {
    struct FaceAttributes {
      struct FaceBoundary {
        int left;
        int top;
        int height;
        int width;
      };
      FaceBoundary faceBoundary;
    };
    std::string faceId;
    FaceAttributes faceAttributes;
    float similarity;
    std::string imageUri;
  };

  FindSimilarFacesResult();
  explicit FindSimilarFacesResult(const std::string &payload);
  ~FindSimilarFacesResult();
  std::vector<FacesItem> getFaces() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<FacesItem> faces_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_FINDSIMILARFACESRESULT_H_