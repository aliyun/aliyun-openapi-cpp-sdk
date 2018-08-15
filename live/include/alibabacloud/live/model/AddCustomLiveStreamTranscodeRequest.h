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

#ifndef ALIBABACLOUD_LIVE_MODEL_ADDCUSTOMLIVESTREAMTRANSCODEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_ADDCUSTOMLIVESTREAMTRANSCODEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT AddCustomLiveStreamTranscodeRequest : public RpcServiceRequest
			{

			public:
				AddCustomLiveStreamTranscodeRequest();
				~AddCustomLiveStreamTranscodeRequest();

				std::string getApp()const;
				void setApp(const std::string& app);
				std::string get_Template()const;
				void set_Template(const std::string& _template);
				int getProfile()const;
				void setProfile(int profile);
				int getFPS()const;
				void setFPS(int fPS);
				std::string getGop()const;
				void setGop(const std::string& gop);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTemplateType()const;
				void setTemplateType(const std::string& templateType);
				int getAudioBitrate()const;
				void setAudioBitrate(int audioBitrate);
				std::string getDomain()const;
				void setDomain(const std::string& domain);
				int getWidth()const;
				void setWidth(int width);
				int getVideoBitrate()const;
				void setVideoBitrate(int videoBitrate);
				int getHeight()const;
				void setHeight(int height);

            private:
				std::string app_;
				std::string _template_;
				int profile_;
				int fPS_;
				std::string gop_;
				long ownerId_;
				std::string templateType_;
				int audioBitrate_;
				std::string domain_;
				int width_;
				int videoBitrate_;
				int height_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_ADDCUSTOMLIVESTREAMTRANSCODEREQUEST_H_