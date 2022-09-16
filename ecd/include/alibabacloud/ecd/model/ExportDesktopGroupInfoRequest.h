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

#ifndef ALIBABACLOUD_ECD_MODEL_EXPORTDESKTOPGROUPINFOREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_EXPORTDESKTOPGROUPINFOREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT ExportDesktopGroupInfoRequest : public RpcServiceRequest {
public:
	ExportDesktopGroupInfoRequest();
	~ExportDesktopGroupInfoRequest();
	std::string getOfficeSiteId() const;
	void setOfficeSiteId(const std::string &officeSiteId);
	std::string getDesktopGroupName() const;
	void setDesktopGroupName(const std::string &desktopGroupName);
	std::vector<std::string> getDesktopGroupId() const;
	void setDesktopGroupId(const std::vector<std::string> &desktopGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getDirectoryId() const;
	void setDirectoryId(const std::string &directoryId);
	std::vector<std::string> getEndUserId() const;
	void setEndUserId(const std::vector<std::string> &endUserId);
	std::string getExpiredTime() const;
	void setExpiredTime(const std::string &expiredTime);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getLangType() const;
	void setLangType(const std::string &langType);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	std::string getPolicyGroupId() const;
	void setPolicyGroupId(const std::string &policyGroupId);

private:
	std::string officeSiteId_;
	std::string desktopGroupName_;
	std::vector<std::string> desktopGroupId_;
	std::string regionId_;
	std::string nextToken_;
	std::string directoryId_;
	std::vector<std::string> endUserId_;
	std::string expiredTime_;
	int maxResults_;
	std::string langType_;
	std::string chargeType_;
	std::string policyGroupId_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_EXPORTDESKTOPGROUPINFOREQUEST_H_
