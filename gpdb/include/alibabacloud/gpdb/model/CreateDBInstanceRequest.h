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

#ifndef ALIBABACLOUD_GPDB_MODEL_CREATEDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_CREATEDBINSTANCEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/gpdb/GpdbExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT CreateDBInstanceRequest
    : public RpcServiceRequest {

public:
  CreateDBInstanceRequest();
  ~CreateDBInstanceRequest();

  std::string getDBInstanceGroupCount() const;
  void setDBInstanceGroupCount(const std::string &dBInstanceGroupCount);
  std::string getPeriod() const;
  void setPeriod(const std::string &period);
  std::string getClientToken() const;
  void setClientToken(const std::string &clientToken);
  std::string getEngineVersion() const;
  void setEngineVersion(const std::string &engineVersion);
  long getOwnerId() const;
  void setOwnerId(long ownerId);
  std::string getUsedTime() const;
  void setUsedTime(const std::string &usedTime);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  std::string getDBInstanceClass() const;
  void setDBInstanceClass(const std::string &dBInstanceClass);
  std::string getSecurityIPList() const;
  void setSecurityIPList(const std::string &securityIPList);
  std::string getVSwitchId() const;
  void setVSwitchId(const std::string &vSwitchId);
  std::string getPrivateIpAddress() const;
  void setPrivateIpAddress(const std::string &privateIpAddress);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::string getEngine() const;
  void setEngine(const std::string &engine);
  std::string getVPCId() const;
  void setVPCId(const std::string &vPCId);
  std::string getZoneId() const;
  void setZoneId(const std::string &zoneId);
  std::string getDBInstanceDescription() const;
  void setDBInstanceDescription(const std::string &dBInstanceDescription);
  std::string getPayType() const;
  void setPayType(const std::string &payType);
  std::string getInstanceNetworkType() const;
  void setInstanceNetworkType(const std::string &instanceNetworkType);

private:
  std::string dBInstanceGroupCount_;
  std::string period_;
  std::string clientToken_;
  std::string engineVersion_;
  long ownerId_;
  std::string usedTime_;
  std::string accessKeyId_;
  std::string dBInstanceClass_;
  std::string securityIPList_;
  std::string vSwitchId_;
  std::string privateIpAddress_;
  std::string regionId_;
  std::string engine_;
  std::string vPCId_;
  std::string zoneId_;
  std::string dBInstanceDescription_;
  std::string payType_;
  std::string instanceNetworkType_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_CREATEDBINSTANCEREQUEST_H_