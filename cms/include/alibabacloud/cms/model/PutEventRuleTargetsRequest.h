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

#ifndef ALIBABACLOUD_CMS_MODEL_PUTEVENTRULETARGETSREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_PUTEVENTRULETARGETSREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT PutEventRuleTargetsRequest : public RpcServiceRequest {
public:
	struct WebhookParameters {
		std::string protocol;
		std::string method;
		std::string id;
		std::string url;
	};
	struct ContactParameters {
		std::string level;
		std::string id;
		std::string contactGroupName;
	};
	struct SlsParameters {
		std::string project;
		std::string id;
		std::string region;
		std::string logStore;
	};
	struct OpenApiParameters {
		std::string product;
		std::string role;
		std::string action;
		std::string id;
		std::string arn;
		std::string region;
		std::string version;
	};
	struct MnsParameters {
		std::string id;
		std::string region;
		std::string queue;
	};
	struct FcParameters {
		std::string functionName;
		std::string serviceName;
		std::string id;
		std::string region;
	};
	PutEventRuleTargetsRequest();
	~PutEventRuleTargetsRequest();
	std::vector<WebhookParameters> getWebhookParameters() const;
	void setWebhookParameters(const std::vector<WebhookParameters> &webhookParameters);
	std::vector<ContactParameters> getContactParameters() const;
	void setContactParameters(const std::vector<ContactParameters> &contactParameters);
	std::vector<SlsParameters> getSlsParameters() const;
	void setSlsParameters(const std::vector<SlsParameters> &slsParameters);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::vector<OpenApiParameters> getOpenApiParameters() const;
	void setOpenApiParameters(const std::vector<OpenApiParameters> &openApiParameters);
	std::vector<MnsParameters> getMnsParameters() const;
	void setMnsParameters(const std::vector<MnsParameters> &mnsParameters);
	std::vector<FcParameters> getFcParameters() const;
	void setFcParameters(const std::vector<FcParameters> &fcParameters);

private:
	std::vector<WebhookParameters> webhookParameters_;
	std::vector<ContactParameters> contactParameters_;
	std::vector<SlsParameters> slsParameters_;
	std::string ruleName_;
	std::vector<OpenApiParameters> openApiParameters_;
	std::vector<MnsParameters> mnsParameters_;
	std::vector<FcParameters> fcParameters_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_PUTEVENTRULETARGETSREQUEST_H_
