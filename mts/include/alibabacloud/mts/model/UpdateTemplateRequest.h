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

#ifndef ALIBABACLOUD_MTS_MODEL_UPDATETEMPLATEREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_UPDATETEMPLATEREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT UpdateTemplateRequest : public RpcServiceRequest {
public:
	UpdateTemplateRequest();
	~UpdateTemplateRequest();
	std::string getContainer() const;
	void setContainer(const std::string &container);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getVideo() const;
	void setVideo(const std::string &video);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getTransConfig() const;
	void setTransConfig(const std::string &transConfig);
	std::string getAudio() const;
	void setAudio(const std::string &audio);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getMuxConfig() const;
	void setMuxConfig(const std::string &muxConfig);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string container_;
	long resourceOwnerId_;
	std::string video_;
	std::string accessKeyId_;
	std::string transConfig_;
	std::string audio_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string muxConfig_;
	long ownerId_;
	std::string templateId_;
	std::string name_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_UPDATETEMPLATEREQUEST_H_
