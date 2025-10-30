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

#ifndef ALIBABACLOUD_EIAM_MODEL_UPDATECUSTOMPRIVACYPOLICYREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_UPDATECUSTOMPRIVACYPOLICYREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT UpdateCustomPrivacyPolicyRequest : public RpcServiceRequest {
public:
	struct CustomPrivacyPolicyContents {
		std::string customPrivacyPolicyTip;
		std::string languageCode;
		struct CustomPrivacyPolicyItemsItem {
			std::string customPrivacyPolicyItemUrl;
			std::string customPrivacyPolicyItemName;
		};
		CustomPrivacyPolicyItemsItem customPrivacyPolicyItemsItem;
		std::vector<CustomPrivacyPolicyItemsItem> customPrivacyPolicyItems;
	};
	UpdateCustomPrivacyPolicyRequest();
	~UpdateCustomPrivacyPolicyRequest();
	std::string getDefaultLanguageCode() const;
	void setDefaultLanguageCode(const std::string &defaultLanguageCode);
	std::string getUserConsentType() const;
	void setUserConsentType(const std::string &userConsentType);
	std::vector<CustomPrivacyPolicyContents> getCustomPrivacyPolicyContents() const;
	void setCustomPrivacyPolicyContents(const std::vector<CustomPrivacyPolicyContents> &customPrivacyPolicyContents);
	std::string getCustomPrivacyPolicyId() const;
	void setCustomPrivacyPolicyId(const std::string &customPrivacyPolicyId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getCustomPrivacyPolicyName() const;
	void setCustomPrivacyPolicyName(const std::string &customPrivacyPolicyName);

private:
	std::string defaultLanguageCode_;
	std::string userConsentType_;
	std::vector<CustomPrivacyPolicyContents> customPrivacyPolicyContents_;
	std::string customPrivacyPolicyId_;
	std::string instanceId_;
	std::string customPrivacyPolicyName_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_UPDATECUSTOMPRIVACYPOLICYREQUEST_H_
