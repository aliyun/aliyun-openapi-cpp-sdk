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

#ifndef ALIBABACLOUD_CAS_MODEL_CREATESUBCACERTIFICATEREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_CREATESUBCACERTIFICATEREQUEST_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT CreateSubCACertificateRequest : public RpcServiceRequest {
public:
	CreateSubCACertificateRequest();
	~CreateSubCACertificateRequest();
	std::vector<std::string> getExtendedKeyUsages() const;
	void setExtendedKeyUsages(const std::vector<std::string> &extendedKeyUsages);
	bool getEnableCrl() const;
	void setEnableCrl(bool enableCrl);
	std::string getCountryCode() const;
	void setCountryCode(const std::string &countryCode);
	std::string getLocality() const;
	void setLocality(const std::string &locality);
	int getPathLenConstraint() const;
	void setPathLenConstraint(int pathLenConstraint);
	int getYears() const;
	void setYears(int years);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getCommonName() const;
	void setCommonName(const std::string &commonName);
	std::string getOrganization() const;
	void setOrganization(const std::string &organization);
	int getCrlDay() const;
	void setCrlDay(int crlDay);
	std::string getParentIdentifier() const;
	void setParentIdentifier(const std::string &parentIdentifier);
	std::string getState() const;
	void setState(const std::string &state);
	std::string getOrganizationUnit() const;
	void setOrganizationUnit(const std::string &organizationUnit);
	std::string getAlgorithm() const;
	void setAlgorithm(const std::string &algorithm);

private:
	std::vector<std::string> extendedKeyUsages_;
	bool enableCrl_;
	std::string countryCode_;
	std::string locality_;
	int pathLenConstraint_;
	int years_;
	std::string instanceId_;
	std::string commonName_;
	std::string organization_;
	int crlDay_;
	std::string parentIdentifier_;
	std::string state_;
	std::string organizationUnit_;
	std::string algorithm_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_CREATESUBCACERTIFICATEREQUEST_H_
