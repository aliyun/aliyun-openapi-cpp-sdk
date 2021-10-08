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

#ifndef ALIBABACLOUD_ECS_MODEL_COPYIMAGEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_COPYIMAGEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CopyImageRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CopyImageRequest();
	~CopyImageRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getEncryptAlgorithm() const;
	void setEncryptAlgorithm(const std::string &encryptAlgorithm);
	std::string getDestinationRegionId() const;
	void setDestinationRegionId(const std::string &destinationRegionId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDestinationImageName() const;
	void setDestinationImageName(const std::string &destinationImageName);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	bool getEncrypted() const;
	void setEncrypted(bool encrypted);
	std::string getKMSKeyId() const;
	void setKMSKeyId(const std::string &kMSKeyId);
	std::string getDestinationDescription() const;
	void setDestinationDescription(const std::string &destinationDescription);

private:
	long resourceOwnerId_;
	std::string imageId_;
	std::string encryptAlgorithm_;
	std::string destinationRegionId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::vector<Tag> tag_;
	std::string resourceOwnerAccount_;
	std::string destinationImageName_;
	std::string ownerAccount_;
	long ownerId_;
	bool encrypted_;
	std::string kMSKeyId_;
	std::string destinationDescription_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_COPYIMAGEREQUEST_H_
