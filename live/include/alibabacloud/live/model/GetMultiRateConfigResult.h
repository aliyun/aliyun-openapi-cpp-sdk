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

#ifndef ALIBABACLOUD_LIVE_MODEL_GETMULTIRATECONFIGRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_GETMULTIRATECONFIGRESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT GetMultiRateConfigResult : public ServiceResult
			{
			public:
				struct Detail
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
					int audioRate;
					std::string audioCodec;
					int videoBitrate;
				};


				GetMultiRateConfigResult();
				explicit GetMultiRateConfigResult(const std::string &payload);
				~GetMultiRateConfigResult();
				std::string getApp()const;
				std::string getMessage()const;
				std::string getIsLazy()const;
				std::string getIsTimeAlign()const;
				std::string getStream()const;
				std::string getDomain()const;
				std::string getAvFormat()const;
				std::vector<Detail> getTemplatesInfo()const;
				int getCode()const;
				std::string getGroupId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string app_;
				std::string message_;
				std::string isLazy_;
				std::string isTimeAlign_;
				std::string stream_;
				std::string domain_;
				std::string avFormat_;
				std::vector<Detail> templatesInfo_;
				int code_;
				std::string groupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_GETMULTIRATECONFIGRESULT_H_