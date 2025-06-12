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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_CHECKCLICKHOUSETORDSREQUEST_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_CHECKCLICKHOUSETORDSREQUEST_H_

#include <alibabacloud/clickhouse/ClickhouseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Clickhouse {
namespace Model {
class ALIBABACLOUD_CLICKHOUSE_EXPORT CheckClickhouseToRDSRequest : public RpcServiceRequest {
public:
	CheckClickhouseToRDSRequest();
	~CheckClickhouseToRDSRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getRdsVpcId() const;
	void setRdsVpcId(const std::string &rdsVpcId);
	std::string getCkPassword() const;
	void setCkPassword(const std::string &ckPassword);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRdsPassword() const;
	void setRdsPassword(const std::string &rdsPassword);
	std::string getCkUserName() const;
	void setCkUserName(const std::string &ckUserName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDbClusterId() const;
	void setDbClusterId(const std::string &dbClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getRdsId() const;
	void setRdsId(const std::string &rdsId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	long getClickhousePort() const;
	void setClickhousePort(long clickhousePort);
	long getRdsPort() const;
	void setRdsPort(long rdsPort);
	std::string getRdsVpcUrl() const;
	void setRdsVpcUrl(const std::string &rdsVpcUrl);
	std::string getRdsUserName() const;
	void setRdsUserName(const std::string &rdsUserName);

private:
	long resourceOwnerId_;
	std::string rdsVpcId_;
	std::string ckPassword_;
	std::string accessKeyId_;
	std::string rdsPassword_;
	std::string ckUserName_;
	std::string resourceOwnerAccount_;
	std::string dbClusterId_;
	std::string ownerAccount_;
	std::string rdsId_;
	long ownerId_;
	long clickhousePort_;
	long rdsPort_;
	std::string rdsVpcUrl_;
	std::string rdsUserName_;
};
} // namespace Model
} // namespace Clickhouse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_CHECKCLICKHOUSETORDSREQUEST_H_
