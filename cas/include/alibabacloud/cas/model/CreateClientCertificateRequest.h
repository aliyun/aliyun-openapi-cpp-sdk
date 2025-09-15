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

#ifndef ALIBABACLOUD_CAS_MODEL_CREATECLIENTCERTIFICATEREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_CREATECLIENTCERTIFICATEREQUEST_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT CreateClientCertificateRequest : public RpcServiceRequest {
public:
	CreateClientCertificateRequest();
	~CreateClientCertificateRequest();
	std::string getCountry() const;
	void setCountry(const std::string &country);
	int getMonths() const;
	void setMonths(int months);
	long getEnableCrl() const;
	void setEnableCrl(long enableCrl);
	long getAfterTime() const;
	void setAfterTime(long afterTime);
	std::string getLocality() const;
	void setLocality(const std::string &locality);
	int getImmediately() const;
	void setImmediately(int immediately);
	int getYears() const;
	void setYears(int years);
	std::string getCommonName() const;
	void setCommonName(const std::string &commonName);
	std::string getOrganization() const;
	void setOrganization(const std::string &organization);
	int getDays() const;
	void setDays(int days);
	long getBeforeTime() const;
	void setBeforeTime(long beforeTime);
	std::string getState() const;
	void setState(const std::string &state);
	std::string getParentIdentifier() const;
	void setParentIdentifier(const std::string &parentIdentifier);
	std::string getOrganizationUnit() const;
	void setOrganizationUnit(const std::string &organizationUnit);
	std::string getAlgorithm() const;
	void setAlgorithm(const std::string &algorithm);
	int getSanType() const;
	void setSanType(int sanType);
	std::string getSanValue() const;
	void setSanValue(const std::string &sanValue);

private:
	std::string country_;
	int months_;
	long enableCrl_;
	long afterTime_;
	std::string locality_;
	int immediately_;
	int years_;
	std::string commonName_;
	std::string organization_;
	int days_;
	long beforeTime_;
	std::string state_;
	std::string parentIdentifier_;
	std::string organizationUnit_;
	std::string algorithm_;
	int sanType_;
	std::string sanValue_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_CREATECLIENTCERTIFICATEREQUEST_H_
