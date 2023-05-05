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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPGROUPSREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPGROUPSREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeDesktopGroupsRequest : public RpcServiceRequest {
public:
	DescribeDesktopGroupsRequest();
	~DescribeDesktopGroupsRequest();
	std::string getOfficeSiteId() const;
	void setOfficeSiteId(const std::string &officeSiteId);
	std::vector<std::string> getEndUserIds() const;
	void setEndUserIds(const std::vector<std::string> &endUserIds);
	std::vector<std::string> getImageId() const;
	void setImageId(const std::vector<std::string> &imageId);
	std::vector<std::string> getBundleId() const;
	void setBundleId(const std::vector<std::string> &bundleId);
	std::string getDesktopGroupName() const;
	void setDesktopGroupName(const std::string &desktopGroupName);
	std::string getDesktopGroupId() const;
	void setDesktopGroupId(const std::string &desktopGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getPeriod() const;
	void setPeriod(int period);
	long getOwnType() const;
	void setOwnType(long ownType);
	std::vector<std::string> getExcludedEndUserIds() const;
	void setExcludedEndUserIds(const std::vector<std::string> &excludedEndUserIds);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getProtocolType() const;
	void setProtocolType(const std::string &protocolType);
	std::string getPolicyGroupId() const;
	void setPolicyGroupId(const std::string &policyGroupId);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string officeSiteId_;
	std::vector<std::string> endUserIds_;
	std::vector<std::string> imageId_;
	std::vector<std::string> bundleId_;
	std::string desktopGroupName_;
	std::string desktopGroupId_;
	std::string regionId_;
	std::string nextToken_;
	int period_;
	long ownType_;
	std::vector<std::string> excludedEndUserIds_;
	std::string periodUnit_;
	int maxResults_;
	std::string protocolType_;
	std::string policyGroupId_;
	int status_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPGROUPSREQUEST_H_
