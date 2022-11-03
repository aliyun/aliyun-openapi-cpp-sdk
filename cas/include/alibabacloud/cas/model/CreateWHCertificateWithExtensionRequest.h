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

#ifndef ALIBABACLOUD_CAS_MODEL_CREATEWHCERTIFICATEWITHEXTENSIONREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_CREATEWHCERTIFICATEWITHEXTENSIONREQUEST_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT CreateWHCertificateWithExtensionRequest : public RpcServiceRequest {
public:
	CreateWHCertificateWithExtensionRequest();
	~CreateWHCertificateWithExtensionRequest();
	bool getAppendCrl() const;
	void setAppendCrl(bool appendCrl);
	std::string getCountryCode() const;
	void setCountryCode(const std::string &countryCode);
	std::string getCommonName() const;
	void setCommonName(const std::string &commonName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getCertType() const;
	void setCertType(const std::string &certType);
	std::string getState() const;
	void setState(const std::string &state);
	std::string getCsrPemString() const;
	void setCsrPemString(const std::string &csrPemString);
	std::string getAlgorithmKeySize() const;
	void setAlgorithmKeySize(const std::string &algorithmKeySize);
	long getAfterTime() const;
	void setAfterTime(long afterTime);
	std::string getSans() const;
	void setSans(const std::string &sans);
	std::string getLocality() const;
	void setLocality(const std::string &locality);
	bool getBasicConstraintsCritical() const;
	void setBasicConstraintsCritical(bool basicConstraintsCritical);
	std::string getAliasName() const;
	void setAliasName(const std::string &aliasName);
	std::string getOrganization() const;
	void setOrganization(const std::string &organization);
	long getBeforeTime() const;
	void setBeforeTime(long beforeTime);
	std::string getParentIdentifier() const;
	void setParentIdentifier(const std::string &parentIdentifier);
	std::string getOrganizationUnit() const;
	void setOrganizationUnit(const std::string &organizationUnit);

private:
	bool appendCrl_;
	std::string countryCode_;
	std::string commonName_;
	std::string sourceIp_;
	std::string certType_;
	std::string state_;
	std::string csrPemString_;
	std::string algorithmKeySize_;
	long afterTime_;
	std::string sans_;
	std::string locality_;
	bool basicConstraintsCritical_;
	std::string aliasName_;
	std::string organization_;
	long beforeTime_;
	std::string parentIdentifier_;
	std::string organizationUnit_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_CREATEWHCERTIFICATEWITHEXTENSIONREQUEST_H_
