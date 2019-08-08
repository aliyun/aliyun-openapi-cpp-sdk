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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBESIGNATURETRADEDETAILRESULT_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBESIGNATURETRADEDETAILRESULT_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/ServiceResult.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT DescribeSignatureTradeDetailResult
    : public ServiceResult {
public:
  DescribeSignatureTradeDetailResult();
  explicit DescribeSignatureTradeDetailResult(const std::string &payload);
  ~DescribeSignatureTradeDetailResult();
  std::string getDocId() const;
  std::string getDocTitle() const;
  int getSignMode() const;
  long getCreateTime() const;
  std::string getTransactionId() const;
  std::string getSignCompany() const;
  std::string getPeopleId() const;
  std::string getPeopleName() const;
  int getSignStatus() const;
  std::string getPeopleEmail() const;
  long getId() const;
  std::string getPeopleMobile() const;
  std::string getPeopleIdentity() const;

protected:
  void parse(const std::string &payload);

private:
  std::string docId_;
  std::string docTitle_;
  int signMode_;
  long createTime_;
  std::string transactionId_;
  std::string signCompany_;
  std::string peopleId_;
  std::string peopleName_;
  int signStatus_;
  std::string peopleEmail_;
  long id_;
  std::string peopleMobile_;
  std::string peopleIdentity_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBESIGNATURETRADEDETAILRESULT_H_