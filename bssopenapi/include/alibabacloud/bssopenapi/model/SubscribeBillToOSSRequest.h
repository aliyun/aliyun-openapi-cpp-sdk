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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_SUBSCRIBEBILLTOOSSREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_SUBSCRIBEBILLTOOSSREQUEST_H_

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
			class ALIBABACLOUD_BSSOPENAPI_EXPORT SubscribeBillToOSSRequest : public RpcServiceRequest
			{

			public:
				SubscribeBillToOSSRequest();
				~SubscribeBillToOSSRequest();

				long getBucketOwnerId()const;
				void setBucketOwnerId(long bucketOwnerId);
				std::string getSubscribeType()const;
				void setSubscribeType(const std::string& subscribeType);
				std::string getSubscribeBucket()const;
				void setSubscribeBucket(const std::string& subscribeBucket);
				std::string getMultAccountRelSubscribe()const;
				void setMultAccountRelSubscribe(const std::string& multAccountRelSubscribe);

            private:
				long bucketOwnerId_;
				std::string subscribeType_;
				std::string subscribeBucket_;
				std::string multAccountRelSubscribe_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_SUBSCRIBEBILLTOOSSREQUEST_H_