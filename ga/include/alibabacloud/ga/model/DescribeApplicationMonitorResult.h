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

#ifndef ALIBABACLOUD_GA_MODEL_DESCRIBEAPPLICATIONMONITORRESULT_H_
#define ALIBABACLOUD_GA_MODEL_DESCRIBEAPPLICATIONMONITORRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT DescribeApplicationMonitorResult : public ServiceResult
			{
			public:
				struct 探测点列表
				{
					std::string ispName;
					std::string isp;
					std::string city;
					std::string cityName;
				};


				DescribeApplicationMonitorResult();
				explicit DescribeApplicationMonitorResult(const std::string &payload);
				~DescribeApplicationMonitorResult();
				int getSilenceTime()const;
				int getDetectThreshold()const;
				std::string getTaskId()const;
				std::string getAddress()const;
				bool getDetectEnable()const;
				std::string getTaskName()const;
				std::string getOptionsJson()const;
				std::string getRegionId()const;
				std::string getAcceleratorId()const;
				int getDetectTimes()const;
				std::vector<探测点列表> getIspCityList()const;
				std::string getListenerId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int silenceTime_;
				int detectThreshold_;
				std::string taskId_;
				std::string address_;
				bool detectEnable_;
				std::string taskName_;
				std::string optionsJson_;
				std::string regionId_;
				std::string acceleratorId_;
				int detectTimes_;
				std::vector<探测点列表> ispCityList_;
				std::string listenerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_DESCRIBEAPPLICATIONMONITORRESULT_H_