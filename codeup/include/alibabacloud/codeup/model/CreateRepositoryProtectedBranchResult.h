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

#ifndef ALIBABACLOUD_CODEUP_MODEL_CREATEREPOSITORYPROTECTEDBRANCHRESULT_H_
#define ALIBABACLOUD_CODEUP_MODEL_CREATEREPOSITORYPROTECTEDBRANCHRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/codeup/CodeupExport.h>

namespace AlibabaCloud
{
	namespace Codeup
	{
		namespace Model
		{
			class ALIBABACLOUD_CODEUP_EXPORT CreateRepositoryProtectedBranchResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct MergeRequestSetting
					{
						bool required;
						std::vector<std::string> defaultAssignees;
						std::vector<std::string> allowMergeRequestRoles;
						bool isResetApprovalWhenNewPush;
						bool allowSelfApproval;
						int minimualApproval;
						bool isRequireDiscussionProcessed;
						std::string mergeRequestMode;
					};
					struct TestSetting
					{
						struct CodingGuidelinesDetection
						{
							std::string message;
							bool enabled;
						};
						struct SensitiveInfoDetection
						{
							std::string message;
							bool enabled;
						};
						struct CheckConfig
						{
							struct CheckItemsItem
							{
								bool required;
								std::string name;
							};
							std::vector<CheckItemsItem> checkItems;
						};
						SensitiveInfoDetection sensitiveInfoDetection;
						CodingGuidelinesDetection codingGuidelinesDetection;
						bool required;
						CheckConfig checkConfig;
					};
					std::vector<std::string> allowPushRoles;
					std::string branch;
					long id;
					TestSetting testSetting;
					std::vector<std::string> allowMergeRoles;
					MergeRequestSetting mergeRequestSetting;
				};


				CreateRepositoryProtectedBranchResult();
				explicit CreateRepositoryProtectedBranchResult(const std::string &payload);
				~CreateRepositoryProtectedBranchResult();
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CODEUP_MODEL_CREATEREPOSITORYPROTECTEDBRANCHRESULT_H_