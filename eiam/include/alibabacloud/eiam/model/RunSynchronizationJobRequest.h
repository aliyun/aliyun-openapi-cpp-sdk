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

#ifndef ALIBABACLOUD_EIAM_MODEL_RUNSYNCHRONIZATIONJOBREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_RUNSYNCHRONIZATIONJOBREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT RunSynchronizationJobRequest : public RpcServiceRequest {
public:
	struct SynchronizationScopeConfig {
		std::string string;
		std::vector<std::string> organizationalUnitIds;
		std::string string;
		std::vector<std::string> userIds;
		std::string string;
		std::vector<std::string> groupIds;
	};
	RunSynchronizationJobRequest();
	~RunSynchronizationJobRequest();
	std::string getTargetId() const;
	void setTargetId(const std::string &targetId);
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	SynchronizationScopeConfig getSynchronizationScopeConfig() const;
	void setSynchronizationScopeConfig(const SynchronizationScopeConfig &synchronizationScopeConfig);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	bool getPasswordInitialization() const;
	void setPasswordInitialization(bool passwordInitialization);
	std::vector<std::string> getUserIdentityTypes() const;
	void setUserIdentityTypes(const std::vector<std::string> &userIdentityTypes);

private:
	std::string targetId_;
	std::string targetType_;
	std::string description_;
	SynchronizationScopeConfig synchronizationScopeConfig_;
	std::string instanceId_;
	bool passwordInitialization_;
	std::vector<std::string> userIdentityTypes_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_RUNSYNCHRONIZATIONJOBREQUEST_H_
