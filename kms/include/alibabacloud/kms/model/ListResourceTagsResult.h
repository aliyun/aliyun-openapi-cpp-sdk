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

#ifndef ALIBABACLOUD_KMS_MODEL_LISTRESOURCETAGSRESULT_H_
#define ALIBABACLOUD_KMS_MODEL_LISTRESOURCETAGSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/kms/KmsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Kms {
namespace Model {
class ALIBABACLOUD_KMS_EXPORT ListResourceTagsResult : public ServiceResult {
public:
  struct Tag {
    std::string tagKey;
    std::string keyId;
    std::string tagValue;
  };

  ListResourceTagsResult();
  explicit ListResourceTagsResult(const std::string &payload);
  ~ListResourceTagsResult();
  std::vector<Tag> getTags() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<Tag> tags_;
};
} // namespace Model
} // namespace Kms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_KMS_MODEL_LISTRESOURCETAGSRESULT_H_