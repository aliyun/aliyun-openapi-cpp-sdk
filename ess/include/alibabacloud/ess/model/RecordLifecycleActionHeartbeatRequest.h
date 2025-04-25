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

#ifndef ALIBABACLOUD_ESS_MODEL_RECORDLIFECYCLEACTIONHEARTBEATREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_RECORDLIFECYCLEACTIONHEARTBEATREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT RecordLifecycleActionHeartbeatRequest : public RpcServiceRequest {
public:
	RecordLifecycleActionHeartbeatRequest();
	~RecordLifecycleActionHeartbeatRequest();
	std::string getLifecycleActionToken() const;
	void setLifecycleActionToken(const std::string &lifecycleActionToken);
	int getHeartbeatTimeout() const;
	void setHeartbeatTimeout(int heartbeatTimeout);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getLifecycleHookId() const;
	void setLifecycleHookId(const std::string &lifecycleHookId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string lifecycleActionToken_;
	int heartbeatTimeout_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string lifecycleHookId_;
	std::string ownerAccount_;
	long ownerId_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_RECORDLIFECYCLEACTIONHEARTBEATREQUEST_H_
