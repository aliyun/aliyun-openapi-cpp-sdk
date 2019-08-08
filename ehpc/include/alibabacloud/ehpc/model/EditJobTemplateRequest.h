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

#ifndef ALIBABACLOUD_EHPC_MODEL_EDITJOBTEMPLATEREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_EDITJOBTEMPLATEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT EditJobTemplateRequest
    : public RpcServiceRequest {

public:
  EditJobTemplateRequest();
  ~EditJobTemplateRequest();

  std::string getStderrRedirectPath() const;
  void setStderrRedirectPath(const std::string &stderrRedirectPath);
  std::string getVariables() const;
  void setVariables(const std::string &variables);
  std::string getRunasUser() const;
  void setRunasUser(const std::string &runasUser);
  bool getReRunable() const;
  void setReRunable(bool reRunable);
  std::string getTemplateId() const;
  void setTemplateId(const std::string &templateId);
  int getPriority() const;
  void setPriority(int priority);
  std::string getCommandLine() const;
  void setCommandLine(const std::string &commandLine);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  std::string getArrayRequest() const;
  void setArrayRequest(const std::string &arrayRequest);
  std::string getPackagePath() const;
  void setPackagePath(const std::string &packagePath);
  std::string getName() const;
  void setName(const std::string &name);
  std::string getStdoutRedirectPath() const;
  void setStdoutRedirectPath(const std::string &stdoutRedirectPath);

private:
  std::string stderrRedirectPath_;
  std::string variables_;
  std::string runasUser_;
  bool reRunable_;
  std::string templateId_;
  int priority_;
  std::string commandLine_;
  std::string accessKeyId_;
  std::string arrayRequest_;
  std::string packagePath_;
  std::string name_;
  std::string stdoutRedirectPath_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_EDITJOBTEMPLATEREQUEST_H_