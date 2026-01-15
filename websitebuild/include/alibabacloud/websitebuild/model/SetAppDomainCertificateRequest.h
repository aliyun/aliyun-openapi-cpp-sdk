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

#ifndef ALIBABACLOUD_WEBSITEBUILD_MODEL_SETAPPDOMAINCERTIFICATEREQUEST_H_
#define ALIBABACLOUD_WEBSITEBUILD_MODEL_SETAPPDOMAINCERTIFICATEREQUEST_H_

#include <alibabacloud/websitebuild/WebsiteBuildExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace WebsiteBuild {
namespace Model {
class ALIBABACLOUD_WEBSITEBUILD_EXPORT SetAppDomainCertificateRequest : public RpcServiceRequest {
public:
	SetAppDomainCertificateRequest();
	~SetAppDomainCertificateRequest();
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getPublicKey() const;
	void setPublicKey(const std::string &publicKey);
	std::string getCertificateType() const;
	void setCertificateType(const std::string &certificateType);
	std::string getPrivateKey() const;
	void setPrivateKey(const std::string &privateKey);
	std::string getBizId() const;
	void setBizId(const std::string &bizId);
	std::string getCertificateName() const;
	void setCertificateName(const std::string &certificateName);

private:
	std::string domainName_;
	std::string publicKey_;
	std::string certificateType_;
	std::string privateKey_;
	std::string bizId_;
	std::string certificateName_;
};
} // namespace Model
} // namespace WebsiteBuild
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_WEBSITEBUILD_MODEL_SETAPPDOMAINCERTIFICATEREQUEST_H_
