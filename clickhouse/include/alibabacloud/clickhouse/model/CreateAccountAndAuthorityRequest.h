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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_CREATEACCOUNTANDAUTHORITYREQUEST_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_CREATEACCOUNTANDAUTHORITYREQUEST_H_

#include <alibabacloud/clickhouse/ClickhouseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Clickhouse {
namespace Model {
class ALIBABACLOUD_CLICKHOUSE_EXPORT CreateAccountAndAuthorityRequest : public RpcServiceRequest {
public:
	CreateAccountAndAuthorityRequest();
	~CreateAccountAndAuthorityRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getTotalDictionaries() const;
	void setTotalDictionaries(const std::string &totalDictionaries);
	std::string getAccountDescription() const;
	void setAccountDescription(const std::string &accountDescription);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getAccountName() const;
	void setAccountName(const std::string &accountName);
	std::string getDmlAuthority() const;
	void setDmlAuthority(const std::string &dmlAuthority);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getAllowDatabases() const;
	void setAllowDatabases(const std::string &allowDatabases);
	std::string getAllowDictionaries() const;
	void setAllowDictionaries(const std::string &allowDictionaries);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAccountPassword() const;
	void setAccountPassword(const std::string &accountPassword);
	bool getDdlAuthority() const;
	void setDdlAuthority(bool ddlAuthority);
	std::string getTotalDatabases() const;
	void setTotalDatabases(const std::string &totalDatabases);

private:
	long resourceOwnerId_;
	std::string totalDictionaries_;
	std::string accountDescription_;
	std::string accessKeyId_;
	std::string accountName_;
	std::string dmlAuthority_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	std::string allowDatabases_;
	std::string allowDictionaries_;
	long ownerId_;
	std::string accountPassword_;
	bool ddlAuthority_;
	std::string totalDatabases_;
};
} // namespace Model
} // namespace Clickhouse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_CREATEACCOUNTANDAUTHORITYREQUEST_H_
