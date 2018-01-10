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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBERANGEDATABYLOCATEANDISPSERVICEREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBERANGEDATABYLOCATEANDISPSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/cdn/CdnRequest.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeRangeDataByLocateAndIspServiceRequest : public CdnRequest
			{

			public:
				DescribeRangeDataByLocateAndIspServiceRequest();
				~DescribeRangeDataByLocateAndIspServiceRequest();

				std::string getIspNames()const;
				void setIspNames(const std::string& ispNames);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getDomainNames()const;
				void setDomainNames(const std::string& domainNames);
				std::string getLocationNames()const;
				void setLocationNames(const std::string& locationNames);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string ispNames_;
				std::string securityToken_;
				std::string domainNames_;
				std::string locationNames_;
				std::string endTime_;
				std::string startTime_;
				long ownerId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBERANGEDATABYLOCATEANDISPSERVICEREQUEST_H_