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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBECACERTIFICATELISTREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBECACERTIFICATELISTREQUEST_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT DescribeCACertificateListRequest : public RpcServiceRequest {
public:
	DescribeCACertificateListRequest();
	~DescribeCACertificateListRequest();
	std::string getCaStatus() const;
	void setCaStatus(const std::string &caStatus);
	std::string getCertType() const;
	void setCertType(const std::string &certType);
	std::string getValidStatus() const;
	void setValidStatus(const std::string &validStatus);
	std::string getIssuerType() const;
	void setIssuerType(const std::string &issuerType);
	std::string getIdentifier() const;
	void setIdentifier(const std::string &identifier);
	int getShowSize() const;
	void setShowSize(int showSize);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);

private:
	std::string caStatus_;
	std::string certType_;
	std::string validStatus_;
	std::string issuerType_;
	std::string identifier_;
	int showSize_;
	int currentPage_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBECACERTIFICATELISTREQUEST_H_
