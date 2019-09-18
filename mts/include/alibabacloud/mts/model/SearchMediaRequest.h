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

#ifndef ALIBABACLOUD_MTS_MODEL_SEARCHMEDIAREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_SEARCHMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT SearchMediaRequest : public RpcServiceRequest
			{

			public:
				SearchMediaRequest();
				~SearchMediaRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getTitle()const;
				void setTitle(const std::string& title);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getCateId()const;
				void setCateId(const std::string& cateId);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getFrom()const;
				void setFrom(const std::string& from);
				std::string getTag()const;
				void setTag(const std::string& tag);
				std::string getKeyWord()const;
				void setKeyWord(const std::string& keyWord);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSortBy()const;
				void setSortBy(const std::string& sortBy);
				std::string getTo()const;
				void setTo(const std::string& to);

            private:
				long resourceOwnerId_;
				std::string description_;
				std::string title_;
				long pageNumber_;
				std::string accessKeyId_;
				std::string cateId_;
				long pageSize_;
				std::string from_;
				std::string tag_;
				std::string keyWord_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string sortBy_;
				std::string to_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_SEARCHMEDIAREQUEST_H_