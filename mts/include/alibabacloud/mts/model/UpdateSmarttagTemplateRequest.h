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

#ifndef ALIBABACLOUD_MTS_MODEL_UPDATESMARTTAGTEMPLATEREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_UPDATESMARTTAGTEMPLATEREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT UpdateSmarttagTemplateRequest : public RpcServiceRequest {
public:
	UpdateSmarttagTemplateRequest();
	~UpdateSmarttagTemplateRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getIndustry() const;
	void setIndustry(const std::string &industry);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getScene() const;
	void setScene(const std::string &scene);
	std::string getTemplateName() const;
	void setTemplateName(const std::string &templateName);
	bool getIsDefault() const;
	void setIsDefault(bool isDefault);
	std::string getFaceCategoryIds() const;
	void setFaceCategoryIds(const std::string &faceCategoryIds);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getAnalyseTypes() const;
	void setAnalyseTypes(const std::string &analyseTypes);

private:
	long resourceOwnerId_;
	std::string industry_;
	std::string accessKeyId_;
	std::string scene_;
	std::string templateName_;
	bool isDefault_;
	std::string faceCategoryIds_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string templateId_;
	std::string analyseTypes_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_UPDATESMARTTAGTEMPLATEREQUEST_H_
