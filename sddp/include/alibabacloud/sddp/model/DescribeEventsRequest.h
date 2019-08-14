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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEEVENTSREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeEventsRequest : public RpcServiceRequest
			{

			public:
				DescribeEventsRequest();
				~DescribeEventsRequest();

				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				int getFeatureType()const;
				void setFeatureType(int featureType);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				long getUserId()const;
				void setUserId(long userId);
				std::string getTypeCode()const;
				void setTypeCode(const std::string& typeCode);
				std::string getSubTypeCode()const;
				void setSubTypeCode(const std::string& subTypeCode);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getTargetProductCode()const;
				void setTargetProductCode(const std::string& targetProductCode);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getDepartId()const;
				void setDepartId(long departId);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getDealUserId()const;
				void setDealUserId(const std::string& dealUserId);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string productCode_;
				int featureType_;
				std::string endTime_;
				int currentPage_;
				std::string startTime_;
				long userId_;
				std::string typeCode_;
				std::string subTypeCode_;
				std::string sourceIp_;
				std::string targetProductCode_;
				int pageSize_;
				long departId_;
				std::string lang_;
				std::string dealUserId_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEEVENTSREQUEST_H_