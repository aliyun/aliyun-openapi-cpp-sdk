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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEFLOWTOTALCOUNTREQUEST_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEFLOWTOTALCOUNTREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/yundun-ds/Yundun_dsExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Yundun_ds {
namespace Model {
class ALIBABACLOUD_YUNDUN_DS_EXPORT DescribeFlowTotalCountRequest
    : public RpcServiceRequest {

public:
  DescribeFlowTotalCountRequest();
  ~DescribeFlowTotalCountRequest();

  std::string getProductCode() const;
  void setProductCode(const std::string &productCode);
  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  int getFeatureType() const;
  void setFeatureType(int featureType);
  long getDepartId() const;
  void setDepartId(long departId);
  std::string getLang() const;
  void setLang(const std::string &lang);

private:
  std::string productCode_;
  std::string sourceIp_;
  int featureType_;
  long departId_;
  std::string lang_;
};
} // namespace Model
} // namespace Yundun_ds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEFLOWTOTALCOUNTREQUEST_H_