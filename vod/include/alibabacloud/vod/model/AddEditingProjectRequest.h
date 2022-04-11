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

#ifndef ALIBABACLOUD_VOD_MODEL_ADDEDITINGPROJECTREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_ADDEDITINGPROJECTREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT AddEditingProjectRequest : public RpcServiceRequest {
public:
	AddEditingProjectRequest();
	~AddEditingProjectRequest();
	std::string getResourceOwnerId() const;
	void setResourceOwnerId(const std::string &resourceOwnerId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getCoverURL() const;
	void setCoverURL(const std::string &coverURL);
	std::string getDivision() const;
	void setDivision(const std::string &division);
	float getDuration() const;
	void setDuration(float duration);
	std::string getFEExtend() const;
	void setFEExtend(const std::string &fEExtend);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getTimeline() const;
	void setTimeline(const std::string &timeline);

private:
	std::string resourceOwnerId_;
	std::string description_;
	std::string title_;
	std::string accessKeyId_;
	std::string coverURL_;
	std::string division_;
	float duration_;
	std::string fEExtend_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string ownerId_;
	std::string timeline_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_ADDEDITINGPROJECTREQUEST_H_
