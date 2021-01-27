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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEWHITELISTREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEWHITELISTREQUEST_H_

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
			class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribeWhitelistRequest : public RpcServiceRequest
			{

			public:
				DescribeWhitelistRequest();
				~DescribeWhitelistRequest();

				std::string getValidEndDate()const;
				void setValidEndDate(const std::string& validEndDate);
				std::string getValid()const;
				void setValid(const std::string& valid);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getBizType()const;
				void setBizType(const std::string& bizType);
				std::string getIdCardNum()const;
				void setIdCardNum(const std::string& idCardNum);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getValidStartDate()const;
				void setValidStartDate(const std::string& validStartDate);

            private:
				std::string validEndDate_;
				std::string valid_;
				std::string sourceIp_;
				int pageSize_;
				std::string lang_;
				int currentPage_;
				std::string bizType_;
				std::string idCardNum_;
				std::string bizId_;
				std::string validStartDate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEWHITELISTREQUEST_H_