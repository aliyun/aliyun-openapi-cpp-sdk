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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBEACCESSCONTROLLISTATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBEACCESSCONTROLLISTATTRIBUTEREQUEST_H_

#include <alibabacloud/slb/SlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Slb {
namespace Model {
class ALIBABACLOUD_SLB_EXPORT DescribeAccessControlListAttributeRequest : public RpcServiceRequest {
public:
	DescribeAccessControlListAttributeRequest();
	~DescribeAccessControlListAttributeRequest();
	std::string getAccess_key_id() const;
	void setAccess_key_id(const std::string &access_key_id);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getAclId() const;
	void setAclId(const std::string &aclId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getAclEntryComment() const;
	void setAclEntryComment(const std::string &aclEntryComment);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTags() const;
	void setTags(const std::string &tags);
	int getPage() const;
	void setPage(int page);

private:
	std::string access_key_id_;
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string regionId_;
	int pageSize_;
	std::string aclId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string aclEntryComment_;
	long ownerId_;
	std::string tags_;
	int page_;
};
} // namespace Model
} // namespace Slb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBEACCESSCONTROLLISTATTRIBUTEREQUEST_H_
