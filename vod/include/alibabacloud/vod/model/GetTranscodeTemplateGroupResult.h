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

#ifndef ALIBABACLOUD_VOD_MODEL_GETTRANSCODETEMPLATEGROUPRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETTRANSCODETEMPLATEGROUPRESULT_H_

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
			class ALIBABACLOUD_VOD_EXPORT GetTranscodeTemplateGroupResult : public ServiceResult
			{
			public:
				struct TranscodeTemplateGroup
				{
					struct TranscodeTemplate
					{
						std::string tailSlateList;
						std::string packageSetting;
						std::string rotate;
						std::string userData;
						std::string definition;
						std::string traceMark;
						std::string transcodeFileRegular;
						std::vector<std::string> watermarkIds;
						std::string encryptSetting;
						std::string clip;
						std::string type;
						std::string container;
						std::string transcodeTemplateId;
						std::string transConfig;
						std::string video;
						std::string templateName;
						std::string audio;
						std::string subtitleList;
						std::string muxConfig;
						std::string openingList;
						std::string copyrightMark;
					};
					std::string isDefault;
					std::string modifyTime;
					std::string locked;
					std::string appId;
					std::string transcodeMode;
					std::string transcodeTemplateGroupId;
					std::vector<TranscodeTemplate> transcodeTemplateList;
					std::string creationTime;
					std::string name;
				};


				GetTranscodeTemplateGroupResult();
				explicit GetTranscodeTemplateGroupResult(const std::string &payload);
				~GetTranscodeTemplateGroupResult();
				TranscodeTemplateGroup getTranscodeTemplateGroup()const;

			protected:
				void parse(const std::string &payload);
			private:
				TranscodeTemplateGroup transcodeTemplateGroup_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETTRANSCODETEMPLATEGROUPRESULT_H_