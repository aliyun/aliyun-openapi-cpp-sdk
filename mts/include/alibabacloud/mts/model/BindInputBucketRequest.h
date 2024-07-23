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

#ifndef ALIBABACLOUD_MTS_MODEL_BINDINPUTBUCKETREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_BINDINPUTBUCKETREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT BindInputBucketRequest : public RpcServiceRequest {
public:
	BindInputBucketRequest();
	~BindInputBucketRequest();
	std::string getReferer() const;
	void setReferer(const std::string &referer);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDepositorCredentials() const;
	void setDepositorCredentials(const std::string &depositorCredentials);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getBucket() const;
	void setBucket(const std::string &bucket);
	std::string getRoleArn() const;
	void setRoleArn(const std::string &roleArn);

private:
	std::string referer_;
	long resourceOwnerId_;
	std::string depositorCredentials_;
	std::string accessKeyId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string bucket_;
	std::string roleArn_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_BINDINPUTBUCKETREQUEST_H_
