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

#ifndef ALIBABACLOUD_ALIKAFKA_MODEL_DELETEACLREQUEST_H_
#define ALIBABACLOUD_ALIKAFKA_MODEL_DELETEACLREQUEST_H_

#include <alibabacloud/alikafka/AlikafkaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alikafka {
namespace Model {
class ALIBABACLOUD_ALIKAFKA_EXPORT DeleteAclRequest : public RpcServiceRequest {
public:
	DeleteAclRequest();
	~DeleteAclRequest();
	std::string getAclResourcePatternType() const;
	void setAclResourcePatternType(const std::string &aclResourcePatternType);
	std::string getAclResourceType() const;
	void setAclResourceType(const std::string &aclResourceType);
	std::string getAclOperationTypes() const;
	void setAclOperationTypes(const std::string &aclOperationTypes);
	std::string getAclOperationType() const;
	void setAclOperationType(const std::string &aclOperationType);
	std::string getAclResourceName() const;
	void setAclResourceName(const std::string &aclResourceName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getHost() const;
	void setHost(const std::string &host);
	std::string getAclPermissionType() const;
	void setAclPermissionType(const std::string &aclPermissionType);
	std::string getUsername() const;
	void setUsername(const std::string &username);

private:
	std::string aclResourcePatternType_;
	std::string aclResourceType_;
	std::string aclOperationTypes_;
	std::string aclOperationType_;
	std::string aclResourceName_;
	std::string instanceId_;
	std::string regionId_;
	std::string host_;
	std::string aclPermissionType_;
	std::string username_;
};
} // namespace Model
} // namespace Alikafka
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIKAFKA_MODEL_DELETEACLREQUEST_H_
