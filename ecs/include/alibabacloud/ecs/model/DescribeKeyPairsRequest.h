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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEKEYPAIRSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEKEYPAIRSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeKeyPairsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeKeyPairsRequest();
	~DescribeKeyPairsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getKeyPairFingerPrint() const;
	void setKeyPairFingerPrint(const std::string &keyPairFingerPrint);
	std::string getKeyPairName() const;
	void setKeyPairName(const std::string &keyPairName);
	bool getIncludePublicKey() const;
	void setIncludePublicKey(bool includePublicKey);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	long resourceOwnerId_;
	std::string keyPairFingerPrint_;
	std::string keyPairName_;
	bool includePublicKey_;
	int pageNumber_;
	std::string resourceGroupId_;
	std::string regionId_;
	int pageSize_;
	std::vector<Tag> tag_;
	std::string resourceOwnerAccount_;
	long ownerId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEKEYPAIRSREQUEST_H_
