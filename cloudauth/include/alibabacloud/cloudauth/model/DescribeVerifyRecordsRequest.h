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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYRECORDSREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribeVerifyRecordsRequest : public RpcServiceRequest
			{

			public:
				DescribeVerifyRecordsRequest();
				~DescribeVerifyRecordsRequest();

				std::string getStatusList()const;
				void setStatusList(const std::string& statusList);
				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getQueryId()const;
				void setQueryId(const std::string& queryId);
				std::string getBizType()const;
				void setBizType(const std::string& bizType);
				std::string getIdCardNum()const;
				void setIdCardNum(const std::string& idCardNum);
				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);

            private:
				std::string statusList_;
				std::string startDate_;
				std::string sourceIp_;
				int pageSize_;
				int totalCount_;
				int currentPage_;
				std::string queryId_;
				std::string bizType_;
				std::string idCardNum_;
				std::string endDate_;
				std::string bizId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYRECORDSREQUEST_H_