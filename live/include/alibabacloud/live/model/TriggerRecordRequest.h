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

#ifndef ALIBABACLOUD_LIVE_MODEL_TRIGGERRECORDREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_TRIGGERRECORDREQUEST_H_

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
			class ALIBABACLOUD_LIVE_EXPORT TriggerRecordRequest : public RpcServiceRequest
			{

			public:
				TriggerRecordRequest();
				~TriggerRecordRequest();

				int getSource()const;
				void setSource(int source);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string getStreamName()const;
				void setStreamName(const std::string& streamName);
				std::string getAvMode()const;
				void setAvMode(const std::string& avMode);
				std::string getStorePath()const;
				void setStorePath(const std::string& storePath);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getForceTranscode()const;
				void setForceTranscode(const std::string& forceTranscode);
				bool getNeedRecord()const;
				void setNeedRecord(bool needRecord);

            private:
				int source_;
				std::string userData_;
				std::string appName_;
				std::string streamName_;
				std::string avMode_;
				std::string storePath_;
				std::string domainName_;
				long ownerId_;
				std::string forceTranscode_;
				bool needRecord_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_TRIGGERRECORDREQUEST_H_