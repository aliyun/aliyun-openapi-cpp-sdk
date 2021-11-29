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

#ifndef ALIBABACLOUD_LIVE_MODEL_UPDATELIVESTREAMMONITORREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_UPDATELIVESTREAMMONITORREQUEST_H_

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
			class ALIBABACLOUD_LIVE_EXPORT UpdateLiveStreamMonitorRequest : public RpcServiceRequest
			{

			public:
				UpdateLiveStreamMonitorRequest();
				~UpdateLiveStreamMonitorRequest();

				std::string getMonitorId()const;
				void setMonitorId(const std::string& monitorId);
				std::string getMonitorName()const;
				void setMonitorName(const std::string& monitorName);
				std::string getStream()const;
				void setStream(const std::string& stream);
				std::string getOutputTemplate()const;
				void setOutputTemplate(const std::string& outputTemplate);
				std::string getApp()const;
				void setApp(const std::string& app);
				std::string getInputList()const;
				void setInputList(const std::string& inputList);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDomain()const;
				void setDomain(const std::string& domain);

            private:
				std::string monitorId_;
				std::string monitorName_;
				std::string stream_;
				std::string outputTemplate_;
				std::string app_;
				std::string inputList_;
				long ownerId_;
				std::string domain_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_UPDATELIVESTREAMMONITORREQUEST_H_