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

#ifndef ALIBABACLOUD_EMR_MODEL_GETOPSCOMMANDDETAILRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_GETOPSCOMMANDDETAILRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT GetOpsCommandDetailResult : public ServiceResult {
public:
  GetOpsCommandDetailResult();
  explicit GetOpsCommandDetailResult(const std::string &payload);
  ~GetOpsCommandDetailResult();
  std::string getDescription() const;
  std::string getCategory() const;
  std::string getServiceName() const;
  std::string getTargetType() const;
  std::string getParams() const;
  long getId() const;
  std::string getName() const;

protected:
  void parse(const std::string &payload);

private:
  std::string description_;
  std::string category_;
  std::string serviceName_;
  std::string targetType_;
  std::string params_;
  long id_;
  std::string name_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_GETOPSCOMMANDDETAILRESULT_H_