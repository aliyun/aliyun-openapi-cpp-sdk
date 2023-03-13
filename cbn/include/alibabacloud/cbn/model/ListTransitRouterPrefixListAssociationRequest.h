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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERPREFIXLISTASSOCIATIONREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERPREFIXLISTASSOCIATIONREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT ListTransitRouterPrefixListAssociationRequest : public RpcServiceRequest {
public:
	ListTransitRouterPrefixListAssociationRequest();
	~ListTransitRouterPrefixListAssociationRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getNextHopInstanceId() const;
	void setNextHopInstanceId(const std::string &nextHopInstanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPrefixListId() const;
	void setPrefixListId(const std::string &prefixListId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getOwnerUid() const;
	void setOwnerUid(long ownerUid);
	std::string getNextHopType() const;
	void setNextHopType(const std::string &nextHopType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTransitRouterId() const;
	void setTransitRouterId(const std::string &transitRouterId);
	std::string getTransitRouterTableId() const;
	void setTransitRouterTableId(const std::string &transitRouterTableId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getNextHop() const;
	void setNextHop(const std::string &nextHop);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	long resourceOwnerId_;
	int pageNumber_;
	std::string nextHopInstanceId_;
	std::string regionId_;
	std::string prefixListId_;
	int pageSize_;
	long ownerUid_;
	std::string nextHopType_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string transitRouterId_;
	std::string transitRouterTableId_;
	std::string version_;
	std::string nextHop_;
	std::string status_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERPREFIXLISTASSOCIATIONREQUEST_H_
