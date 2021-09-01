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

#ifndef ALIBABACLOUD_MTS_MODEL_ADDMEDIAREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_ADDMEDIAREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT AddMediaRequest : public RpcServiceRequest {
public:
	AddMediaRequest();
	~AddMediaRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	bool getInputUnbind() const;
	void setInputUnbind(bool inputUnbind);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getCoverURL() const;
	void setCoverURL(const std::string &coverURL);
	long getCateId() const;
	void setCateId(long cateId);
	std::string getMediaWorkflowId() const;
	void setMediaWorkflowId(const std::string &mediaWorkflowId);
	std::string getMediaWorkflowUserData() const;
	void setMediaWorkflowUserData(const std::string &mediaWorkflowUserData);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getOverrideParams() const;
	void setOverrideParams(const std::string &overrideParams);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getFileURL() const;
	void setFileURL(const std::string &fileURL);

private:
	long resourceOwnerId_;
	std::string description_;
	std::string title_;
	bool inputUnbind_;
	std::string accessKeyId_;
	std::string coverURL_;
	long cateId_;
	std::string mediaWorkflowId_;
	std::string mediaWorkflowUserData_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string overrideParams_;
	long ownerId_;
	std::string tags_;
	std::string fileURL_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_ADDMEDIAREQUEST_H_
