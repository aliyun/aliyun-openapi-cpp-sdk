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

#ifndef ALIBABACLOUD_EDS_USER_MODEL_FILTERUSERSREQUEST_H_
#define ALIBABACLOUD_EDS_USER_MODEL_FILTERUSERSREQUEST_H_

#include <alibabacloud/eds-user/Eds_userExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eds_user {
namespace Model {
class ALIBABACLOUD_EDS_USER_EXPORT FilterUsersRequest : public RpcServiceRequest {
public:
	struct OrderParam {
		std::string orderField;
		std::string orderType;
	};
	struct PropertyFilterParam {
		long propertyId;
		std::string propertyValueIds;
	};
	struct PropertyKeyValueFilterParam {
		std::string propertyKey;
		std::string propertyValues;
	};
	FilterUsersRequest();
	~FilterUsersRequest();
	bool getIsQueryAllSubOrgs() const;
	void setIsQueryAllSubOrgs(bool isQueryAllSubOrgs);
	OrderParam getOrderParam() const;
	void setOrderParam(const OrderParam &orderParam);
	std::vector<std::string> getExcludeEndUserIds() const;
	void setExcludeEndUserIds(const std::vector<std::string> &excludeEndUserIds);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	bool getIncludeDesktopCount() const;
	void setIncludeDesktopCount(bool includeDesktopCount);
	bool getIncludeSupportIdps() const;
	void setIncludeSupportIdps(bool includeSupportIdps);
	std::vector<PropertyFilterParam> getPropertyFilterParam() const;
	void setPropertyFilterParam(const std::vector<PropertyFilterParam> &propertyFilterParam);
	bool getIncludeOrgInfo() const;
	void setIncludeOrgInfo(bool includeOrgInfo);
	bool getIncludeDesktopGroupCount() const;
	void setIncludeDesktopGroupCount(bool includeDesktopGroupCount);
	std::string getOrgId() const;
	void setOrgId(const std::string &orgId);
	std::string getFilter() const;
	void setFilter(const std::string &filter);
	std::vector<PropertyKeyValueFilterParam> getPropertyKeyValueFilterParam() const;
	void setPropertyKeyValueFilterParam(const std::vector<PropertyKeyValueFilterParam> &propertyKeyValueFilterParam);
	std::string getOwnerType() const;
	void setOwnerType(const std::string &ownerType);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	int getStatus() const;
	void setStatus(int status);

private:
	bool isQueryAllSubOrgs_;
	OrderParam orderParam_;
	std::vector<std::string> excludeEndUserIds_;
	std::string nextToken_;
	bool includeDesktopCount_;
	bool includeSupportIdps_;
	std::vector<PropertyFilterParam> propertyFilterParam_;
	bool includeOrgInfo_;
	bool includeDesktopGroupCount_;
	std::string orgId_;
	std::string filter_;
	std::vector<PropertyKeyValueFilterParam> propertyKeyValueFilterParam_;
	std::string ownerType_;
	long maxResults_;
	int status_;
};
} // namespace Model
} // namespace Eds_user
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EDS_USER_MODEL_FILTERUSERSREQUEST_H_
