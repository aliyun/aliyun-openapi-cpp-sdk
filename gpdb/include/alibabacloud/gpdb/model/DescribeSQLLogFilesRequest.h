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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGFILESREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGFILESREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/gpdb/GpdbExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT DescribeSQLLogFilesRequest
    : public RpcServiceRequest {

public:
  DescribeSQLLogFilesRequest();
  ~DescribeSQLLogFilesRequest();

  std::string getFileName() const;
  void setFileName(const std::string &fileName);
  int getPageSize() const;
  void setPageSize(int pageSize);
  std::string getDBInstanceId() const;
  void setDBInstanceId(const std::string &dBInstanceId);
  int getPageNumber() const;
  void setPageNumber(int pageNumber);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  std::string fileName_;
  int pageSize_;
  std::string dBInstanceId_;
  int pageNumber_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGFILESREQUEST_H_