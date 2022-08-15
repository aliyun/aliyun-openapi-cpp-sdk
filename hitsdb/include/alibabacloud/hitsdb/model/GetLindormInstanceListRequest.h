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

#ifndef ALIBABACLOUD_HITSDB_MODEL_GETLINDORMINSTANCELISTREQUEST_H_
#define ALIBABACLOUD_HITSDB_MODEL_GETLINDORMINSTANCELISTREQUEST_H_

#include <alibabacloud/hitsdb/HitsdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Hitsdb {
namespace Model {
class ALIBABACLOUD_HITSDB_EXPORT GetLindormInstanceListRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	GetLindormInstanceListRequest();
	~GetLindormInstanceListRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getSupportEngine() const;
	void setSupportEngine(int supportEngine);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getQueryStr() const;
	void setQueryStr(const std::string &queryStr);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getServiceType() const;
	void setServiceType(const std::string &serviceType);

private:
	long resourceOwnerId_;
	int supportEngine_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string securityToken_;
	std::string regionId_;
	int pageSize_;
	std::vector<Tag> tag_;
	std::string queryStr_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string serviceType_;
};
} // namespace Model
} // namespace Hitsdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_HITSDB_MODEL_GETLINDORMINSTANCELISTREQUEST_H_
