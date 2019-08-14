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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYRESOURCEPACKAGEINSTANCESREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYRESOURCEPACKAGEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryResourcePackageInstancesRequest : public RpcServiceRequest
			{

			public:
				QueryResourcePackageInstancesRequest();
				~QueryResourcePackageInstancesRequest();

				std::string getExpiryTimeEnd()const;
				void setExpiryTimeEnd(const std::string& expiryTimeEnd);
				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getExpiryTimeStart()const;
				void setExpiryTimeStart(const std::string& expiryTimeStart);
				int getPageNum()const;
				void setPageNum(int pageNum);

            private:
				std::string expiryTimeEnd_;
				std::string productCode_;
				int pageSize_;
				long ownerId_;
				std::string expiryTimeStart_;
				int pageNum_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYRESOURCEPACKAGEINSTANCESREQUEST_H_