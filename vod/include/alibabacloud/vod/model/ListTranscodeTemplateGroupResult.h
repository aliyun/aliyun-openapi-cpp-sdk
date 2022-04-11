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

#ifndef ALIBABACLOUD_VOD_MODEL_LISTTRANSCODETEMPLATEGROUPRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_LISTTRANSCODETEMPLATEGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT ListTranscodeTemplateGroupResult : public ServiceResult
			{
			public:
				struct TranscodeTemplateGroup
				{
					std::string isDefault;
					std::string modifyTime;
					std::string locked;
					std::string appId;
					std::string transcodeMode;
					std::string transcodeTemplateGroupId;
					std::string creationTime;
					std::string name;
				};


				ListTranscodeTemplateGroupResult();
				explicit ListTranscodeTemplateGroupResult(const std::string &payload);
				~ListTranscodeTemplateGroupResult();
				std::vector<TranscodeTemplateGroup> getTranscodeTemplateGroupList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<TranscodeTemplateGroup> transcodeTemplateGroupList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_LISTTRANSCODETEMPLATEGROUPRESULT_H_