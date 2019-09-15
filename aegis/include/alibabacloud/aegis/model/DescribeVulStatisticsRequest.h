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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEVULSTATISTICSREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEVULSTATISTICSREQUEST_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribeVulStatisticsRequest : public RpcServiceRequest
			{

			public:
				DescribeVulStatisticsRequest();
				~DescribeVulStatisticsRequest();

				std::string getStartModifyTimePatch()const;
				void setStartModifyTimePatch(const std::string& startModifyTimePatch);
				std::string getDistribution()const;
				void setDistribution(const std::string& distribution);
				std::string getUuid()const;
				void setUuid(const std::string& uuid);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getEndFindTimePatch()const;
				void setEndFindTimePatch(const std::string& endFindTimePatch);
				std::string getFrom()const;
				void setFrom(const std::string& from);
				std::string getEndModifyTimePatch()const;
				void setEndModifyTimePatch(const std::string& endModifyTimePatch);
				std::string getRemarkPatch()const;
				void setRemarkPatch(const std::string& remarkPatch);
				std::string getStartFindTimePatch()const;
				void setStartFindTimePatch(const std::string& startFindTimePatch);

            private:
				std::string startModifyTimePatch_;
				std::string distribution_;
				std::string uuid_;
				std::string sourceIp_;
				std::string endFindTimePatch_;
				std::string from_;
				std::string endModifyTimePatch_;
				std::string remarkPatch_;
				std::string startFindTimePatch_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEVULSTATISTICSREQUEST_H_