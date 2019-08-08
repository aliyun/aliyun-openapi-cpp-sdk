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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTNAVSUBTREEREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTNAVSUBTREEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT ListNavSubTreeRequest : public RpcServiceRequest {

public:
  ListNavSubTreeRequest();
  ~ListNavSubTreeRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  int getDepth() const;
  void setDepth(int depth);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::string getName() const;
  void setName(const std::string &name);
  int getPageSize() const;
  void setPageSize(int pageSize);
  std::string getType() const;
  void setType(const std::string &type);
  std::string getProjectId() const;
  void setProjectId(const std::string &projectId);
  std::string getParentId() const;
  void setParentId(const std::string &parentId);
  int getPageNumber() const;
  void setPageNumber(int pageNumber);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  long resourceOwnerId_;
  int depth_;
  std::string regionId_;
  std::string name_;
  int pageSize_;
  std::string type_;
  std::string projectId_;
  std::string parentId_;
  int pageNumber_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_LISTNAVSUBTREEREQUEST_H_