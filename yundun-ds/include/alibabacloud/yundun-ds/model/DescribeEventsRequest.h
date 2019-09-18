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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEEVENTSREQUEST_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/yundun-ds/Yundun_dsExport.h>

namespace AlibabaCloud
{
	namespace Yundun_ds
	{
		namespace Model
		{
			class ALIBABACLOUD_YUNDUN_DS_EXPORT DescribeEventsRequest : public RpcServiceRequest
			{

			public:
				DescribeEventsRequest();
				~DescribeEventsRequest();

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
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getDealUserId()const;
				void setDealUserId(const std::string& dealUserId);
				int getFeatureType()const;
				void setFeatureType(int featureType);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				long getDepartId()const;
				void setDepartId(long departId);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string startTime_;
				long userId_;
				std::string typeCode_;
				std::string subTypeCode_;
				std::string sourceIp_;
				int pageSize_;
				std::string lang_;
				std::string dealUserId_;
				int featureType_;
				std::string endTime_;
				int currentPage_;
				long departId_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEEVENTSREQUEST_H_