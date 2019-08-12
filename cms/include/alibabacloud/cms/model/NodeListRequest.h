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

#ifndef ALIBABACLOUD_CMS_MODEL_NODELISTREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_NODELISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT NodeListRequest : public RpcServiceRequest
			{

			public:
				NodeListRequest();
				~NodeListRequest();

				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				std::string getInstanceIds()const;
				void setInstanceIds(const std::string& instanceIds);
				std::string getInstanceRegionId()const;
				void setInstanceRegionId(const std::string& instanceRegionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getKeyWord()const;
				void setKeyWord(const std::string& keyWord);
				long getUserId()const;
				void setUserId(long userId);
				std::string getSerialNumbers()const;
				void setSerialNumbers(const std::string& serialNumbers);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string hostName_;
				std::string instanceIds_;
				std::string instanceRegionId_;
				int pageSize_;
				std::string keyWord_;
				long userId_;
				std::string serialNumbers_;
				int pageNumber_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_NODELISTREQUEST_H_