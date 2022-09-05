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

#ifndef ALIBABACLOUD_CDN_MODEL_CREATECDNCERTIFICATESIGNINGREQUESTREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_CREATECDNCERTIFICATESIGNINGREQUESTREQUEST_H_

#include <alibabacloud/cdn/CdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cdn {
namespace Model {
class ALIBABACLOUD_CDN_EXPORT CreateCdnCertificateSigningRequestRequest : public RpcServiceRequest {
public:
	CreateCdnCertificateSigningRequestRequest();
	~CreateCdnCertificateSigningRequestRequest();
	std::string getCountry() const;
	void setCountry(const std::string &country);
	std::string getCity() const;
	void setCity(const std::string &city);
	std::string getCommonName() const;
	void setCommonName(const std::string &commonName);
	std::string getState() const;
	void setState(const std::string &state);
	std::string getEmail() const;
	void setEmail(const std::string &email);
	std::string getSANs() const;
	void setSANs(const std::string &sANs);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getOrganization() const;
	void setOrganization(const std::string &organization);
	std::string getOrganizationUnit() const;
	void setOrganizationUnit(const std::string &organizationUnit);

private:
	std::string country_;
	std::string city_;
	std::string commonName_;
	std::string state_;
	std::string email_;
	std::string sANs_;
	long ownerId_;
	std::string organization_;
	std::string organizationUnit_;
};
} // namespace Model
} // namespace Cdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CDN_MODEL_CREATECDNCERTIFICATESIGNINGREQUESTREQUEST_H_
