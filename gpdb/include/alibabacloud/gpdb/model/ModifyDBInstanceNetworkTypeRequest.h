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

#ifndef ALIBABACLOUD_GPDB_MODEL_MODIFYDBINSTANCENETWORKTYPEREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_MODIFYDBINSTANCENETWORKTYPEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/gpdb/GpdbExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT ModifyDBInstanceNetworkTypeRequest
    : public RpcServiceRequest {

public:
  ModifyDBInstanceNetworkTypeRequest();
  ~ModifyDBInstanceNetworkTypeRequest();

  std::string getVSwitchId() const;
  void setVSwitchId(const std::string &vSwitchId);
  std::string getPrivateIpAddress() const;
  void setPrivateIpAddress(const std::string &privateIpAddress);
  std::string getVPCId() const;
  void setVPCId(const std::string &vPCId);
  std::string getDBInstanceId() const;
  void setDBInstanceId(const std::string &dBInstanceId);
  std::string getInstanceNetworkType() const;
  void setInstanceNetworkType(const std::string &instanceNetworkType);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  std::string vSwitchId_;
  std::string privateIpAddress_;
  std::string vPCId_;
  std::string dBInstanceId_;
  std::string instanceNetworkType_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_MODIFYDBINSTANCENETWORKTYPEREQUEST_H_