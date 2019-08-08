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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSTOPICCREATERESULT_H_
#define ALIBABACLOUD_ONS_MODEL_ONSTOPICCREATERESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ons/OnsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Ons {
namespace Model {
class ALIBABACLOUD_ONS_EXPORT OnsTopicCreateResult : public ServiceResult {
public:
  OnsTopicCreateResult();
  explicit OnsTopicCreateResult(const std::string &payload);
  ~OnsTopicCreateResult();
  std::string getHelpUrl() const;

protected:
  void parse(const std::string &payload);

private:
  std::string helpUrl_;
};
} // namespace Model
} // namespace Ons
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ONS_MODEL_ONSTOPICCREATERESULT_H_