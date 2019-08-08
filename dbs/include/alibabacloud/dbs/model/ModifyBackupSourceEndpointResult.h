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

#ifndef ALIBABACLOUD_DBS_MODEL_MODIFYBACKUPSOURCEENDPOINTRESULT_H_
#define ALIBABACLOUD_DBS_MODEL_MODIFYBACKUPSOURCEENDPOINTRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dbs/DbsExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Dbs {
namespace Model {
class ALIBABACLOUD_DBS_EXPORT ModifyBackupSourceEndpointResult
    : public ServiceResult {
public:
  ModifyBackupSourceEndpointResult();
  explicit ModifyBackupSourceEndpointResult(const std::string &payload);
  ~ModifyBackupSourceEndpointResult();
  int getHttpStatusCode() const;
  std::string getBackupPlanId() const;
  bool getNeedPrecheck() const;
  std::string getErrMessage() const;
  bool getSuccess() const;
  std::string getErrCode() const;

protected:
  void parse(const std::string &payload);

private:
  int httpStatusCode_;
  std::string backupPlanId_;
  bool needPrecheck_;
  std::string errMessage_;
  bool success_;
  std::string errCode_;
};
} // namespace Model
} // namespace Dbs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DBS_MODEL_MODIFYBACKUPSOURCEENDPOINTRESULT_H_