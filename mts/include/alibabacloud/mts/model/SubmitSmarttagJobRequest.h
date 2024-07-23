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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITSMARTTAGJOBREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITSMARTTAGJOBREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT SubmitSmarttagJobRequest : public RpcServiceRequest {
public:
	SubmitSmarttagJobRequest();
	~SubmitSmarttagJobRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getContent() const;
	void setContent(const std::string &content);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getNotifyUrl() const;
	void setNotifyUrl(const std::string &notifyUrl);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getParams() const;
	void setParams(const std::string &params);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getPriority() const;
	void setPriority(const std::string &priority);
	std::string getPipelineId() const;
	void setPipelineId(const std::string &pipelineId);
	std::string getContentType() const;
	void setContentType(const std::string &contentType);
	std::string getInput() const;
	void setInput(const std::string &input);
	std::string getContentAddr() const;
	void setContentAddr(const std::string &contentAddr);

private:
	long resourceOwnerId_;
	std::string title_;
	std::string content_;
	std::string accessKeyId_;
	std::string userData_;
	std::string notifyUrl_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string params_;
	std::string templateId_;
	std::string priority_;
	std::string pipelineId_;
	std::string contentType_;
	std::string input_;
	std::string contentAddr_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITSMARTTAGJOBREQUEST_H_
