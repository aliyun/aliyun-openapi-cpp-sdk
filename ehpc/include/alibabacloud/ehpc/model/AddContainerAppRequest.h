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

#ifndef ALIBABACLOUD_EHPC_MODEL_ADDCONTAINERAPPREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_ADDCONTAINERAPPREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT AddContainerAppRequest
    : public RpcServiceRequest {

public:
  AddContainerAppRequest();
  ~AddContainerAppRequest();

  std::string getContainerType() const;
  void setContainerType(const std::string &containerType);
  std::string getName() const;
  void setName(const std::string &name);
  std::string getDescription() const;
  void setDescription(const std::string &description);
  std::string getRepository() const;
  void setRepository(const std::string &repository);
  std::string getImageTag() const;
  void setImageTag(const std::string &imageTag);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  std::string containerType_;
  std::string name_;
  std::string description_;
  std::string repository_;
  std::string imageTag_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_ADDCONTAINERAPPREQUEST_H_