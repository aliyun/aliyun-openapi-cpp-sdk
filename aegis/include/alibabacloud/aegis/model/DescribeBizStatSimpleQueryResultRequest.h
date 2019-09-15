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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEBIZSTATSIMPLEQUERYRESULTREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEBIZSTATSIMPLEQUERYRESULTREQUEST_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribeBizStatSimpleQueryResultRequest : public RpcServiceRequest
			{

			public:
				DescribeBizStatSimpleQueryResultRequest();
				~DescribeBizStatSimpleQueryResultRequest();

				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				int getCustomTimeRange()const;
				void setCustomTimeRange(int customTimeRange);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getCustomQuery()const;
				void setCustomQuery(const std::string& customQuery);

            private:
				std::string endTime_;
				std::string startTime_;
				int customTimeRange_;
				std::string sourceIp_;
				std::string customQuery_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEBIZSTATSIMPLEQUERYRESULTREQUEST_H_