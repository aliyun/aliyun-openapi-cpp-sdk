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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEDEDICATEDCLUSTERMONITORRULERESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEDEDICATEDCLUSTERMONITORRULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeDedicatedClusterMonitorRuleResult : public ServiceResult
			{
			public:


				DescribeDedicatedClusterMonitorRuleResult();
				explicit DescribeDedicatedClusterMonitorRuleResult(const std::string &payload);
				~DescribeDedicatedClusterMonitorRuleResult();
				std::string getNoticeSwitch()const;
				std::string getDedicatedClusterId()const;
				std::string getPhones()const;
				std::string getDuAlarmThreshold()const;
				std::string getCpuAlarmThreshold()const;
				std::string getHttpStatusCode()const;
				std::string getMemAlarmThreshold()const;
				std::string getDiskAlarmThreshold()const;
				std::string getErrMessage()const;
				std::string getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string noticeSwitch_;
				std::string dedicatedClusterId_;
				std::string phones_;
				std::string duAlarmThreshold_;
				std::string cpuAlarmThreshold_;
				std::string httpStatusCode_;
				std::string memAlarmThreshold_;
				std::string diskAlarmThreshold_;
				std::string errMessage_;
				std::string success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEDEDICATEDCLUSTERMONITORRULERESULT_H_