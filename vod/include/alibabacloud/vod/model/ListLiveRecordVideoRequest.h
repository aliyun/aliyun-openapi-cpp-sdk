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

#ifndef ALIBABACLOUD_VOD_MODEL_LISTLIVERECORDVIDEOREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_LISTLIVERECORDVIDEOREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT ListLiveRecordVideoRequest : public RpcServiceRequest
			{

			public:
				ListLiveRecordVideoRequest();
				~ListLiveRecordVideoRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				int getPageNo()const;
				void setPageNo(int pageNo);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getSortBy()const;
				void setSortBy(const std::string& sortBy);
				std::string getStreamName()const;
				void setStreamName(const std::string& streamName);
				std::string getQueryType()const;
				void setQueryType(const std::string& queryType);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string domainName_;
				std::string endTime_;
				std::string startTime_;
				long ownerId_;
				std::string appName_;
				int pageNo_;
				int pageSize_;
				std::string sortBy_;
				std::string streamName_;
				std::string queryType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_LISTLIVERECORDVIDEOREQUEST_H_