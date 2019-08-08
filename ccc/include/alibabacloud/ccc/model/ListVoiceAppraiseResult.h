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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTVOICEAPPRAISERESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTVOICEAPPRAISERESULT_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT ListVoiceAppraiseResult : public ServiceResult {
public:
  struct ContactFlow {
    struct ContactFlowVersion {
      std::string lastModified;
      std::string status;
      std::string lastModifiedBy;
      std::string contactFlowVersionId;
      std::string version;
      std::string content;
      std::string contactFlowVersionDescription;
    };
    struct PhoneNumber {
      std::string number;
      std::string instanceId;
      int remainingTime;
      int trunks;
      std::string phoneNumberId;
      std::string phoneNumberDescription;
    };
    std::vector<PhoneNumber> phoneNumbers;
    std::string type;
    std::string appliedVersion;
    std::vector<ContactFlowVersion> versions;
    std::string contactFlowId;
    std::string instanceId;
    std::string contactFlowName;
    std::string contactFlowDescription;
  };

  ListVoiceAppraiseResult();
  explicit ListVoiceAppraiseResult(const std::string &payload);
  ~ListVoiceAppraiseResult();
  std::string getMessage() const;
  std::string getNotice() const;
  int getHttpStatusCode() const;
  ContactFlow getContactFlow() const;
  std::string getCode() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  std::string message_;
  std::string notice_;
  int httpStatusCode_;
  ContactFlow contactFlow_;
  std::string code_;
  bool success_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_LISTVOICEAPPRAISERESULT_H_