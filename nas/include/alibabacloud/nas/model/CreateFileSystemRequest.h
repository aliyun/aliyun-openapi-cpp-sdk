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

#ifndef ALIBABACLOUD_NAS_MODEL_CREATEFILESYSTEMREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CREATEFILESYSTEMREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT CreateFileSystemRequest : public RpcServiceRequest {
public:
	CreateFileSystemRequest();
	~CreateFileSystemRequest();
	std::string getSnapshotId() const;
	void setSnapshotId(const std::string &snapshotId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getFileSystemType() const;
	void setFileSystemType(const std::string &fileSystemType);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	long getCapacity() const;
	void setCapacity(long capacity);
	int getEncryptType() const;
	void setEncryptType(int encryptType);
	int getDuration() const;
	void setDuration(int duration);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	long getBandwidth() const;
	void setBandwidth(long bandwidth);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getProtocolType() const;
	void setProtocolType(const std::string &protocolType);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	std::string getKmsKeyId() const;
	void setKmsKeyId(const std::string &kmsKeyId);

private:
	std::string snapshotId_;
	std::string clientToken_;
	std::string description_;
	std::string fileSystemType_;
	std::string storageType_;
	long capacity_;
	int encryptType_;
	int duration_;
	std::string resourceGroupId_;
	bool dryRun_;
	long bandwidth_;
	std::string vSwitchId_;
	std::string vpcId_;
	std::string zoneId_;
	std::string protocolType_;
	std::string chargeType_;
	std::string kmsKeyId_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_CREATEFILESYSTEMREQUEST_H_
