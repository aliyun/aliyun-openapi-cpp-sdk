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

#ifndef ALIBABACLOUD_ICE_MODEL_REGISTERMEDIAINFOREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_REGISTERMEDIAINFOREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT RegisterMediaInfoRequest : public RpcServiceRequest {
public:
	RegisterMediaInfoRequest();
	~RegisterMediaInfoRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getEntityId() const;
	void setEntityId(const std::string &entityId);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getBusinessType() const;
	void setBusinessType(const std::string &businessType);
	std::string getCoverURL() const;
	void setCoverURL(const std::string &coverURL);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getBiz() const;
	void setBiz(const std::string &biz);
	long getCateId() const;
	void setCateId(long cateId);
	std::string getDynamicMetaDataList() const;
	void setDynamicMetaDataList(const std::string &dynamicMetaDataList);
	bool getOverwrite() const;
	void setOverwrite(bool overwrite);
	std::string getMediaTags() const;
	void setMediaTags(const std::string &mediaTags);
	std::string getWorkflowId() const;
	void setWorkflowId(const std::string &workflowId);
	std::string getDynamicMetaData() const;
	void setDynamicMetaData(const std::string &dynamicMetaData);
	std::string getUploadSource() const;
	void setUploadSource(const std::string &uploadSource);
	std::string getInputURL() const;
	void setInputURL(const std::string &inputURL);
	std::string getReferenceId() const;
	void setReferenceId(const std::string &referenceId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	std::string getMediaType() const;
	void setMediaType(const std::string &mediaType);
	std::string getRegisterConfig() const;
	void setRegisterConfig(const std::string &registerConfig);

private:
	std::string clientToken_;
	std::string description_;
	std::string entityId_;
	std::string title_;
	std::string businessType_;
	std::string coverURL_;
	std::string userData_;
	std::string biz_;
	long cateId_;
	std::string dynamicMetaDataList_;
	bool overwrite_;
	std::string mediaTags_;
	std::string workflowId_;
	std::string dynamicMetaData_;
	std::string uploadSource_;
	std::string inputURL_;
	std::string referenceId_;
	std::string appId_;
	std::string category_;
	std::string mediaType_;
	std::string registerConfig_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_REGISTERMEDIAINFOREQUEST_H_
