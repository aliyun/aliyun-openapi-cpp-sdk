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

#ifndef ALIBABACLOUD_VOD_MODEL_GETAUDITHISTORYREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_GETAUDITHISTORYREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT GetAuditHistoryRequest : public RpcServiceRequest
			{

			public:
				GetAuditHistoryRequest();
				~GetAuditHistoryRequest();

				long getPageNo()const;
				void setPageNo(long pageNo);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getVideoId()const;
				void setVideoId(const std::string& videoId);
				std::string getSortBy()const;
				void setSortBy(const std::string& sortBy);

            private:
				long pageNo_;
				long pageSize_;
				std::string videoId_;
				std::string sortBy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETAUDITHISTORYREQUEST_H_