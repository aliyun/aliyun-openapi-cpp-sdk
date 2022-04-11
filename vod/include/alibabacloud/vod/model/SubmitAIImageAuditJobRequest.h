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

#ifndef ALIBABACLOUD_VOD_MODEL_SUBMITAIIMAGEAUDITJOBREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_SUBMITAIIMAGEAUDITJOBREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT SubmitAIImageAuditJobRequest : public RpcServiceRequest {
public:
	SubmitAIImageAuditJobRequest();
	~SubmitAIImageAuditJobRequest();
	std::string getResourceOwnerId() const;
	void setResourceOwnerId(const std::string &resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getMediaId() const;
	void setMediaId(const std::string &mediaId);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getMediaAuditConfiguration() const;
	void setMediaAuditConfiguration(const std::string &mediaAuditConfiguration);

private:
	std::string resourceOwnerId_;
	std::string accessKeyId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string ownerId_;
	std::string mediaId_;
	std::string templateId_;
	std::string mediaAuditConfiguration_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_SUBMITAIIMAGEAUDITJOBREQUEST_H_
