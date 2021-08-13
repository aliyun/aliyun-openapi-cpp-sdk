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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEACLATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEACLATTRIBUTEREQUEST_H_

#include <alibabacloud/smartag/SmartagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Smartag {
namespace Model {
class ALIBABACLOUD_SMARTAG_EXPORT DescribeACLAttributeRequest : public RpcServiceRequest {
public:
	DescribeACLAttributeRequest();
	~DescribeACLAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDirection() const;
	void setDirection(const std::string &direction);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::string getAclId() const;
	void setAclId(const std::string &aclId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	long resourceOwnerId_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::string direction_;
	std::string order_;
	std::string aclId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string name_;
};
} // namespace Model
} // namespace Smartag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEACLATTRIBUTEREQUEST_H_
