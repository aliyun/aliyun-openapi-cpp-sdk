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

#ifndef ALIBABACLOUD_CAS_MODEL_CREATEEXTERNALCACERTIFICATEREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_CREATEEXTERNALCACERTIFICATEREQUEST_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT CreateExternalCACertificateRequest : public RpcServiceRequest {
public:
	struct ApiPassthrough {
		struct Subject {
			std::string country;
			std::string state;
			std::string locality;
			std::string organization;
			std::string organizationUnit;
			std::string commonName;
		};
		Subject subject;
		struct Extensions {
			int pathLenConstraint;
			std::string string;
			std::vector<std::string> extendedKeyUsages;
		};
		Extensions extensions;
	};
	CreateExternalCACertificateRequest();
	~CreateExternalCACertificateRequest();
	std::string getCsr() const;
	void setCsr(const std::string &csr);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getAutoTesting() const;
	void setAutoTesting(const std::string &autoTesting);
	std::string getValidity() const;
	void setValidity(const std::string &validity);
	ApiPassthrough getApiPassthrough() const;
	void setApiPassthrough(const ApiPassthrough &apiPassthrough);

private:
	std::string csr_;
	std::string instanceId_;
	std::string autoTesting_;
	std::string validity_;
	ApiPassthrough apiPassthrough_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_CREATEEXTERNALCACERTIFICATEREQUEST_H_
