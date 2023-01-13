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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTETABLEPROPAGATIONSREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTETABLEPROPAGATIONSREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT ListTransitRouterRouteTablePropagationsRequest : public RpcServiceRequest {
public:
	ListTransitRouterRouteTablePropagationsRequest();
	~ListTransitRouterRouteTablePropagationsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getTransitRouterRouteTableId() const;
	void setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getTransitRouterAttachmentResourceId() const;
	void setTransitRouterAttachmentResourceId(const std::string &transitRouterAttachmentResourceId);
	std::string getTransitRouterAttachmentResourceType() const;
	void setTransitRouterAttachmentResourceType(const std::string &transitRouterAttachmentResourceType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getTransitRouterAttachmentId() const;
	void setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::vector<std::string> getTransitRouterAttachmentIds() const;
	void setTransitRouterAttachmentIds(const std::vector<std::string> &transitRouterAttachmentIds);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	long resourceOwnerId_;
	std::string transitRouterRouteTableId_;
	std::string nextToken_;
	std::string transitRouterAttachmentResourceId_;
	std::string transitRouterAttachmentResourceType_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string version_;
	std::string transitRouterAttachmentId_;
	int maxResults_;
	std::vector<std::string> transitRouterAttachmentIds_;
	std::string status_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERROUTETABLEPROPAGATIONSREQUEST_H_
