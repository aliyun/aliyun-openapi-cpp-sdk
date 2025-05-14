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

#ifndef ALIBABACLOUD_MTS_MODEL_ADDSMARTTAGTEMPLATEREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_ADDSMARTTAGTEMPLATEREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT AddSmarttagTemplateRequest : public RpcServiceRequest {
public:
	AddSmarttagTemplateRequest();
	~AddSmarttagTemplateRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getKnowledgeConfig() const;
	void setKnowledgeConfig(const std::string &knowledgeConfig);
	std::string getIndustry() const;
	void setIndustry(const std::string &industry);
	std::string getLabelVersion() const;
	void setLabelVersion(const std::string &labelVersion);
	std::string getLabelCustomParamsConfig() const;
	void setLabelCustomParamsConfig(const std::string &labelCustomParamsConfig);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getScene() const;
	void setScene(const std::string &scene);
	std::string getTemplateConfig() const;
	void setTemplateConfig(const std::string &templateConfig);
	std::string getFaceCustomParamsConfig() const;
	void setFaceCustomParamsConfig(const std::string &faceCustomParamsConfig);
	std::string getTemplateName() const;
	void setTemplateName(const std::string &templateName);
	bool getIsDefault() const;
	void setIsDefault(bool isDefault);
	std::string getFaceCategoryIds() const;
	void setFaceCategoryIds(const std::string &faceCategoryIds);
	std::string getKeywordConfig() const;
	void setKeywordConfig(const std::string &keywordConfig);
	std::string getLandmarkGroupIds() const;
	void setLandmarkGroupIds(const std::string &landmarkGroupIds);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getLabelCustomCategoryIds() const;
	void setLabelCustomCategoryIds(const std::string &labelCustomCategoryIds);
	std::string getObjectGroupIds() const;
	void setObjectGroupIds(const std::string &objectGroupIds);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAnalyseTypes() const;
	void setAnalyseTypes(const std::string &analyseTypes);
	std::string getLabelType() const;
	void setLabelType(const std::string &labelType);

private:
	long resourceOwnerId_;
	std::string knowledgeConfig_;
	std::string industry_;
	std::string labelVersion_;
	std::string labelCustomParamsConfig_;
	std::string accessKeyId_;
	std::string scene_;
	std::string templateConfig_;
	std::string faceCustomParamsConfig_;
	std::string templateName_;
	bool isDefault_;
	std::string faceCategoryIds_;
	std::string keywordConfig_;
	std::string landmarkGroupIds_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string labelCustomCategoryIds_;
	std::string objectGroupIds_;
	long ownerId_;
	std::string analyseTypes_;
	std::string labelType_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_ADDSMARTTAGTEMPLATEREQUEST_H_
