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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATEDATASOURCEREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATEDATASOURCEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT CreateDataSourceRequest
    : public RpcServiceRequest {

public:
  CreateDataSourceRequest();
  ~CreateDataSourceRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::string getNavParentId() const;
  void setNavParentId(const std::string &navParentId);
  std::string getName() const;
  void setName(const std::string &name);
  std::string getDescription() const;
  void setDescription(const std::string &description);
  std::string getSourceType() const;
  void setSourceType(const std::string &sourceType);
  std::string getConf() const;
  void setConf(const std::string &conf);
  std::string getClusterId() const;
  void setClusterId(const std::string &clusterId);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  long resourceOwnerId_;
  std::string regionId_;
  std::string navParentId_;
  std::string name_;
  std::string description_;
  std::string sourceType_;
  std::string conf_;
  std::string clusterId_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_CREATEDATASOURCEREQUEST_H_