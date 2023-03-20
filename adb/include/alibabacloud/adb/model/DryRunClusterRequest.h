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

#ifndef ALIBABACLOUD_ADB_MODEL_DRYRUNCLUSTERREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_DRYRUNCLUSTERREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT DryRunClusterRequest : public RpcServiceRequest {
public:
	DryRunClusterRequest();
	~DryRunClusterRequest();
	std::string getDBClusterDescription() const;
	void setDBClusterDescription(const std::string &dBClusterDescription);
	bool getEnableDefaultResourcePool() const;
	void setEnableDefaultResourcePool(bool enableDefaultResourcePool);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getStorageResource() const;
	void setStorageResource(const std::string &storageResource);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBClusterNetworkType() const;
	void setDBClusterNetworkType(const std::string &dBClusterNetworkType);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getDBClusterVersion() const;
	void setDBClusterVersion(const std::string &dBClusterVersion);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getComputeResource() const;
	void setComputeResource(const std::string &computeResource);
	std::string getPayType() const;
	void setPayType(const std::string &payType);
	std::string getOperation() const;
	void setOperation(const std::string &operation);

private:
	std::string dBClusterDescription_;
	bool enableDefaultResourcePool_;
	std::string accessKeyId_;
	std::string storageResource_;
	std::string regionId_;
	std::string dBClusterNetworkType_;
	std::string period_;
	std::string dBClusterId_;
	std::string dBClusterVersion_;
	std::string usedTime_;
	std::string vSwitchId_;
	std::string vPCId_;
	std::string zoneId_;
	std::string computeResource_;
	std::string payType_;
	std::string operation_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_DRYRUNCLUSTERREQUEST_H_
