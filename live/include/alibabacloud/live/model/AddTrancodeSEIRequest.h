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

#ifndef ALIBABACLOUD_LIVE_MODEL_ADDTRANCODESEIREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_ADDTRANCODESEIREQUEST_H_

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
			class ALIBABACLOUD_LIVE_EXPORT AddTrancodeSEIRequest : public RpcServiceRequest
			{

			public:
				AddTrancodeSEIRequest();
				~AddTrancodeSEIRequest();

				int getDelay()const;
				void setDelay(int delay);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getRepeat()const;
				void setRepeat(int repeat);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getPattern()const;
				void setPattern(const std::string& pattern);
				std::string getText()const;
				void setText(const std::string& text);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getStreamName()const;
				void setStreamName(const std::string& streamName);

            private:
				int delay_;
				std::string appName_;
				std::string regionId_;
				int repeat_;
				std::string domainName_;
				std::string pattern_;
				std::string text_;
				long ownerId_;
				std::string streamName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_ADDTRANCODESEIREQUEST_H_