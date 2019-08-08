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

#ifndef ALIBABACLOUD_EMR_MODEL_CONTEXTQUERYLOGREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CONTEXTQUERYLOGREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT ContextQueryLogRequest
    : public RpcServiceRequest {

public:
  ContextQueryLogRequest();
  ~ContextQueryLogRequest();

  std::string getPackId() const;
  void setPackId(const std::string &packId);
  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  int getTotalOffset() const;
  void setTotalOffset(int totalOffset);
  int getSize() const;
  void setSize(int size);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::string getPackMeta() const;
  void setPackMeta(const std::string &packMeta);
  int getFrom() const;
  void setFrom(int from);
  std::string getClusterId() const;
  void setClusterId(const std::string &clusterId);
  int getTo() const;
  void setTo(int to);
  bool getReverse() const;
  void setReverse(bool reverse);
  std::string getLogStore() const;
  void setLogStore(const std::string &logStore);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  std::string packId_;
  long resourceOwnerId_;
  int totalOffset_;
  int size_;
  std::string regionId_;
  std::string packMeta_;
  int from_;
  std::string clusterId_;
  int to_;
  bool reverse_;
  std::string logStore_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_CONTEXTQUERYLOGREQUEST_H_