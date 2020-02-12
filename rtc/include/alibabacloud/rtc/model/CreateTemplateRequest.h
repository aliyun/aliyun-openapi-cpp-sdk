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

#ifndef ALIBABACLOUD_RTC_MODEL_CREATETEMPLATEREQUEST_H_
#define ALIBABACLOUD_RTC_MODEL_CREATETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rtc/RtcExport.h>

namespace AlibabaCloud
{
	namespace Rtc
	{
		namespace Model
		{
			class ALIBABACLOUD_RTC_EXPORT CreateTemplateRequest : public RpcServiceRequest
			{
			public:
				struct LiveConfig
				{
					std::string domainName;
					std::string appName;
				};
				struct RecordConfig
				{
					std::string storageType;
					int fileFormat;
					std::string ossEndPoint;
					std::string ossBucket;
					int vodTransCodeGroupId;
				};
				struct LayOut
				{
					std::string color;
					int cutMode;
					int layOutId;
				};

			public:
				CreateTemplateRequest();
				~CreateTemplateRequest();

				int getServiceMode()const;
				void setServiceMode(int serviceMode);
				std::vector<LiveConfig> getLiveConfig()const;
				void setLiveConfig(const std::vector<LiveConfig>& liveConfig);
				int getMediaConfig()const;
				void setMediaConfig(int mediaConfig);
				int getMaxMixStreamCount()const;
				void setMaxMixStreamCount(int maxMixStreamCount);
				std::vector<RecordConfig> getRecordConfig()const;
				void setRecordConfig(const std::vector<RecordConfig>& recordConfig);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<LayOut> getLayOut()const;
				void setLayOut(const std::vector<LayOut>& layOut);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getCallBack()const;
				void setCallBack(const std::string& callBack);
				int getMixMode()const;
				void setMixMode(int mixMode);

            private:
				int serviceMode_;
				std::vector<LiveConfig> liveConfig_;
				int mediaConfig_;
				int maxMixStreamCount_;
				std::vector<RecordConfig> recordConfig_;
				long ownerId_;
				std::vector<LayOut> layOut_;
				std::string appId_;
				std::string callBack_;
				int mixMode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RTC_MODEL_CREATETEMPLATEREQUEST_H_