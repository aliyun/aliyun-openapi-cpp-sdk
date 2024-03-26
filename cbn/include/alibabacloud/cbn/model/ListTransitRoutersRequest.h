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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERSREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERSREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT ListTransitRoutersRequest : public RpcServiceRequest {
public:
	struct FeatureFilter {
		std::string key;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	ListTransitRoutersRequest();
	~ListTransitRoutersRequest();
	std::string getTransitRouterName() const;
	void setTransitRouterName(const std::string &transitRouterName);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	bool getGetPrimaryStandbyZoneInfo() const;
	void setGetPrimaryStandbyZoneInfo(bool getPrimaryStandbyZoneInfo);
	std::vector<FeatureFilter> getFeatureFilter() const;
	void setFeatureFilter(const std::vector<FeatureFilter> &featureFilter);
	std::string getType() const;
	void setType(const std::string &type);
	std::vector<std::string> getTransitRouterIds() const;
	void setTransitRouterIds(const std::vector<std::string> &transitRouterIds);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTransitRouterId() const;
	void setTransitRouterId(const std::string &transitRouterId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string transitRouterName_;
	long resourceOwnerId_;
	std::string cenId_;
	bool getPrimaryStandbyZoneInfo_;
	std::vector<FeatureFilter> featureFilter_;
	std::string type_;
	std::vector<std::string> transitRouterIds_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::vector<Tag> tag_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string transitRouterId_;
	std::string version_;
	std::string status_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_LISTTRANSITROUTERSREQUEST_H_
