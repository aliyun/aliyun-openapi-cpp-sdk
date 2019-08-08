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

#ifndef ALIBABACLOUD_IMM_MODEL_LISTTAGPHOTOSRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_LISTTAGPHOTOSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT ListTagPhotosResult : public ServiceResult {
public:
  struct PhotosItem {
    float tagScore;
    std::string srcUri;
  };

  ListTagPhotosResult();
  explicit ListTagPhotosResult(const std::string &payload);
  ~ListTagPhotosResult();
  std::vector<PhotosItem> getPhotos() const;
  std::string getNextMarker() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<PhotosItem> photos_;
  std::string nextMarker_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_LISTTAGPHOTOSRESULT_H_