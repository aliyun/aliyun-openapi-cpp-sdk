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

#ifndef ALIBABACLOUD_AEGIS_MODEL_MODIFYLOGMETASTATUSREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_MODIFYLOGMETASTATUSREQUEST_H_

#include <alibabacloud/aegis/AegisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Aegis {
namespace Model {
class ALIBABACLOUD_AEGIS_EXPORT ModifyLogMetaStatusRequest
    : public RpcServiceRequest {

public:
  ModifyLogMetaStatusRequest();
  ~ModifyLogMetaStatusRequest();

  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  std::string getProject() const;
  void setProject(const std::string &project);
  std::string getFrom() const;
  void setFrom(const std::string &from);
  std::string getLang() const;
  void setLang(const std::string &lang);
  std::string getLogStore() const;
  void setLogStore(const std::string &logStore);
  std::string getStatus() const;
  void setStatus(const std::string &status);

private:
  std::string sourceIp_;
  std::string project_;
  std::string from_;
  std::string lang_;
  std::string logStore_;
  std::string status_;
};
} // namespace Model
} // namespace Aegis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AEGIS_MODEL_MODIFYLOGMETASTATUSREQUEST_H_