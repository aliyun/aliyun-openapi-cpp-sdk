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

#ifndef ALIBABACLOUD_IMM_MODEL_DETECTTAGRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_DETECTTAGRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT DetectTagResult : public ServiceResult {
public:
  struct SuccessDetailsItem {
    struct TagsItem {
      std::string parentTagId;
      std::string tagName;
      std::string tagId;
      std::string tagScore;
      std::string tagLevel;
      std::string parentTagName;
    };
    std::vector<SuccessDetailsItem::TagsItem> tags;
    std::string srcUri;
  };
  struct FailDetailsItem {
    std::string reason;
    std::string srcUri;
  };

  DetectTagResult();
  explicit DetectTagResult(const std::string &payload);
  ~DetectTagResult();
  std::vector<SuccessDetailsItem> getSuccessDetails() const;
  std::string getSuccessNum() const;
  std::vector<FailDetailsItem> getFailDetails() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<SuccessDetailsItem> successDetails_;
  std::string successNum_;
  std::vector<FailDetailsItem> failDetails_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_DETECTTAGRESULT_H_