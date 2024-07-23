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

#ifndef ALIBABACLOUD_MTS_MODEL_DELETECUSTOMENTITYREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_DELETECUSTOMENTITYREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT DeleteCustomEntityRequest : public RpcServiceRequest {
public:
	DeleteCustomEntityRequest();
	~DeleteCustomEntityRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getAlgorithm() const;
	void setAlgorithm(const std::string &algorithm);
	std::string getCustomGroupId() const;
	void setCustomGroupId(const std::string &customGroupId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getCustomEntityId() const;
	void setCustomEntityId(const std::string &customEntityId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string algorithm_;
	std::string customGroupId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string customEntityId_;
	long ownerId_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_DELETECUSTOMENTITYREQUEST_H_
