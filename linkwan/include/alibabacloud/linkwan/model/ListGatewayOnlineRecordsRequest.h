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

#ifndef ALIBABACLOUD_LINKWAN_MODEL_LISTGATEWAYONLINERECORDSREQUEST_H_
#define ALIBABACLOUD_LINKWAN_MODEL_LISTGATEWAYONLINERECORDSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/linkwan/LinkWANExport.h>

namespace AlibabaCloud
{
	namespace LinkWAN
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKWAN_EXPORT ListGatewayOnlineRecordsRequest : public RpcServiceRequest
			{

			public:
				ListGatewayOnlineRecordsRequest();
				~ListGatewayOnlineRecordsRequest();

				long getLimit()const;
				void setLimit(long limit);
				long getOffSet()const;
				void setOffSet(long offSet);
				std::string getGwEui()const;
				void setGwEui(const std::string& gwEui);
				bool getAscending()const;
				void setAscending(bool ascending);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				std::string getSortingField()const;
				void setSortingField(const std::string& sortingField);

            private:
				long limit_;
				long offSet_;
				std::string gwEui_;
				bool ascending_;
				std::string apiProduct_;
				std::string apiRevision_;
				std::string sortingField_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKWAN_MODEL_LISTGATEWAYONLINERECORDSREQUEST_H_