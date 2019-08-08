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

#ifndef ALIBABACLOUD_EMR_MODEL_METASTORELISTTASKREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_METASTORELISTTASKREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT MetastoreListTaskRequest
    : public RpcServiceRequest {

public:
  MetastoreListTaskRequest();
  ~MetastoreListTaskRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getTaskStatus() const;
  void setTaskStatus(const std::string &taskStatus);
  std::string getTaskSourceType() const;
  void setTaskSourceType(const std::string &taskSourceType);
  std::string getTaskType() const;
  void setTaskType(const std::string &taskType);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  int getPageSize() const;
  void setPageSize(int pageSize);
  std::string getDataSourceId() const;
  void setDataSourceId(const std::string &dataSourceId);
  int getPageNumber() const;
  void setPageNumber(int pageNumber);
  std::string getTaskId() const;
  void setTaskId(const std::string &taskId);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  long resourceOwnerId_;
  std::string taskStatus_;
  std::string taskSourceType_;
  std::string taskType_;
  std::string regionId_;
  int pageSize_;
  std::string dataSourceId_;
  int pageNumber_;
  std::string taskId_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_METASTORELISTTASKREQUEST_H_