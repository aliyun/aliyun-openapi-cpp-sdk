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

#ifndef ALIBABACLOUD_CCC_MODEL_COMMITCONTACTFLOWVERSIONMODIFICATIONRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_COMMITCONTACTFLOWVERSIONMODIFICATIONRESULT_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT CommitContactFlowVersionModificationResult
    : public ServiceResult {
public:
  struct ContactFlowVersion {
    std::string lastModified;
    std::string status;
    std::string lastModifiedBy;
    std::string lockedBy;
    std::string contactFlowVersionId;
    std::string version;
    std::string content;
    std::string canvas;
    std::string contactFlowVersionDescription;
  };

  CommitContactFlowVersionModificationResult();
  explicit CommitContactFlowVersionModificationResult(
      const std::string &payload);
  ~CommitContactFlowVersionModificationResult();
  std::string getMessage() const;
  ContactFlowVersion getContactFlowVersion() const;
  int getHttpStatusCode() const;
  std::string getCode() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  std::string message_;
  ContactFlowVersion contactFlowVersion_;
  int httpStatusCode_;
  std::string code_;
  bool success_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_COMMITCONTACTFLOWVERSIONMODIFICATIONRESULT_H_