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

#ifndef ALIBABACLOUD_POLARDB_MODEL_MODIFYENCRYPTIONDBSECRETREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_MODIFYENCRYPTIONDBSECRETREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT ModifyEncryptionDBSecretRequest : public RpcServiceRequest {
public:
	ModifyEncryptionDBSecretRequest();
	~ModifyEncryptionDBSecretRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEncryptionKey() const;
	void setEncryptionKey(const std::string &encryptionKey);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getEncryptionDBStatus() const;
	void setEncryptionDBStatus(const std::string &encryptionDBStatus);
	std::string getRoleArn() const;
	void setRoleArn(const std::string &roleArn);

private:
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	std::string encryptionKey_;
	long ownerId_;
	std::string encryptionDBStatus_;
	std::string roleArn_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_MODIFYENCRYPTIONDBSECRETREQUEST_H_
