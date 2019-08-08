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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_GETSNAPSHOTSETTINGSRESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_GETSNAPSHOTSETTINGSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT GetSnapshotSettingsResult
    : public ServiceResult {
public:
  GetSnapshotSettingsResult();
  explicit GetSnapshotSettingsResult(const std::string &payload);
  ~GetSnapshotSettingsResult();
  int getDayList() const;
  std::string getNextTime() const;
  std::string getInstanceId() const;
  int getMaxAutoSnapshots() const;
  int getRetentionDay() const;
  int getBeginHour() const;
  int getEndHour() const;
  int getMaxManualSnapshots() const;

protected:
  void parse(const std::string &payload);

private:
  int dayList_;
  std::string nextTime_;
  std::string instanceId_;
  int maxAutoSnapshots_;
  int retentionDay_;
  int beginHour_;
  int endHour_;
  int maxManualSnapshots_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_GETSNAPSHOTSETTINGSRESULT_H_