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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESBYEXPIRETIMEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESBYEXPIRETIMEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeDBInstancesByExpireTimeRequest : public RpcServiceRequest {
public:
	DescribeDBInstancesByExpireTimeRequest();
	~DescribeDBInstancesByExpireTimeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	bool getExpired() const;
	void setExpired(bool expired);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getExpirePeriod() const;
	void setExpirePeriod(int expirePeriod);
	std::string getProxyId() const;
	void setProxyId(const std::string &proxyId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTags() const;
	void setTags(const std::string &tags);

private:
	long resourceOwnerId_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	bool expired_;
	std::string regionId_;
	int pageSize_;
	int expirePeriod_;
	std::string proxyId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string tags_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCESBYEXPIRETIMEREQUEST_H_
