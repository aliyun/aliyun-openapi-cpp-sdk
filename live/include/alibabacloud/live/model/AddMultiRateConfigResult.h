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

#ifndef ALIBABACLOUD_LIVE_MODEL_ADDMULTIRATECONFIGRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_ADDMULTIRATECONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT AddMultiRateConfigResult : public ServiceResult
			{
			public:
				struct FailedTemplates
				{
					std::string _template;
					int fps;
					std::string gop;
					std::string templateType;
					int profile;
					int bandWidth;
					int audioBitrate;
					std::string audioProfile;
					int height;
					int audioChannelNum;
					int width;
					std::string audioCodec;
					int audioRate;
					int videoBitrate;
				};


				AddMultiRateConfigResult();
				explicit AddMultiRateConfigResult(const std::string &payload);
				~AddMultiRateConfigResult();
				std::string getMessage()const;
				std::vector<FailedTemplates> getBody()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<FailedTemplates> body_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_ADDMULTIRATECONFIGRESULT_H_