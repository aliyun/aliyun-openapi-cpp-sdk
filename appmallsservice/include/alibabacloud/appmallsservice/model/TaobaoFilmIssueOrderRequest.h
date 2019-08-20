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

#ifndef ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMISSUEORDERREQUEST_H_
#define ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMISSUEORDERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/appmallsservice/AppMallsServiceExport.h>

namespace AlibabaCloud
{
	namespace AppMallsService
	{
		namespace Model
		{
			class ALIBABACLOUD_APPMALLSSERVICE_EXPORT TaobaoFilmIssueOrderRequest : public RpcServiceRequest
			{

			public:
				TaobaoFilmIssueOrderRequest();
				~TaobaoFilmIssueOrderRequest();

				std::string getLockSeatApplyKey()const;
				void setLockSeatApplyKey(const std::string& lockSeatApplyKey);
				std::string getExtUserId()const;
				void setExtUserId(const std::string& extUserId);
				std::string getExtOrderId()const;
				void setExtOrderId(const std::string& extOrderId);
				long getTotalPrice()const;
				void setTotalPrice(long totalPrice);
				std::string getParamsJson()const;
				void setParamsJson(const std::string& paramsJson);

            private:
				std::string lockSeatApplyKey_;
				std::string extUserId_;
				std::string extOrderId_;
				long totalPrice_;
				std::string paramsJson_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_APPMALLSSERVICE_MODEL_TAOBAOFILMISSUEORDERREQUEST_H_