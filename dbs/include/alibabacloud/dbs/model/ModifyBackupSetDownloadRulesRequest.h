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

#ifndef ALIBABACLOUD_DBS_MODEL_MODIFYBACKUPSETDOWNLOADRULESREQUEST_H_
#define ALIBABACLOUD_DBS_MODEL_MODIFYBACKUPSETDOWNLOADRULESREQUEST_H_

#include <alibabacloud/dbs/DbsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dbs {
namespace Model {
class ALIBABACLOUD_DBS_EXPORT ModifyBackupSetDownloadRulesRequest : public RpcServiceRequest {
public:
	ModifyBackupSetDownloadRulesRequest();
	~ModifyBackupSetDownloadRulesRequest();
	std::string getFullDataFormat() const;
	void setFullDataFormat(const std::string &fullDataFormat);
	long getBackupGatewayId() const;
	void setBackupGatewayId(long backupGatewayId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getBackupSetDownloadTargetType() const;
	void setBackupSetDownloadTargetType(const std::string &backupSetDownloadTargetType);
	std::string getBackupPlanId() const;
	void setBackupPlanId(const std::string &backupPlanId);
	std::string getBackupSetDownloadTargetTypeLocation() const;
	void setBackupSetDownloadTargetTypeLocation(const std::string &backupSetDownloadTargetTypeLocation);
	std::string getBackupSetDownloadDir() const;
	void setBackupSetDownloadDir(const std::string &backupSetDownloadDir);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	bool getOpenAutoDownload() const;
	void setOpenAutoDownload(bool openAutoDownload);
	std::string getIncrementDataFormat() const;
	void setIncrementDataFormat(const std::string &incrementDataFormat);

private:
	std::string fullDataFormat_;
	long backupGatewayId_;
	std::string clientToken_;
	std::string backupSetDownloadTargetType_;
	std::string backupPlanId_;
	std::string backupSetDownloadTargetTypeLocation_;
	std::string backupSetDownloadDir_;
	std::string ownerId_;
	bool openAutoDownload_;
	std::string incrementDataFormat_;
};
} // namespace Model
} // namespace Dbs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DBS_MODEL_MODIFYBACKUPSETDOWNLOADRULESREQUEST_H_
