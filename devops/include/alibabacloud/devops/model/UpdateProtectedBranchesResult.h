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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_UPDATEPROTECTEDBRANCHESRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_UPDATEPROTECTEDBRANCHESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops/DevopsExport.h>

namespace AlibabaCloud
{
	namespace Devops
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_EXPORT UpdateProtectedBranchesResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct MergeRequestSetting
					{
						bool isAllowSelfApproval;
						bool isRequired;
						int minimumApproval;
						std::vector<std::string> defaultAssignees;
						std::vector<std::string> allowMergeRequestRoles;
						std::string mrMode;
						bool isResetApprovalWhenNewPush;
						std::string whiteList;
						bool isRequireDiscussionProcessed;
					};
					struct TestSettingDTO
					{
						struct CodeGuidelinesDetection
						{
							std::string message;
							bool enabled;
						};
						struct SensitiveInfoDetection
						{
							std::string message;
							bool enabled;
						};
						struct CheckTaskQualityConfig
						{
							std::string message;
							std::string taskName;
							std::string bizNo;
							bool enabled;
						};
						struct CheckConfig
						{
							struct Check_items
							{
								bool isRequired;
								std::string name;
							};
							std::vector<Check_items> checkItems;
						};
						SensitiveInfoDetection sensitiveInfoDetection;
						bool isRequired;
						CheckTaskQualityConfig checkTaskQualityConfig;
						CodeGuidelinesDetection codeGuidelinesDetection;
						CheckConfig checkConfig;
					};
					std::vector<std::string> allowMergeUserIds;
					std::vector<std::string> allowPushRoles;
					std::string branch;
					std::vector<std::string> allowPushUserIds;
					TestSettingDTO testSettingDTO;
					long id;
					std::vector<std::string> allowMergeRoles;
					MergeRequestSetting mergeRequestSetting;
				};


				UpdateProtectedBranchesResult();
				explicit UpdateProtectedBranchesResult(const std::string &payload);
				~UpdateProtectedBranchesResult();
				std::string getRequestId()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_UPDATEPROTECTEDBRANCHESRESULT_H_