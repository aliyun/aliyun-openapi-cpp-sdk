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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_LISTPODSREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_LISTPODSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT ListPodsRequest : public RpcServiceRequest
			{

			public:
				ListPodsRequest();
				~ListPodsRequest();

				std::vector<int> getStatusList()const;
				void setStatusList(const std::vector<int>& statusList);
				long getDeployOrderId()const;
				void setDeployOrderId(long deployOrderId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::vector<int> getResultList()const;
				void setResultList(const std::vector<int>& resultList);

            private:
				std::vector<int> statusList_;
				long deployOrderId_;
				int pageSize_;
				int pageNumber_;
				std::vector<int> resultList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_LISTPODSREQUEST_H_