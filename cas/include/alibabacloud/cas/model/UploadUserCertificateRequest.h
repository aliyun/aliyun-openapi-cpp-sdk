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

#ifndef ALIBABACLOUD_CAS_MODEL_UPLOADUSERCERTIFICATEREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_UPLOADUSERCERTIFICATEREQUEST_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT UploadUserCertificateRequest : public RpcServiceRequest {
public:
	UploadUserCertificateRequest();
	~UploadUserCertificateRequest();
	std::string getEncryptCert() const;
	void setEncryptCert(const std::string &encryptCert);
	std::string getCert() const;
	void setCert(const std::string &cert);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getKey() const;
	void setKey(const std::string &key);
	std::string getEncryptPrivateKey() const;
	void setEncryptPrivateKey(const std::string &encryptPrivateKey);
	std::string getSignPrivateKey() const;
	void setSignPrivateKey(const std::string &signPrivateKey);
	std::string getSignCert() const;
	void setSignCert(const std::string &signCert);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string encryptCert_;
	std::string cert_;
	std::string resourceGroupId_;
	std::string sourceIp_;
	std::string key_;
	std::string encryptPrivateKey_;
	std::string signPrivateKey_;
	std::string signCert_;
	std::string name_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_UPLOADUSERCERTIFICATEREQUEST_H_
