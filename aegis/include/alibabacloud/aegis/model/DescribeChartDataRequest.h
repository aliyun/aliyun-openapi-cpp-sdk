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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBECHARTDATAREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBECHARTDATAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeChartDataRequest : public RpcServiceRequest
			{

			public:
				DescribeChartDataRequest();
				~DescribeChartDataRequest();

				long getTimeEnd()const;
				void setTimeEnd(long timeEnd);
				std::string getRangeUnit()const;
				void setRangeUnit(const std::string& rangeUnit);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getCharId()const;
				void setCharId(const std::string& charId);
				std::string getLang()const;
				void setLang(const std::string& lang);
				long getTimeStart()const;
				void setTimeStart(long timeStart);

            private:
				long timeEnd_;
				std::string rangeUnit_;
				std::string sourceIp_;
				std::string charId_;
				std::string lang_;
				long timeStart_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBECHARTDATAREQUEST_H_