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

#ifndef ALIBABACLOUD_PVTZ_MODEL_DESCRIBEZONESREQUEST_H_
#define ALIBABACLOUD_PVTZ_MODEL_DESCRIBEZONESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/pvtz/PvtzExport.h>

namespace AlibabaCloud
{
	namespace Pvtz
	{
		namespace Model
		{
			class ALIBABACLOUD_PVTZ_EXPORT DescribeZonesRequest : public RpcServiceRequest
			{

			public:
				DescribeZonesRequest();
				~DescribeZonesRequest();

				std::string getQueryVpcId()const;
				void setQueryVpcId(const std::string& queryVpcId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getKeyword()const;
				void setKeyword(const std::string& keyword);
				std::string getDirection()const;
				void setDirection(const std::string& direction);
				std::string getOrderBy()const;
				void setOrderBy(const std::string& orderBy);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getSearchMode()const;
				void setSearchMode(const std::string& searchMode);
				std::string getQueryRegionId()const;
				void setQueryRegionId(const std::string& queryRegionId);

            private:
				std::string queryVpcId_;
				int pageNumber_;
				std::string resourceGroupId_;
				int pageSize_;
				std::string lang_;
				std::string keyword_;
				std::string direction_;
				std::string orderBy_;
				std::string userClientIp_;
				std::string searchMode_;
				std::string queryRegionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PVTZ_MODEL_DESCRIBEZONESREQUEST_H_