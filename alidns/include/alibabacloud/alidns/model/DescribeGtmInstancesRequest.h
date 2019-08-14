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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCESREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeGtmInstancesRequest : public RpcServiceRequest
			{

			public:
				DescribeGtmInstancesRequest();
				~DescribeGtmInstancesRequest();

				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getKeyword()const;
				void setKeyword(const std::string& keyword);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

            private:
				std::string resourceGroupId_;
				std::string userClientIp_;
				int pageSize_;
				std::string lang_;
				std::string keyword_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMINSTANCESREQUEST_H_