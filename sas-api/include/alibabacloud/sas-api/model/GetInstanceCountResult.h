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

#ifndef ALIBABACLOUD_SAS_API_MODEL_GETINSTANCECOUNTRESULT_H_
#define ALIBABACLOUD_SAS_API_MODEL_GETINSTANCECOUNTRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas-api/Sas_apiExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Sas_api {
namespace Model {
class ALIBABACLOUD_SAS_API_EXPORT GetInstanceCountResult
    : public ServiceResult {
public:
  GetInstanceCountResult();
  explicit GetInstanceCountResult(const std::string &payload);
  ~GetInstanceCountResult();
  std::string getMessage() const;
  int getData() const;
  std::string getCode() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  std::string message_;
  int data_;
  std::string code_;
  bool success_;
};
} // namespace Model
} // namespace Sas_api
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_API_MODEL_GETINSTANCECOUNTRESULT_H_