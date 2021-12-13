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

#ifndef ALIBABACLOUD_GPDB_MODEL_UPGRADEDBVERSIONREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_UPGRADEDBVERSIONREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT UpgradeDBVersionRequest : public RpcServiceRequest {
public:
	UpgradeDBVersionRequest();
	~UpgradeDBVersionRequest();
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSwitchTimeMode() const;
	void setSwitchTimeMode(const std::string &switchTimeMode);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getSwitchTime() const;
	void setSwitchTime(const std::string &switchTime);
	std::string getMajorVersion() const;
	void setMajorVersion(const std::string &majorVersion);
	std::string getMinorVersion() const;
	void setMinorVersion(const std::string &minorVersion);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string accessKeyId_;
	std::string switchTimeMode_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string switchTime_;
	std::string majorVersion_;
	std::string minorVersion_;
	long ownerId_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_UPGRADEDBVERSIONREQUEST_H_
