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

#ifndef ALIBABACLOUD_KMS_MODEL_CREATECERTIFICATEREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_CREATECERTIFICATEREQUEST_H_

#include <alibabacloud/kms/KmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Kms {
namespace Model {
class ALIBABACLOUD_KMS_EXPORT CreateCertificateRequest : public RpcServiceRequest {
public:
	CreateCertificateRequest();
	~CreateCertificateRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getSubject() const;
	void setSubject(const std::string &subject);
	std::string getKeySpec() const;
	void setKeySpec(const std::string &keySpec);
	std::string getProtectionLevel() const;
	void setProtectionLevel(const std::string &protectionLevel);
	bool getExportablePrivateKey() const;
	void setExportablePrivateKey(bool exportablePrivateKey);
	std::map<std::string, std::string> getSubjectAlternativeNames() const;
	void setSubjectAlternativeNames(std::map<std::string, std::string> subjectAlternativeNames);

private:
	std::string clientToken_;
	std::string subject_;
	std::string keySpec_;
	std::string protectionLevel_;
	bool exportablePrivateKey_;
	std::map<std::string, std::string> subjectAlternativeNames_;
};
} // namespace Model
} // namespace Kms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_KMS_MODEL_CREATECERTIFICATEREQUEST_H_
