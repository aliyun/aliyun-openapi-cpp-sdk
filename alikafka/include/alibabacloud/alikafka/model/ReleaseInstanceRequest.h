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

#ifndef ALIBABACLOUD_ALIKAFKA_MODEL_RELEASEINSTANCEREQUEST_H_
#define ALIBABACLOUD_ALIKAFKA_MODEL_RELEASEINSTANCEREQUEST_H_

#include <alibabacloud/alikafka/AlikafkaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alikafka {
namespace Model {
class ALIBABACLOUD_ALIKAFKA_EXPORT ReleaseInstanceRequest : public RpcServiceRequest {
public:
	ReleaseInstanceRequest();
	~ReleaseInstanceRequest();
	bool getForceDeleteInstance() const;
	void setForceDeleteInstance(bool forceDeleteInstance);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getReleaseIgnoreTime() const;
	void setReleaseIgnoreTime(bool releaseIgnoreTime);

private:
	bool forceDeleteInstance_;
	std::string instanceId_;
	std::string regionId_;
	bool releaseIgnoreTime_;
};
} // namespace Model
} // namespace Alikafka
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIKAFKA_MODEL_RELEASEINSTANCEREQUEST_H_
