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

#ifndef ALIBABACLOUD_EMR_MODEL_METASTOREUPDATETABLEREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_METASTOREUPDATETABLEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT MetastoreUpdateTableRequest
    : public RpcServiceRequest {
  struct AddColumn {
    std::string name;
    std::string comment;
    std::string type;
  };
  struct AddPartition {
    std::string name;
    std::string comment;
    std::string type;
  };

public:
  MetastoreUpdateTableRequest();
  ~MetastoreUpdateTableRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::vector<AddColumn> getAddColumn() const;
  void setAddColumn(const std::vector<AddColumn> &addColumn);
  std::vector<AddPartition> getAddPartition() const;
  void setAddPartition(const std::vector<AddPartition> &addPartition);
  std::vector<std::string> getDeleteColumnName() const;
  void setDeleteColumnName(const std::vector<std::string> &deleteColumnName);
  std::string getTableId() const;
  void setTableId(const std::string &tableId);
  std::vector<std::string> getDeletePartitionName() const;
  void
  setDeletePartitionName(const std::vector<std::string> &deletePartitionName);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  long resourceOwnerId_;
  std::string regionId_;
  std::vector<AddColumn> addColumn_;
  std::vector<AddPartition> addPartition_;
  std::vector<std::string> deleteColumnName_;
  std::string tableId_;
  std::vector<std::string> deletePartitionName_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_METASTOREUPDATETABLEREQUEST_H_