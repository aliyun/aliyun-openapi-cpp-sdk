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

#ifndef ALIBABACLOUD_KMS_MODEL_GETRANDOMPASSWORDREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_GETRANDOMPASSWORDREQUEST_H_

#include <alibabacloud/kms/KmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Kms {
namespace Model {
class ALIBABACLOUD_KMS_EXPORT GetRandomPasswordRequest : public RpcServiceRequest {
public:
	GetRandomPasswordRequest();
	~GetRandomPasswordRequest();
	std::string getExcludeCharacters() const;
	void setExcludeCharacters(const std::string &excludeCharacters);
	std::string getPasswordLength() const;
	void setPasswordLength(const std::string &passwordLength);
	std::string getExcludePunctuation() const;
	void setExcludePunctuation(const std::string &excludePunctuation);
	std::string getRequireEachIncludedType() const;
	void setRequireEachIncludedType(const std::string &requireEachIncludedType);
	std::string getExcludeNumbers() const;
	void setExcludeNumbers(const std::string &excludeNumbers);
	std::string getExcludeLowercase() const;
	void setExcludeLowercase(const std::string &excludeLowercase);
	std::string getExcludeUppercase() const;
	void setExcludeUppercase(const std::string &excludeUppercase);

private:
	std::string excludeCharacters_;
	std::string passwordLength_;
	std::string excludePunctuation_;
	std::string requireEachIncludedType_;
	std::string excludeNumbers_;
	std::string excludeLowercase_;
	std::string excludeUppercase_;
};
} // namespace Model
} // namespace Kms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_KMS_MODEL_GETRANDOMPASSWORDREQUEST_H_
