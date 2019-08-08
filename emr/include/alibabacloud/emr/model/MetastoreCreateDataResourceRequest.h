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

#ifndef ALIBABACLOUD_EMR_MODEL_METASTORECREATEDATARESOURCEREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_METASTORECREATEDATARESOURCEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT MetastoreCreateDataResourceRequest
    : public RpcServiceRequest {

public:
  MetastoreCreateDataResourceRequest();
  ~MetastoreCreateDataResourceRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  bool getDefault() const;
  void setDefault(bool default);
  std::string getAccessType() const;
  void setAccessType(const std::string &accessType);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::string getName() const;
  void setName(const std::string &name);
  std::string getDescription() const;
  void setDescription(const std::string &description);
  std::string getMetaType() const;
  void setMetaType(const std::string &metaType);
  std::string getClusterId() const;
  void setClusterId(const std::string &clusterId);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  long resourceOwnerId_;
  bool default_;
  std::string accessType_;
  std::string regionId_;
  std::string name_;
  std::string description_;
  std::string metaType_;
  std::string clusterId_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_METASTORECREATEDATARESOURCEREQUEST_H_