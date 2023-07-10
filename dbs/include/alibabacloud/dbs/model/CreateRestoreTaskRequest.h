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

#ifndef ALIBABACLOUD_DBS_MODEL_CREATERESTORETASKREQUEST_H_
#define ALIBABACLOUD_DBS_MODEL_CREATERESTORETASKREQUEST_H_

#include <alibabacloud/dbs/DbsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dbs {
namespace Model {
class ALIBABACLOUD_DBS_EXPORT CreateRestoreTaskRequest : public RpcServiceRequest {
public:
	CreateRestoreTaskRequest();
	~CreateRestoreTaskRequest();
	long getBackupGatewayId() const;
	void setBackupGatewayId(long backupGatewayId);
	std::string getCrossRoleName() const;
	void setCrossRoleName(const std::string &crossRoleName);
	std::string getDestinationEndpointUserName() const;
	void setDestinationEndpointUserName(const std::string &destinationEndpointUserName);
	std::string getRestoreTaskName() const;
	void setRestoreTaskName(const std::string &restoreTaskName);
	std::string getDestinationEndpointOracleSID() const;
	void setDestinationEndpointOracleSID(const std::string &destinationEndpointOracleSID);
	int getDestinationEndpointPort() const;
	void setDestinationEndpointPort(int destinationEndpointPort);
	std::string getBackupSetId() const;
	void setBackupSetId(const std::string &backupSetId);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getRestoreDir() const;
	void setRestoreDir(const std::string &restoreDir);
	std::string getDestinationEndpointIP() const;
	void setDestinationEndpointIP(const std::string &destinationEndpointIP);
	std::string getDuplicateConflict() const;
	void setDuplicateConflict(const std::string &duplicateConflict);
	std::string getDestinationEndpointInstanceType() const;
	void setDestinationEndpointInstanceType(const std::string &destinationEndpointInstanceType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getBackupPlanId() const;
	void setBackupPlanId(const std::string &backupPlanId);
	std::string getDestinationEndpointRegion() const;
	void setDestinationEndpointRegion(const std::string &destinationEndpointRegion);
	std::string getRestoreObjects() const;
	void setRestoreObjects(const std::string &restoreObjects);
	std::string getRestoreHome() const;
	void setRestoreHome(const std::string &restoreHome);
	long getRestoreTime() const;
	void setRestoreTime(long restoreTime);
	std::string getCrossAliyunId() const;
	void setCrossAliyunId(const std::string &crossAliyunId);
	std::string getDestinationEndpointInstanceID() const;
	void setDestinationEndpointInstanceID(const std::string &destinationEndpointInstanceID);
	std::string getDestinationEndpointDatabaseName() const;
	void setDestinationEndpointDatabaseName(const std::string &destinationEndpointDatabaseName);
	std::string getDestinationEndpointPassword() const;
	void setDestinationEndpointPassword(const std::string &destinationEndpointPassword);

private:
	long backupGatewayId_;
	std::string crossRoleName_;
	std::string destinationEndpointUserName_;
	std::string restoreTaskName_;
	std::string destinationEndpointOracleSID_;
	int destinationEndpointPort_;
	std::string backupSetId_;
	std::string ownerId_;
	std::string restoreDir_;
	std::string destinationEndpointIP_;
	std::string duplicateConflict_;
	std::string destinationEndpointInstanceType_;
	std::string clientToken_;
	std::string backupPlanId_;
	std::string destinationEndpointRegion_;
	std::string restoreObjects_;
	std::string restoreHome_;
	long restoreTime_;
	std::string crossAliyunId_;
	std::string destinationEndpointInstanceID_;
	std::string destinationEndpointDatabaseName_;
	std::string destinationEndpointPassword_;
};
} // namespace Model
} // namespace Dbs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DBS_MODEL_CREATERESTORETASKREQUEST_H_
