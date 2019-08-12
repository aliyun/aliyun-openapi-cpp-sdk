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

#ifndef ALIBABACLOUD_LIVE_MODEL_SETCASTERCONFIGREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_SETCASTERCONFIGREQUEST_H_

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
			class ALIBABACLOUD_LIVE_EXPORT SetCasterConfigRequest : public RpcServiceRequest
			{

			public:
				SetCasterConfigRequest();
				~SetCasterConfigRequest();

				std::string getSideOutputUrl()const;
				void setSideOutputUrl(const std::string& sideOutputUrl);
				std::string getCasterId()const;
				void setCasterId(const std::string& casterId);
				int getChannelEnable()const;
				void setChannelEnable(int channelEnable);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				int getProgramEffect()const;
				void setProgramEffect(int programEffect);
				std::string getProgramName()const;
				void setProgramName(const std::string& programName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getRecordConfig()const;
				void setRecordConfig(const std::string& recordConfig);
				std::string getUrgentMaterialId()const;
				void setUrgentMaterialId(const std::string& urgentMaterialId);
				std::string getTranscodeConfig()const;
				void setTranscodeConfig(const std::string& transcodeConfig);
				float getDelay()const;
				void setDelay(float delay);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getCasterName()const;
				void setCasterName(const std::string& casterName);
				std::string getCallbackUrl()const;
				void setCallbackUrl(const std::string& callbackUrl);

            private:
				std::string sideOutputUrl_;
				std::string casterId_;
				int channelEnable_;
				std::string domainName_;
				int programEffect_;
				std::string programName_;
				long ownerId_;
				std::string recordConfig_;
				std::string urgentMaterialId_;
				std::string transcodeConfig_;
				float delay_;
				std::string regionId_;
				std::string casterName_;
				std::string callbackUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_SETCASTERCONFIGREQUEST_H_