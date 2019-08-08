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

#ifndef ALIBABACLOUD_EMR_MODEL_METASTORECREATETABLEREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_METASTORECREATETABLEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT MetastoreCreateTableRequest
    : public RpcServiceRequest {
  struct Column {
    std::string name;
    std::string comment;
    std::string type;
  };
  struct Partition {
    std::string name;
    std::string comment;
    std::string type;
  };

public:
  MetastoreCreateTableRequest();
  ~MetastoreCreateTableRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getFieldDelimiter() const;
  void setFieldDelimiter(const std::string &fieldDelimiter);
  std::vector<Column> getColumn() const;
  void setColumn(const std::vector<Column> &column);
  std::string getCreateWith() const;
  void setCreateWith(const std::string &createWith);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  std::vector<Partition> getPartition() const;
  void setPartition(const std::vector<Partition> &partition);
  std::string getDbName() const;
  void setDbName(const std::string &dbName);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::string getCreateSql() const;
  void setCreateSql(const std::string &createSql);
  std::string getComment() const;
  void setComment(const std::string &comment);
  std::string getLocationUri() const;
  void setLocationUri(const std::string &locationUri);
  std::string getTableName() const;
  void setTableName(const std::string &tableName);
  std::string getDatabaseId() const;
  void setDatabaseId(const std::string &databaseId);

private:
  long resourceOwnerId_;
  std::string fieldDelimiter_;
  std::vector<Column> column_;
  std::string createWith_;
  std::string accessKeyId_;
  std::vector<Partition> partition_;
  std::string dbName_;
  std::string regionId_;
  std::string createSql_;
  std::string comment_;
  std::string locationUri_;
  std::string tableName_;
  std::string databaseId_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_METASTORECREATETABLEREQUEST_H_