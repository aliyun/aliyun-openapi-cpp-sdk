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

#ifndef ALIBABACLOUD_SAE_MODEL_ROLLBACKAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_ROLLBACKAPPLICATIONREQUEST_H_

#include <alibabacloud/sae/SaeExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sae {
namespace Model {
class ALIBABACLOUD_SAE_EXPORT RollbackApplicationRequest : public RoaServiceRequest {
public:
	RollbackApplicationRequest();
	~RollbackApplicationRequest();
	int getMinReadyInstances() const;
	void setMinReadyInstances(int minReadyInstances);
	std::string getVersionId() const;
	void setVersionId(const std::string &versionId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	int getBatchWaitTime() const;
	void setBatchWaitTime(int batchWaitTime);
	int getMinReadyInstanceRatio() const;
	void setMinReadyInstanceRatio(int minReadyInstanceRatio);
	std::string getAutoEnableApplicationScalingRule() const;
	void setAutoEnableApplicationScalingRule(const std::string &autoEnableApplicationScalingRule);
	std::string getUpdateStrategy() const;
	void setUpdateStrategy(const std::string &updateStrategy);

private:
	int minReadyInstances_;
	std::string versionId_;
	std::string appId_;
	int batchWaitTime_;
	int minReadyInstanceRatio_;
	std::string autoEnableApplicationScalingRule_;
	std::string updateStrategy_;
};
} // namespace Model
} // namespace Sae
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAE_MODEL_ROLLBACKAPPLICATIONREQUEST_H_
