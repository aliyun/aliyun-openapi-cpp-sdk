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

#ifndef ALIBABACLOUD_VOD_MODEL_SUBMITDETECTIONJOBREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_SUBMITDETECTIONJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT SubmitDetectionJobRequest : public RpcServiceRequest
			{

			public:
				SubmitDetectionJobRequest();
				~SubmitDetectionJobRequest();

				std::string getWhiteListUrls()const;
				void setWhiteListUrls(const std::string& whiteListUrls);
				std::string getCopyrightEndTime()const;
				void setCopyrightEndTime(const std::string& copyrightEndTime);
				std::string getCopyrightStatus()const;
				void setCopyrightStatus(const std::string& copyrightStatus);
				std::string getCopyrightBeginTime()const;
				void setCopyrightBeginTime(const std::string& copyrightBeginTime);
				int getDuration()const;
				void setDuration(int duration);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getVideoId()const;
				void setVideoId(const std::string& videoId);
				std::string getBeginTime()const;
				void setBeginTime(const std::string& beginTime);
				bool getShortVideo()const;
				void setShortVideo(bool shortVideo);
				std::string getTemplateId()const;
				void setTemplateId(const std::string& templateId);
				std::string getCopyrightFile()const;
				void setCopyrightFile(const std::string& copyrightFile);

            private:
				std::string whiteListUrls_;
				std::string copyrightEndTime_;
				std::string copyrightStatus_;
				std::string copyrightBeginTime_;
				int duration_;
				std::string endTime_;
				std::string videoId_;
				std::string beginTime_;
				bool shortVideo_;
				std::string templateId_;
				std::string copyrightFile_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_SUBMITDETECTIONJOBREQUEST_H_