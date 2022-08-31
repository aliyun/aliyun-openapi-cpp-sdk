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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYADINFOREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYADINFOREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyADInfoRequest : public RpcServiceRequest {
public:
	ModifyADInfoRequest();
	~ModifyADInfoRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getADAccountName() const;
	void setADAccountName(const std::string &aDAccountName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getADDNS() const;
	void setADDNS(const std::string &aDDNS);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getADPassword() const;
	void setADPassword(const std::string &aDPassword);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getADServerIpAddress() const;
	void setADServerIpAddress(const std::string &aDServerIpAddress);

private:
	long resourceOwnerId_;
	std::string aDAccountName_;
	std::string clientToken_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string aDDNS_;
	std::string resourceOwnerAccount_;
	std::string aDPassword_;
	long ownerId_;
	std::string aDServerIpAddress_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYADINFOREQUEST_H_
