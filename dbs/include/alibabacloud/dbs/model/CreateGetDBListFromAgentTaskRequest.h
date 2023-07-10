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

#ifndef ALIBABACLOUD_DBS_MODEL_CREATEGETDBLISTFROMAGENTTASKREQUEST_H_
#define ALIBABACLOUD_DBS_MODEL_CREATEGETDBLISTFROMAGENTTASKREQUEST_H_

#include <alibabacloud/dbs/DbsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dbs {
namespace Model {
class ALIBABACLOUD_DBS_EXPORT CreateGetDBListFromAgentTaskRequest : public RpcServiceRequest {
public:
	CreateGetDBListFromAgentTaskRequest();
	~CreateGetDBListFromAgentTaskRequest();
	std::string getSourceEndpointRegion() const;
	void setSourceEndpointRegion(const std::string &sourceEndpointRegion);
	long getBackupGatewayId() const;
	void setBackupGatewayId(long backupGatewayId);
	std::string getDatabaseType() const;
	void setDatabaseType(const std::string &databaseType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getSourceEndpointIP() const;
	void setSourceEndpointIP(const std::string &sourceEndpointIP);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	int getSourceEndpointPort() const;
	void setSourceEndpointPort(int sourceEndpointPort);

private:
	std::string sourceEndpointRegion_;
	long backupGatewayId_;
	std::string databaseType_;
	std::string clientToken_;
	std::string sourceEndpointIP_;
	std::string ownerId_;
	int sourceEndpointPort_;
};
} // namespace Model
} // namespace Dbs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DBS_MODEL_CREATEGETDBLISTFROMAGENTTASKREQUEST_H_
