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

#ifndef ALIBABACLOUD_MTS_MODEL_DELETEMCUJOBRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_DELETEMCUJOBRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT DeleteMcuJobResult : public ServiceResult {
public:
  DeleteMcuJobResult();
  explicit DeleteMcuJobResult(const std::string &payload);
  ~DeleteMcuJobResult();
  std::vector<std::string> getNonExistJobIds() const;
  std::vector<std::string> getDeletedJobIds() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<std::string> nonExistJobIds_;
  std::vector<std::string> deletedJobIds_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_DELETEMCUJOBRESULT_H_