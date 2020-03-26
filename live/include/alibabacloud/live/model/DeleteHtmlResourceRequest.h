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

#ifndef ALIBABACLOUD_LIVE_MODEL_DELETEHTMLRESOURCEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DELETEHTMLRESOURCEREQUEST_H_

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
			class ALIBABACLOUD_LIVE_EXPORT DeleteHtmlResourceRequest : public RpcServiceRequest
			{

			public:
				DeleteHtmlResourceRequest();
				~DeleteHtmlResourceRequest();

				std::string getHtmlUrl()const;
				void setHtmlUrl(const std::string& htmlUrl);
				std::string getCasterId()const;
				void setCasterId(const std::string& casterId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getHtmlResourceId()const;
				void setHtmlResourceId(const std::string& htmlResourceId);

            private:
				std::string htmlUrl_;
				std::string casterId_;
				long ownerId_;
				std::string htmlResourceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DELETEHTMLRESOURCEREQUEST_H_