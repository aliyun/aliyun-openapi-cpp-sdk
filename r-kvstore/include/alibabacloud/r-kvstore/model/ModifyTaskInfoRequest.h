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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_MODIFYTASKINFOREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_MODIFYTASKINFOREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT ModifyTaskInfoRequest : public RpcServiceRequest {
public:
	ModifyTaskInfoRequest();
	~ModifyTaskInfoRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getStepName() const;
	void setStepName(const std::string &stepName);
	std::string getActionParams() const;
	void setActionParams(const std::string &actionParams);
	std::string getTaskAction() const;
	void setTaskAction(const std::string &taskAction);

private:
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string securityToken_;
	std::string regionId_;
	std::string taskId_;
	std::string resourceOwnerAccount_;
	std::string stepName_;
	std::string actionParams_;
	std::string taskAction_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_MODIFYTASKINFOREQUEST_H_
