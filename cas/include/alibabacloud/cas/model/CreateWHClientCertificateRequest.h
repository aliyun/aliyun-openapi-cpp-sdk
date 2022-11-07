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

#ifndef ALIBABACLOUD_CAS_MODEL_CREATEWHCLIENTCERTIFICATEREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_CREATEWHCLIENTCERTIFICATEREQUEST_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT CreateWHClientCertificateRequest : public RpcServiceRequest {
public:
	CreateWHClientCertificateRequest();
	~CreateWHClientCertificateRequest();
	std::string getCountry() const;
	void setCountry(const std::string &country);
	std::string getCsr() const;
	void setCsr(const std::string &csr);
	long getImmediately() const;
	void setImmediately(long immediately);
	long getYears() const;
	void setYears(long years);
	std::string getCommonName() const;
	void setCommonName(const std::string &commonName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getSanValue() const;
	void setSanValue(const std::string &sanValue);
	std::string getState() const;
	void setState(const std::string &state);
	std::string getAlgorithm() const;
	void setAlgorithm(const std::string &algorithm);
	long getMonths() const;
	void setMonths(long months);
	long getAfterTime() const;
	void setAfterTime(long afterTime);
	std::string getLocality() const;
	void setLocality(const std::string &locality);
	long getSanType() const;
	void setSanType(long sanType);
	std::string getOrganization() const;
	void setOrganization(const std::string &organization);
	long getDays() const;
	void setDays(long days);
	long getBeforeTime() const;
	void setBeforeTime(long beforeTime);
	std::string getParentIdentifier() const;
	void setParentIdentifier(const std::string &parentIdentifier);
	std::string getOrganizationUnit() const;
	void setOrganizationUnit(const std::string &organizationUnit);

private:
	std::string country_;
	std::string csr_;
	long immediately_;
	long years_;
	std::string commonName_;
	std::string sourceIp_;
	std::string sanValue_;
	std::string state_;
	std::string algorithm_;
	long months_;
	long afterTime_;
	std::string locality_;
	long sanType_;
	std::string organization_;
	long days_;
	long beforeTime_;
	std::string parentIdentifier_;
	std::string organizationUnit_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_CREATEWHCLIENTCERTIFICATEREQUEST_H_
