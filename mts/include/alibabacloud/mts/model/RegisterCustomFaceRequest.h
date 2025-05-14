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

#ifndef ALIBABACLOUD_MTS_MODEL_REGISTERCUSTOMFACEREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_REGISTERCUSTOMFACEREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT RegisterCustomFaceRequest : public RpcServiceRequest {
public:
	RegisterCustomFaceRequest();
	~RegisterCustomFaceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getPersonId() const;
	void setPersonId(const std::string &personId);
	std::string getCategoryId() const;
	void setCategoryId(const std::string &categoryId);
	std::string getPersonName() const;
	void setPersonName(const std::string &personName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getImageUrl() const;
	void setImageUrl(const std::string &imageUrl);

private:
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string personId_;
	std::string categoryId_;
	std::string personName_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string imageUrl_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_REGISTERCUSTOMFACEREQUEST_H_
