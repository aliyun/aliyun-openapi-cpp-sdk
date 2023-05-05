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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEUSERSINGROUPREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEUSERSINGROUPREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeUsersInGroupRequest : public RpcServiceRequest {
public:
	DescribeUsersInGroupRequest();
	~DescribeUsersInGroupRequest();
	std::vector<std::string> getEndUserIds() const;
	void setEndUserIds(const std::vector<std::string> &endUserIds);
	int getConnectState() const;
	void setConnectState(int connectState);
	std::string getOrgId() const;
	void setOrgId(const std::string &orgId);
	std::string getFilter() const;
	void setFilter(const std::string &filter);
	std::string getDesktopGroupId() const;
	void setDesktopGroupId(const std::string &desktopGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	bool getQueryUserDetail() const;
	void setQueryUserDetail(bool queryUserDetail);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getEndUserId() const;
	void setEndUserId(const std::string &endUserId);

private:
	std::vector<std::string> endUserIds_;
	int connectState_;
	std::string orgId_;
	std::string filter_;
	std::string desktopGroupId_;
	std::string regionId_;
	std::string nextToken_;
	bool queryUserDetail_;
	int maxResults_;
	std::string endUserId_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEUSERSINGROUPREQUEST_H_
