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

#ifndef ALIBABACLOUD_DMS_DG_MODEL_RETRYDATABASEREQUEST_H_
#define ALIBABACLOUD_DMS_DG_MODEL_RETRYDATABASEREQUEST_H_

#include <alibabacloud/dms-dg/Dms_dgExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_dg {
namespace Model {
class ALIBABACLOUD_DMS_DG_EXPORT RetryDatabaseRequest : public RpcServiceRequest {
public:
	RetryDatabaseRequest();
	~RetryDatabaseRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getHost() const;
	void setHost(const std::string &host);
	std::string getDbUserName() const;
	void setDbUserName(const std::string &dbUserName);
	std::string getDbDescription() const;
	void setDbDescription(const std::string &dbDescription);
	std::string getGatewayId() const;
	void setGatewayId(const std::string &gatewayId);
	std::string getDbName() const;
	void setDbName(const std::string &dbName);
	int getPort() const;
	void setPort(int port);
	std::string getDbPassword() const;
	void setDbPassword(const std::string &dbPassword);
	std::string getDbType() const;
	void setDbType(const std::string &dbType);

private:
	std::string clientToken_;
	std::string regionId_;
	std::string host_;
	std::string dbUserName_;
	std::string dbDescription_;
	std::string gatewayId_;
	std::string dbName_;
	int port_;
	std::string dbPassword_;
	std::string dbType_;
};
} // namespace Model
} // namespace Dms_dg
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_DG_MODEL_RETRYDATABASEREQUEST_H_
