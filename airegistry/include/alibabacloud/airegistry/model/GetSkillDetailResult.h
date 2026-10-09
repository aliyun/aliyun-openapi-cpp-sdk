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

#ifndef ALIBABACLOUD_AIREGISTRY_MODEL_GETSKILLDETAILRESULT_H_
#define ALIBABACLOUD_AIREGISTRY_MODEL_GETSKILLDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/airegistry/AIRegistryExport.h>

namespace AlibabaCloud
{
	namespace AIRegistry
	{
		namespace Model
		{
			class ALIBABACLOUD_AIREGISTRY_EXPORT GetSkillDetailResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Version
					{
						std::string status;
						std::string description;
						std::string publishPipelineInfo;
						std::string version;
						long createTime;
						long updateTime;
						std::string author;
						std::string commitMsg;
						long downloadCount;
					};
					std::string draftMode;
					std::string editingVersion;
					std::string owner;
					std::string description;
					std::string bizTags;
					std::string labels;
					std::string from;
					std::string name;
					std::vector<Version> versions;
					std::string scope;
					long updateTime;
					bool enable;
					std::string namespaceId;
					std::string reviewingVersion;
					int onlineCnt;
					bool writeable;
					long downloadCount;
				};


				GetSkillDetailResult();
				explicit GetSkillDetailResult(const std::string &payload);
				~GetSkillDetailResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREGISTRY_MODEL_GETSKILLDETAILRESULT_H_