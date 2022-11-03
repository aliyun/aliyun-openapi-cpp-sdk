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

#ifndef ALIBABACLOUD_CAS_MODEL_CREATECERTIFICATEREQUESTREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_CREATECERTIFICATEREQUESTREQUEST_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT CreateCertificateRequestRequest : public RpcServiceRequest {
public:
	CreateCertificateRequestRequest();
	~CreateCertificateRequestRequest();
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getUsername() const;
	void setUsername(const std::string &username);
	std::string getPhone() const;
	void setPhone(const std::string &phone);
	std::string getEmail() const;
	void setEmail(const std::string &email);
	std::string getDomain() const;
	void setDomain(const std::string &domain);
	std::string getValidateType() const;
	void setValidateType(const std::string &validateType);

private:
	std::string sourceIp_;
	std::string productCode_;
	std::string username_;
	std::string phone_;
	std::string email_;
	std::string domain_;
	std::string validateType_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_CREATECERTIFICATEREQUESTREQUEST_H_
