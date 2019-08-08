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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBESIGNATURETRADELISTRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBESIGNATURETRADELISTRESULT_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT DescribeSignatureTradeListResult
    : public ServiceResult {
public:
  struct Trade {
    std::string peopleId;
    std::string docId;
    std::string docTitle;
    std::string peopleName;
    int signStatus;
    int signMode;
    long createTime;
    long id;
    std::string transactionId;
  };

  DescribeSignatureTradeListResult();
  explicit DescribeSignatureTradeListResult(const std::string &payload);
  ~DescribeSignatureTradeListResult();
  int getTotalCount() const;
  int getCurrentPage() const;
  int getShowSize() const;
  std::vector<Trade> getTradeList() const;

protected:
  void parse(const std::string &payload);

private:
  int totalCount_;
  int currentPage_;
  int showSize_;
  std::vector<Trade> tradeList_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBESIGNATURETRADELISTRESULT_H_