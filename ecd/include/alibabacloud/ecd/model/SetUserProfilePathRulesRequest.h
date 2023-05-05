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

#ifndef ALIBABACLOUD_ECD_MODEL_SETUSERPROFILEPATHRULESREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_SETUSERPROFILEPATHRULESREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT SetUserProfilePathRulesRequest : public RpcServiceRequest {
public:
	struct UserProfilePathRule {
		struct BlackPath {
			std::string path;
			std::string type;
		};
		BlackPath blackPath;
		struct WhitePathsItem {
			std::string path;
			std::string type;
		};
		WhitePathsItem whitePathsItem;
		std::vector<WhitePathsItem> whitePaths;
	};
	SetUserProfilePathRulesRequest();
	~SetUserProfilePathRulesRequest();
	std::string getUserProfileRuleType() const;
	void setUserProfileRuleType(const std::string &userProfileRuleType);
	std::string getDesktopGroupId() const;
	void setDesktopGroupId(const std::string &desktopGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<UserProfilePathRule> getUserProfilePathRule() const;
	void setUserProfilePathRule(const std::vector<UserProfilePathRule> &userProfilePathRule);

private:
	std::string userProfileRuleType_;
	std::string desktopGroupId_;
	std::string regionId_;
	std::vector<UserProfilePathRule> userProfilePathRule_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_SETUSERPROFILEPATHRULESREQUEST_H_
