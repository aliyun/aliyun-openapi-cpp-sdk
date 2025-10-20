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

#ifndef ALIBABACLOUD_EIAM_MODEL_CREATEAPPLICATIONFEDERATEDCREDENTIALREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_CREATEAPPLICATIONFEDERATEDCREDENTIALREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT CreateApplicationFederatedCredentialRequest : public RpcServiceRequest {
public:
	struct AttributeMappings {
		std::string sourceValueExpression;
		std::string targetField;
	};
	CreateApplicationFederatedCredentialRequest();
	~CreateApplicationFederatedCredentialRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::vector<AttributeMappings> getAttributeMappings() const;
	void setAttributeMappings(const std::vector<AttributeMappings> &attributeMappings);
	std::string getFederatedCredentialProviderId() const;
	void setFederatedCredentialProviderId(const std::string &federatedCredentialProviderId);
	std::string getApplicationId() const;
	void setApplicationId(const std::string &applicationId);
	std::string getApplicationFederatedCredentialName() const;
	void setApplicationFederatedCredentialName(const std::string &applicationFederatedCredentialName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getVerificationCondition() const;
	void setVerificationCondition(const std::string &verificationCondition);
	std::string getApplicationFederatedCredentialType() const;
	void setApplicationFederatedCredentialType(const std::string &applicationFederatedCredentialType);

private:
	std::string description_;
	std::vector<AttributeMappings> attributeMappings_;
	std::string federatedCredentialProviderId_;
	std::string applicationId_;
	std::string applicationFederatedCredentialName_;
	std::string instanceId_;
	std::string verificationCondition_;
	std::string applicationFederatedCredentialType_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_CREATEAPPLICATIONFEDERATEDCREDENTIALREQUEST_H_
