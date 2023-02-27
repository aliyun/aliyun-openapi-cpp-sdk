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

#ifndef ALIBABACLOUD_ICE_MODEL_SUBMITDNAJOBREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_SUBMITDNAJOBREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT SubmitDNAJobRequest : public RpcServiceRequest {
public:
	struct Input {
		std::string media;
		std::string type;
	};
	SubmitDNAJobRequest();
	~SubmitDNAJobRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getPrimaryKey() const;
	void setPrimaryKey(const std::string &primaryKey);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getPipelineId() const;
	void setPipelineId(const std::string &pipelineId);
	Input getInput() const;
	void setInput(const Input &input);
	std::string getDBId() const;
	void setDBId(const std::string &dBId);
	std::string getConfig() const;
	void setConfig(const std::string &config);

private:
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string userData_;
	std::string primaryKey_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string templateId_;
	std::string pipelineId_;
	Input input_;
	std::string dBId_;
	std::string config_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_SUBMITDNAJOBREQUEST_H_
