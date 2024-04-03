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

#ifndef ALIBABACLOUD_ALIKAFKA_MODEL_DELETESASLUSERREQUEST_H_
#define ALIBABACLOUD_ALIKAFKA_MODEL_DELETESASLUSERREQUEST_H_

#include <alibabacloud/alikafka/AlikafkaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alikafka {
namespace Model {
class ALIBABACLOUD_ALIKAFKA_EXPORT DeleteSaslUserRequest : public RpcServiceRequest {
public:
	DeleteSaslUserRequest();
	~DeleteSaslUserRequest();
	std::string getType() const;
	void setType(const std::string &type);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getMechanism() const;
	void setMechanism(const std::string &mechanism);
	std::string getUsername() const;
	void setUsername(const std::string &username);

private:
	std::string type_;
	std::string instanceId_;
	std::string regionId_;
	std::string mechanism_;
	std::string username_;
};
} // namespace Model
} // namespace Alikafka
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIKAFKA_MODEL_DELETESASLUSERREQUEST_H_
