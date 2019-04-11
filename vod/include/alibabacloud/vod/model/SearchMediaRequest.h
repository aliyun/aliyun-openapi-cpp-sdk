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

#ifndef ALIBABACLOUD_VOD_MODEL_SEARCHMEDIAREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_SEARCHMEDIAREQUEST_H_

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
			class ALIBABACLOUD_VOD_EXPORT SearchMediaRequest : public RpcServiceRequest
			{

			public:
				SearchMediaRequest();
				~SearchMediaRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getMatch()const;
				void setMatch(const std::string& match);
				std::string getSessionId()const;
				void setSessionId(const std::string& sessionId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getScrollToken()const;
				void setScrollToken(const std::string& scrollToken);
				int getPageNo()const;
				void setPageNo(int pageNo);
				std::string getSearchType()const;
				void setSearchType(const std::string& searchType);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getSortBy()const;
				void setSortBy(const std::string& sortBy);
				std::string getResultTypes()const;
				void setResultTypes(const std::string& resultTypes);
				std::string getFields()const;
				void setFields(const std::string& fields);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string match_;
				std::string sessionId_;
				long ownerId_;
				std::string scrollToken_;
				int pageNo_;
				std::string searchType_;
				int pageSize_;
				std::string sortBy_;
				std::string resultTypes_;
				std::string fields_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_SEARCHMEDIAREQUEST_H_