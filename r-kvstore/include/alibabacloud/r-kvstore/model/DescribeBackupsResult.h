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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEBACKUPSRESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEBACKUPSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeBackupsResult
    : public ServiceResult {
public:
  struct Backup {
    std::string backupMethod;
    std::string engineVersion;
    std::string backupIntranetDownloadURL;
    std::string backupMode;
    long backupSize;
    int backupId;
    std::string nodeInstanceId;
    std::string backupDBNames;
    std::string backupDownloadURL;
    std::string backupEndTime;
    std::string backupStartTime;
    std::string backupType;
    std::string backupStatus;
  };

  DescribeBackupsResult();
  explicit DescribeBackupsResult(const std::string &payload);
  ~DescribeBackupsResult();
  int getTotalCount() const;
  int getPageSize() const;
  int getPageNumber() const;
  std::vector<Backup> getBackups() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  int pageSize_;
  int pageNumber_;
  std::vector<Backup> backups_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEBACKUPSRESULT_H_