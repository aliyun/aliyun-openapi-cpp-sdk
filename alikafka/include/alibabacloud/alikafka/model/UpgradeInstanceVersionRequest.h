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

#ifndef ALIBABACLOUD_ALIKAFKA_MODEL_UPGRADEINSTANCEVERSIONREQUEST_H_
#define ALIBABACLOUD_ALIKAFKA_MODEL_UPGRADEINSTANCEVERSIONREQUEST_H_

#include <alibabacloud/alikafka/AlikafkaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alikafka {
namespace Model {
class ALIBABACLOUD_ALIKAFKA_EXPORT UpgradeInstanceVersionRequest : public RpcServiceRequest {
public:
	UpgradeInstanceVersionRequest();
	~UpgradeInstanceVersionRequest();
	std::string getTargetVersion() const;
	void setTargetVersion(const std::string &targetVersion);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	std::string targetVersion_;
	std::string instanceId_;
	std::string regionId_;
};
} // namespace Model
} // namespace Alikafka
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIKAFKA_MODEL_UPGRADEINSTANCEVERSIONREQUEST_H_
