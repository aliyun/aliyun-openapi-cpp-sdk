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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERESOURCEDIAGNOSISRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERESOURCEDIAGNOSISRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeResourceDiagnosisResult : public ServiceResult
			{
			public:


				DescribeResourceDiagnosisResult();
				explicit DescribeResourceDiagnosisResult(const std::string &payload);
				~DescribeResourceDiagnosisResult();
				std::vector<std::string> getStorage()const;
				std::string getEndTime()const;
				std::vector<std::string> getMemory()const;
				std::vector<std::string> getConnection()const;
				std::string getStartTime()const;
				std::vector<std::string> getCPU()const;
				std::vector<std::string> getIOPS()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> storage_;
				std::string endTime_;
				std::vector<std::string> memory_;
				std::vector<std::string> connection_;
				std::string startTime_;
				std::vector<std::string> cPU_;
				std::vector<std::string> iOPS_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERESOURCEDIAGNOSISRESULT_H_