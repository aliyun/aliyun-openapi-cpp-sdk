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

#ifndef ALIBABACLOUD_VS_MODEL_RESUMEVSSTREAMREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_RESUMEVSSTREAMREQUEST_H_

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
			class ALIBABACLOUD_VS_EXPORT ResumeVsStreamRequest : public RpcServiceRequest
			{

			public:
				ResumeVsStreamRequest();
				~ResumeVsStreamRequest();

				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string getStreamName()const;
				void setStreamName(const std::string& streamName);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getControlStreamAction()const;
				void setControlStreamAction(const std::string& controlStreamAction);
				std::string getLiveStreamType()const;
				void setLiveStreamType(const std::string& liveStreamType);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string appName_;
				std::string streamName_;
				std::string showLog_;
				std::string controlStreamAction_;
				std::string liveStreamType_;
				std::string domainName_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_RESUMEVSSTREAMREQUEST_H_