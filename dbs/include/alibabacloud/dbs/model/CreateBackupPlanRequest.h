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

#ifndef ALIBABACLOUD_DBS_MODEL_CREATEBACKUPPLANREQUEST_H_
#define ALIBABACLOUD_DBS_MODEL_CREATEBACKUPPLANREQUEST_H_

#include <alibabacloud/dbs/DbsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dbs {
namespace Model {
class ALIBABACLOUD_DBS_EXPORT CreateBackupPlanRequest : public RpcServiceRequest {
public:
	CreateBackupPlanRequest();
	~CreateBackupPlanRequest();
	std::string getDatabaseType() const;
	void setDatabaseType(const std::string &databaseType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getInstanceClass() const;
	void setInstanceClass(const std::string &instanceClass);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getDatabaseRegion() const;
	void setDatabaseRegion(const std::string &databaseRegion);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getFromApp() const;
	void setFromApp(const std::string &fromApp);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	int getUsedTime() const;
	void setUsedTime(int usedTime);
	std::string getBackupMethod() const;
	void setBackupMethod(const std::string &backupMethod);
	std::string getStorageRegion() const;
	void setStorageRegion(const std::string &storageRegion);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::string databaseType_;
	std::string clientToken_;
	std::string instanceClass_;
	std::string storageType_;
	std::string databaseRegion_;
	std::string resourceGroupId_;
	std::string instanceType_;
	std::string period_;
	std::string fromApp_;
	std::string ownerId_;
	int usedTime_;
	std::string backupMethod_;
	std::string storageRegion_;
	std::string region_;
	std::string payType_;
};
} // namespace Model
} // namespace Dbs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DBS_MODEL_CREATEBACKUPPLANREQUEST_H_
