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

#ifndef ALIBABACLOUD_CBN_MODEL_RESOLVEANDROUTESERVICEINCENREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_RESOLVEANDROUTESERVICEINCENREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT ResolveAndRouteServiceInCenRequest : public RpcServiceRequest {
public:
	ResolveAndRouteServiceInCenRequest();
	~ResolveAndRouteServiceInCenRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	long getUpdateInterval() const;
	void setUpdateInterval(long updateInterval);
	std::string getHost() const;
	void setHost(const std::string &host);
	std::string getHostRegionId() const;
	void setHostRegionId(const std::string &hostRegionId);
	std::string getHostVpcId() const;
	void setHostVpcId(const std::string &hostVpcId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::vector<std::string> getAccessRegionIds() const;
	void setAccessRegionIds(const std::vector<std::string> &accessRegionIds);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string cenId_;
	std::string description_;
	long updateInterval_;
	std::string host_;
	std::string hostRegionId_;
	std::string hostVpcId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string version_;
	std::vector<std::string> accessRegionIds_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_RESOLVEANDROUTESERVICEINCENREQUEST_H_
