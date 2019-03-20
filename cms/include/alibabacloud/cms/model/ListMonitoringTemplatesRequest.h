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

#ifndef ALIBABACLOUD_CMS_MODEL_LISTMONITORINGTEMPLATESREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_LISTMONITORINGTEMPLATESREQUEST_H_

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
			class ALIBABACLOUD_CMS_EXPORT ListMonitoringTemplatesRequest : public RpcServiceRequest
			{

			public:
				ListMonitoringTemplatesRequest();
				~ListMonitoringTemplatesRequest();

				bool getTotal()const;
				void setTotal(bool total);
				std::string getName()const;
				void setName(const std::string& name);
				long getPageSize()const;
				void setPageSize(long pageSize);
				long getId()const;
				void setId(long id);
				bool getHistory()const;
				void setHistory(bool history);
				std::string getKeyword()const;
				void setKeyword(const std::string& keyword);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);

            private:
				bool total_;
				std::string name_;
				long pageSize_;
				long id_;
				bool history_;
				std::string keyword_;
				long pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_LISTMONITORINGTEMPLATESREQUEST_H_