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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTINVOCATIONSTATUSRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTINVOCATIONSTATUSRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT ListInvocationStatusResult
    : public ServiceResult {
public:
  struct InvokeInstance {
    std::string instanceId;
    std::string instanceInvokeStatus;
  };

  ListInvocationStatusResult();
  explicit ListInvocationStatusResult(const std::string &payload);
  ~ListInvocationStatusResult();
  std::string getInvokeStatus() const;
  std::string getCommandId() const;
  std::vector<InvokeInstance> getInvokeInstances() const;

protected:
  void parse(const std::string &payload);

private:
  std::string invokeStatus_;
  std::string commandId_;
  std::vector<InvokeInstance> invokeInstances_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTINVOCATIONSTATUSRESULT_H_