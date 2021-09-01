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

#ifndef ALIBABACLOUD_MTS_MODEL_SETAUTHCONFIGREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_SETAUTHCONFIGREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT SetAuthConfigRequest : public RpcServiceRequest {
public:
	SetAuthConfigRequest();
	~SetAuthConfigRequest();
	std::string getKey1() const;
	void setKey1(const std::string &key1);
	std::string getKey2() const;
	void setKey2(const std::string &key2);
	std::string getResourceOwnerId() const;
	void setResourceOwnerId(const std::string &resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);

private:
	std::string key1_;
	std::string key2_;
	std::string resourceOwnerId_;
	std::string accessKeyId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string ownerId_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_SETAUTHCONFIGREQUEST_H_
