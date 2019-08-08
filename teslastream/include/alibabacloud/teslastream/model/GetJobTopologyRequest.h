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

#ifndef ALIBABACLOUD_TESLASTREAM_MODEL_GETJOBTOPOLOGYREQUEST_H_
#define ALIBABACLOUD_TESLASTREAM_MODEL_GETJOBTOPOLOGYREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/teslastream/TeslaStreamExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace TeslaStream {
namespace Model {
class ALIBABACLOUD_TESLASTREAM_EXPORT GetJobTopologyRequest
    : public RpcServiceRequest {

public:
  GetJobTopologyRequest();
  ~GetJobTopologyRequest();

  std::string getJobName() const;
  void setJobName(const std::string &jobName);

private:
  std::string jobName_;
};
} // namespace Model
} // namespace TeslaStream
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_TESLASTREAM_MODEL_GETJOBTOPOLOGYREQUEST_H_