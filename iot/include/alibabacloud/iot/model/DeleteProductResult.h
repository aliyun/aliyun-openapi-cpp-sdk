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

#ifndef ALIBABACLOUD_IOT_MODEL_DELETEPRODUCTRESULT_H_
#define ALIBABACLOUD_IOT_MODEL_DELETEPRODUCTRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/iot/IotExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Iot {
namespace Model {
class ALIBABACLOUD_IOT_EXPORT DeleteProductResult : public ServiceResult {
public:
  DeleteProductResult();
  explicit DeleteProductResult(const std::string &payload);
  ~DeleteProductResult();
  std::string getErrorMessage() const;
  std::string getCode() const;
  bool getSuccess() const;

protected:
  void parse(const std::string &payload);

private:
  std::string errorMessage_;
  std::string code_;
  bool success_;
};
} // namespace Model
} // namespace Iot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IOT_MODEL_DELETEPRODUCTRESULT_H_