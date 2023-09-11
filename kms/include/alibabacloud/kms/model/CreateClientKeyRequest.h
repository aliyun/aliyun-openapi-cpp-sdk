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

#ifndef ALIBABACLOUD_KMS_MODEL_CREATECLIENTKEYREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_CREATECLIENTKEYREQUEST_H_

#include <alibabacloud/kms/KmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Kms {
namespace Model {
class ALIBABACLOUD_KMS_EXPORT CreateClientKeyRequest : public RpcServiceRequest {
public:
	CreateClientKeyRequest();
	~CreateClientKeyRequest();
	std::string getNotBefore() const;
	void setNotBefore(const std::string &notBefore);
	std::string getNotAfter() const;
	void setNotAfter(const std::string &notAfter);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getAapName() const;
	void setAapName(const std::string &aapName);

private:
	std::string notBefore_;
	std::string notAfter_;
	std::string password_;
	std::string aapName_;
};
} // namespace Model
} // namespace Kms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_KMS_MODEL_CREATECLIENTKEYREQUEST_H_
