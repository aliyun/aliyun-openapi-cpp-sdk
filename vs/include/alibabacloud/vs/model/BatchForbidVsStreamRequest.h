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

#ifndef ALIBABACLOUD_VS_MODEL_BATCHFORBIDVSSTREAMREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_BATCHFORBIDVSSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT BatchForbidVsStreamRequest : public RpcServiceRequest
			{

			public:
				BatchForbidVsStreamRequest();
				~BatchForbidVsStreamRequest();

				std::string getChannel()const;
				void setChannel(const std::string& channel);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getControlStreamAction()const;
				void setControlStreamAction(const std::string& controlStreamAction);
				std::string getResumeTime()const;
				void setResumeTime(const std::string& resumeTime);
				std::string getLiveStreamType()const;
				void setLiveStreamType(const std::string& liveStreamType);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getOneshot()const;
				void setOneshot(const std::string& oneshot);

            private:
				std::string channel_;
				std::string showLog_;
				std::string controlStreamAction_;
				std::string resumeTime_;
				std::string liveStreamType_;
				std::string domainName_;
				long ownerId_;
				std::string oneshot_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_BATCHFORBIDVSSTREAMREQUEST_H_