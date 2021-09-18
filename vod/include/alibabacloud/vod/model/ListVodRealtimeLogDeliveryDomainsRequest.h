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

#ifndef ALIBABACLOUD_VOD_MODEL_LISTVODREALTIMELOGDELIVERYDOMAINSREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_LISTVODREALTIMELOGDELIVERYDOMAINSREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT ListVodRealtimeLogDeliveryDomainsRequest : public RpcServiceRequest
			{

			public:
				ListVodRealtimeLogDeliveryDomainsRequest();
				~ListVodRealtimeLogDeliveryDomainsRequest();

				std::string getProject()const;
				void setProject(const std::string& project);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getRegion()const;
				void setRegion(const std::string& region);
				std::string getLogstore()const;
				void setLogstore(const std::string& logstore);

            private:
				std::string project_;
				long ownerId_;
				std::string region_;
				std::string logstore_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_LISTVODREALTIMELOGDELIVERYDOMAINSREQUEST_H_