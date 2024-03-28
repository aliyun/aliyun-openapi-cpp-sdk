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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_CREATEPROTECTDBRANCHREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_CREATEPROTECTDBRANCHREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT CreateProtectdBranchRequest : public RoaServiceRequest {
public:
	struct Body {
		int integer;
		std::vector<int> allowPushRoles;
		struct TestSettingDTO {
			struct SensitiveInfoDetection {
				std::string message;
				bool enabled;
			};
			sensitiveInfoDetection sensitiveInfoDetection;
			bool isRequired;
			struct CheckTaskQualityConfig {
				std::string bizNo;
				std::string taskName;
				std::string message;
				bool enabled;
			};
			checkTaskQualityConfig checkTaskQualityConfig;
			struct CodeGuidelinesDetection {
				std::string message;
				bool enabled;
			};
			codeGuidelinesDetection codeGuidelinesDetection;
			struct CheckConfig {
				struct CheckItemsItem {
					bool isRequired;
					std::string name;
				};
				checkItemsItem checkItemsItem;
				std::vector<checkItemsItem> checkItems;
			};
			checkConfig checkConfig;
		};
		testSettingDTO testSettingDTO;
		std::string string;
		std::vector<std::string> allowPushUserIds;
		std::string string;
		std::vector<std::string> allowMergeUserIds;
		struct MergeRequestSetting {
			std::string mrMode;
			std::string string;
			std::vector<std::string> defaultAssignees;
			int minimumApproval;
			bool isRequired;
			bool isRequireDiscussionProcessed;
			int integer;
			std::vector<int> allowMergeRequestRoles;
			std::string whiteList;
			bool isResetApprovalWhenNewPush;
			bool isAllowSelfApproval;
		};
		mergeRequestSetting mergeRequestSetting;
		long id;
		std::string branch;
		int integer;
		std::vector<int> allowMergeRoles;
	};
	CreateProtectdBranchRequest();
	~CreateProtectdBranchRequest();
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	long getRepositoryId() const;
	void setRepositoryId(long repositoryId);
	std::string getAccessToken() const;
	void setAccessToken(const std::string &accessToken);
	body getBody() const;
	void setBody(const body &body);

private:
	std::string organizationId_;
	long repositoryId_;
	std::string accessToken_;
	body body_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_CREATEPROTECTDBRANCHREQUEST_H_
