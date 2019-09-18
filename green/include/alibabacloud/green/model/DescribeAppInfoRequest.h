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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEAPPINFOREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEAPPINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT DescribeAppInfoRequest : public RpcServiceRequest
			{

			public:
				DescribeAppInfoRequest();
				~DescribeAppInfoRequest();

				int getTotalCount()const;
				void setTotalCount(int totalCount);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getPlatform()const;
				void setPlatform(const std::string& platform);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				int totalCount_;
				int currentPage_;
				std::string platform_;
				std::string sourceIp_;
				int pageSize_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEAPPINFOREQUEST_H_