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

#ifndef ALIBABACLOUD_HSM_MODEL_DESCRIBEREGIONSREQUEST_H_
#define ALIBABACLOUD_HSM_MODEL_DESCRIBEREGIONSREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hsm/HsmExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Hsm {
namespace Model {
class ALIBABACLOUD_HSM_EXPORT DescribeRegionsRequest
    : public RpcServiceRequest {

public:
  DescribeRegionsRequest();
  ~DescribeRegionsRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);

private:
  long resourceOwnerId_;
  std::string sourceIp_;
};
} // namespace Model
} // namespace Hsm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_HSM_MODEL_DESCRIBEREGIONSREQUEST_H_