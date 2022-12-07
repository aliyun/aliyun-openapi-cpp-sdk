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

#ifndef ALIBABACLOUD_ALIKAFKA_MODEL_GETINSTANCELISTREQUEST_H_
#define ALIBABACLOUD_ALIKAFKA_MODEL_GETINSTANCELISTREQUEST_H_

#include <alibabacloud/alikafka/AlikafkaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alikafka {
namespace Model {
class ALIBABACLOUD_ALIKAFKA_EXPORT GetInstanceListRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	GetInstanceListRequest();
	~GetInstanceListRequest();
	std::string getOrderId() const;
	void setOrderId(const std::string &orderId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::vector<std::string> getInstanceId() const;
	void setInstanceId(const std::vector<std::string> &instanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);

private:
	std::string orderId_;
	std::string resourceGroupId_;
	std::vector<std::string> instanceId_;
	std::string regionId_;
	std::vector<Tag> tag_;
};
} // namespace Model
} // namespace Alikafka
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIKAFKA_MODEL_GETINSTANCELISTREQUEST_H_
