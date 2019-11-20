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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEBATCHRESULTDETAILREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEBATCHRESULTDETAILREQUEST_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeBatchResultDetailRequest : public RpcServiceRequest
			{

			public:
				DescribeBatchResultDetailRequest();
				~DescribeBatchResultDetailRequest();

				std::string getBatchType()const;
				void setBatchType(const std::string& batchType);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				long getTaskId()const;
				void setTaskId(long taskId);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string batchType_;
				int pageNumber_;
				std::string userClientIp_;
				int pageSize_;
				std::string lang_;
				long taskId_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEBATCHRESULTDETAILREQUEST_H_