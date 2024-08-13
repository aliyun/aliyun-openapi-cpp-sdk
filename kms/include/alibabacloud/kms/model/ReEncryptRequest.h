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

#ifndef ALIBABACLOUD_KMS_MODEL_REENCRYPTREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_REENCRYPTREQUEST_H_

#include <alibabacloud/kms/KmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Kms {
namespace Model {
class ALIBABACLOUD_KMS_EXPORT ReEncryptRequest : public RpcServiceRequest {
public:
	ReEncryptRequest();
	~ReEncryptRequest();
	std::string getDestinationEncryptionContext() const;
	void setDestinationEncryptionContext(const std::string &destinationEncryptionContext);
	std::string getDryRun() const;
	void setDryRun(const std::string &dryRun);
	std::string getSourceKeyId() const;
	void setSourceKeyId(const std::string &sourceKeyId);
	std::string getSourceEncryptionAlgorithm() const;
	void setSourceEncryptionAlgorithm(const std::string &sourceEncryptionAlgorithm);
	std::string getSourceKeyVersionId() const;
	void setSourceKeyVersionId(const std::string &sourceKeyVersionId);
	std::string getDestinationKeyId() const;
	void setDestinationKeyId(const std::string &destinationKeyId);
	std::string getSourceEncryptionContext() const;
	void setSourceEncryptionContext(const std::string &sourceEncryptionContext);
	std::string getCiphertextBlob() const;
	void setCiphertextBlob(const std::string &ciphertextBlob);

private:
	std::string destinationEncryptionContext_;
	std::string dryRun_;
	std::string sourceKeyId_;
	std::string sourceEncryptionAlgorithm_;
	std::string sourceKeyVersionId_;
	std::string destinationKeyId_;
	std::string sourceEncryptionContext_;
	std::string ciphertextBlob_;
};
} // namespace Model
} // namespace Kms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_KMS_MODEL_REENCRYPTREQUEST_H_
