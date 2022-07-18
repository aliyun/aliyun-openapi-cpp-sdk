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

#ifndef ALIBABACLOUD_NAS_MODEL_MODIFYSMBACLREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_MODIFYSMBACLREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT ModifySmbAclRequest : public RpcServiceRequest {
public:
	ModifySmbAclRequest();
	~ModifySmbAclRequest();
	bool getEncryptData() const;
	void setEncryptData(bool encryptData);
	std::string getKeytab() const;
	void setKeytab(const std::string &keytab);
	std::string getSuperAdminSid() const;
	void setSuperAdminSid(const std::string &superAdminSid);
	std::string getKeytabMd5() const;
	void setKeytabMd5(const std::string &keytabMd5);
	bool getRejectUnencryptedAccess() const;
	void setRejectUnencryptedAccess(bool rejectUnencryptedAccess);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	std::string getAuthCenter() const;
	void setAuthCenter(const std::string &authCenter);
	std::string getHomeDirPath() const;
	void setHomeDirPath(const std::string &homeDirPath);
	bool getEnableAnonymousAccess() const;
	void setEnableAnonymousAccess(bool enableAnonymousAccess);
	std::string getAuthMethod() const;
	void setAuthMethod(const std::string &authMethod);

private:
	bool encryptData_;
	std::string keytab_;
	std::string superAdminSid_;
	std::string keytabMd5_;
	bool rejectUnencryptedAccess_;
	std::string fileSystemId_;
	std::string authCenter_;
	std::string homeDirPath_;
	bool enableAnonymousAccess_;
	std::string authMethod_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_MODIFYSMBACLREQUEST_H_
