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

#ifndef ALIBABACLOUD_SDDP_MODEL_CREATEUSERAUTHRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_CREATEUSERAUTHRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sddp/SddpExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT CreateUserAuthResult : public ServiceResult {
public:
  CreateUserAuthResult();
  explicit CreateUserAuthResult(const std::string &payload);
  ~CreateUserAuthResult();

protected:
  void parse(const std::string &payload);

private:
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_CREATEUSERAUTHRESULT_H_