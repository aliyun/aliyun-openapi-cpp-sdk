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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBESTRATEGYEXECDETAILRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBESTRATEGYEXECDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeStrategyExecDetailResult : public ServiceResult
			{
			public:
				struct FailedEcs
				{
					std::string instanceName;
					std::string internetIp;
					std::string iP;
					std::string intranetIp;
					std::string reason;
				};


				DescribeStrategyExecDetailResult();
				explicit DescribeStrategyExecDetailResult(const std::string &payload);
				~DescribeStrategyExecDetailResult();
				std::string getEndTime()const;
				std::string getPercent()const;
				int getFailCount()const;
				std::string getStartTime()const;
				int getSuccessCount()const;
				std::vector<FailedEcs> getFailedEcsList()const;
				std::string getSource()const;
				int getInProcessCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string percent_;
				int failCount_;
				std::string startTime_;
				int successCount_;
				std::vector<FailedEcs> failedEcsList_;
				std::string source_;
				int inProcessCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBESTRATEGYEXECDETAILRESULT_H_