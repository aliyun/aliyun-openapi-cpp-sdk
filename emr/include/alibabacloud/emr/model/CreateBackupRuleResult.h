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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATEBACKUPRULERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_CREATEBACKUPRULERESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT CreateBackupRuleResult : public ServiceResult {
public:
  CreateBackupRuleResult();
  explicit CreateBackupRuleResult(const std::string &payload);
  ~CreateBackupRuleResult();
  std::string getDescription() const;
  std::string getMetadataType() const;
  std::string getBackupPlanId() const;
  std::string getId() const;
  std::string getBackupMethodType() const;
  std::string getName() const;

protected:
  void parse(const std::string &payload);

private:
  std::string description_;
  std::string metadataType_;
  std::string backupPlanId_;
  std::string id_;
  std::string backupMethodType_;
  std::string name_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_CREATEBACKUPRULERESULT_H_