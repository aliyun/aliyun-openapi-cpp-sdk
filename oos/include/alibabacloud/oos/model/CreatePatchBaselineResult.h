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

#ifndef ALIBABACLOUD_OOS_MODEL_CREATEPATCHBASELINERESULT_H_
#define ALIBABACLOUD_OOS_MODEL_CREATEPATCHBASELINERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT CreatePatchBaselineResult : public ServiceResult
			{
			public:
				struct PatchBaseline
				{
					struct TagsItem
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string description;
					std::string createdBy;
					std::string updatedDate;
					std::string operationSystem;
					std::string approvalRules;
					std::vector<std::string> sources;
					std::string name;
					std::vector<std::string> rejectedPatches;
					std::string rejectedPatchesAction;
					std::vector<std::string> approvedPatches;
					std::string updatedBy;
					std::string createdDate;
					bool approvedPatchesEnableNonSecurity;
					std::string id;
					std::vector<TagsItem> tags;
					std::string shareType;
				};


				CreatePatchBaselineResult();
				explicit CreatePatchBaselineResult(const std::string &payload);
				~CreatePatchBaselineResult();
				PatchBaseline getPatchBaseline()const;

			protected:
				void parse(const std::string &payload);
			private:
				PatchBaseline patchBaseline_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_CREATEPATCHBASELINERESULT_H_