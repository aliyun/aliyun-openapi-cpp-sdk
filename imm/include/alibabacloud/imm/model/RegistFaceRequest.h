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

#ifndef ALIBABACLOUD_IMM_MODEL_REGISTFACEREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_REGISTFACEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/imm/ImmExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT RegistFaceRequest : public RpcServiceRequest {

public:
  RegistFaceRequest();
  ~RegistFaceRequest();

  bool getChooseBiggestFace() const;
  void setChooseBiggestFace(bool chooseBiggestFace);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  bool getIsQualityLimit() const;
  void setIsQualityLimit(bool isQualityLimit);
  std::string getProject() const;
  void setProject(const std::string &project);
  std::string getSrcUri() const;
  void setSrcUri(const std::string &srcUri);
  std::string getRegisterCheckLevel() const;
  void setRegisterCheckLevel(const std::string &registerCheckLevel);
  std::string getGroupName() const;
  void setGroupName(const std::string &groupName);
  std::string getUser() const;
  void setUser(const std::string &user);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  bool chooseBiggestFace_;
  std::string regionId_;
  bool isQualityLimit_;
  std::string project_;
  std::string srcUri_;
  std::string registerCheckLevel_;
  std::string groupName_;
  std::string user_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_REGISTFACEREQUEST_H_