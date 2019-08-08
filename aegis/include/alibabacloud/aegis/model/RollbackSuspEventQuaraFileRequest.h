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

#ifndef ALIBABACLOUD_AEGIS_MODEL_ROLLBACKSUSPEVENTQUARAFILEREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_ROLLBACKSUSPEVENTQUARAFILEREQUEST_H_

#include <alibabacloud/aegis/AegisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Aegis {
namespace Model {
class ALIBABACLOUD_AEGIS_EXPORT RollbackSuspEventQuaraFileRequest
    : public RpcServiceRequest {

public:
  RollbackSuspEventQuaraFileRequest();
  ~RollbackSuspEventQuaraFileRequest();

  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  std::string getFrom() const;
  void setFrom(const std::string &from);
  int getQuaraFileId() const;
  void setQuaraFileId(int quaraFileId);

private:
  std::string sourceIp_;
  std::string from_;
  int quaraFileId_;
};
} // namespace Model
} // namespace Aegis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AEGIS_MODEL_ROLLBACKSUSPEVENTQUARAFILEREQUEST_H_