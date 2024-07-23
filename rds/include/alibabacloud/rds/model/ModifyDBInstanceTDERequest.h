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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCETDEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCETDEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyDBInstanceTDERequest : public RpcServiceRequest {
public:
	ModifyDBInstanceTDERequest();
	~ModifyDBInstanceTDERequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCertificate() const;
	void setCertificate(const std::string &certificate);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getPrivateKey() const;
	void setPrivateKey(const std::string &privateKey);
	std::string getPassWord() const;
	void setPassWord(const std::string &passWord);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	bool getIsRotate() const;
	void setIsRotate(bool isRotate);
	std::string getEncryptionKey() const;
	void setEncryptionKey(const std::string &encryptionKey);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBName() const;
	void setDBName(const std::string &dBName);
	std::string getRoleArn() const;
	void setRoleArn(const std::string &roleArn);
	std::string getTDEStatus() const;
	void setTDEStatus(const std::string &tDEStatus);

private:
	long resourceOwnerId_;
	std::string certificate_;
	std::string accessKeyId_;
	std::string privateKey_;
	std::string passWord_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	bool isRotate_;
	std::string encryptionKey_;
	long ownerId_;
	std::string dBName_;
	std::string roleArn_;
	std::string tDEStatus_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCETDEREQUEST_H_
