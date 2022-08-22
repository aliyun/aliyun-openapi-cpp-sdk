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

#ifndef ALIBABACLOUD_DBFS_MODEL_CREATEDBFSREQUEST_H_
#define ALIBABACLOUD_DBFS_MODEL_CREATEDBFSREQUEST_H_

#include <alibabacloud/dbfs/DBFSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace DBFS {
namespace Model {
class ALIBABACLOUD_DBFS_EXPORT CreateDbfsRequest : public RpcServiceRequest {
public:
	CreateDbfsRequest();
	~CreateDbfsRequest();
	int getSizeG() const;
	void setSizeG(int sizeG);
	std::string getSnapshotId() const;
	void setSnapshotId(const std::string &snapshotId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getUsedScene() const;
	void setUsedScene(const std::string &usedScene);
	std::string getFsName() const;
	void setFsName(const std::string &fsName);
	int getRaidStripeUnitNumber() const;
	void setRaidStripeUnitNumber(int raidStripeUnitNumber);
	bool getEncryption() const;
	void setEncryption(bool encryption);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getAdvancedFeatures() const;
	void setAdvancedFeatures(const std::string &advancedFeatures);
	std::string getPerformanceLevel() const;
	void setPerformanceLevel(const std::string &performanceLevel);
	bool getEnableRaid() const;
	void setEnableRaid(bool enableRaid);
	bool getDeleteSnapshot() const;
	void setDeleteSnapshot(bool deleteSnapshot);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	std::string getKMSKeyId() const;
	void setKMSKeyId(const std::string &kMSKeyId);

private:
	int sizeG_;
	std::string snapshotId_;
	std::string clientToken_;
	std::string usedScene_;
	std::string fsName_;
	int raidStripeUnitNumber_;
	bool encryption_;
	std::string regionId_;
	std::string instanceType_;
	std::string advancedFeatures_;
	std::string performanceLevel_;
	bool enableRaid_;
	bool deleteSnapshot_;
	std::string zoneId_;
	std::string category_;
	std::string kMSKeyId_;
};
} // namespace Model
} // namespace DBFS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DBFS_MODEL_CREATEDBFSREQUEST_H_
