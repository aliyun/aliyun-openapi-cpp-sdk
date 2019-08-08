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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMLOGSREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMLOGSREQUEST_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeGtmLogsRequest : public RpcServiceRequest
			{

			public:
				DescribeGtmLogsRequest();
				~DescribeGtmLogsRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getKeyword()const;
				void setKeyword(const std::string& keyword);
				long getStartTimestamp()const;
				void setStartTimestamp(long startTimestamp);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				long getEndTimestamp()const;
				void setEndTimestamp(long endTimestamp);

            private:
				std::string instanceId_;
				std::string userClientIp_;
				int pageSize_;
				std::string lang_;
				std::string keyword_;
				long startTimestamp_;
				int pageNumber_;
				long endTimestamp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEGTMLOGSREQUEST_H_