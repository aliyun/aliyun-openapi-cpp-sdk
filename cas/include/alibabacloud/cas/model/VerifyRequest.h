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

#ifndef ALIBABACLOUD_CAS_MODEL_VERIFYREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_VERIFYREQUEST_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT VerifyRequest : public RpcServiceRequest {
public:
	VerifyRequest();
	~VerifyRequest();
	std::string getMessageType() const;
	void setMessageType(const std::string &messageType);
	std::string getSigningAlgorithm() const;
	void setSigningAlgorithm(const std::string &signingAlgorithm);
	std::string getMessage() const;
	void setMessage(const std::string &message);
	std::string getSignatureValue() const;
	void setSignatureValue(const std::string &signatureValue);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getCertIdentifier() const;
	void setCertIdentifier(const std::string &certIdentifier);

private:
	std::string messageType_;
	std::string signingAlgorithm_;
	std::string message_;
	std::string signatureValue_;
	std::string sourceIp_;
	std::string certIdentifier_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_VERIFYREQUEST_H_
