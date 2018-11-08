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

#ifndef ALIBABACLOUD_RTC_MODEL_GETTEMPLATEINFORESULT_H_
#define ALIBABACLOUD_RTC_MODEL_GETTEMPLATEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rtc/RtcExport.h>

namespace AlibabaCloud
{
	namespace Rtc
	{
		namespace Model
		{
			class ALIBABACLOUD_RTC_EXPORT GetTemplateInfoResult : public ServiceResult
			{
			public:
				struct LayOut
				{
					int layoutID;
					std::string color;
					int cutmode;
				};
				struct RecordConfig
				{
					std::string storageType;
					std::string ossEndpoint;
					std::string ossBucket;
					int fileFormat;
					int vodTranscodeGroupId;
				};
				struct LiveConfig
				{
					std::string domainName;
					std::string appName;
				};


				GetTemplateInfoResult();
				explicit GetTemplateInfoResult(const std::string &payload);
				~GetTemplateInfoResult();
				std::string getCallBack()const;
				int getMixMode()const;
				LayOut getLayOut()const;
				int getMaxMixStreamCount()const;
				LiveConfig getLiveConfig()const;
				int getServiceMode()const;
				int getMediaConfig()const;
				RecordConfig getRecordConfig()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string callBack_;
				int mixMode_;
				LayOut layOut_;
				int maxMixStreamCount_;
				LiveConfig liveConfig_;
				int serviceMode_;
				int mediaConfig_;
				RecordConfig recordConfig_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RTC_MODEL_GETTEMPLATEINFORESULT_H_