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

#ifndef ALIBABACLOUD_IMM_MODEL_CREATETAGSETRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_CREATETAGSETRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT CreateTagSetResult : public ServiceResult {
public:
  CreateTagSetResult();
  explicit CreateTagSetResult(const std::string &payload);
  ~CreateTagSetResult();
  std::string getStatus() const;
  long getPhotos() const;
  std::string getModifyTime() const;
  std::string getCreateTime() const;
  std::string getSetId() const;

protected:
  void parse(const std::string &payload);

private:
  std::string status_;
  long photos_;
  std::string modifyTime_;
  std::string createTime_;
  std::string setId_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_CREATETAGSETRESULT_H_