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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBECUSTOMLINERESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBECUSTOMLINERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeCustomLineResult : public ServiceResult
			{
			public:
				struct IpSegment
				{
					std::string startIp;
					std::string endIp;
					std::string name;
				};


				DescribeCustomLineResult();
				explicit DescribeCustomLineResult(const std::string &payload);
				~DescribeCustomLineResult();
				std::vector<IpSegment> getIpSegmentList()const;
				std::string getDomainName()const;
				std::string getCreateTime()const;
				long getId()const;
				std::string getIpSegments()const;
				std::string getCode()const;
				long getCreateTimestamp()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<IpSegment> ipSegmentList_;
				std::string domainName_;
				std::string createTime_;
				long id_;
				std::string ipSegments_;
				std::string code_;
				long createTimestamp_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBECUSTOMLINERESULT_H_