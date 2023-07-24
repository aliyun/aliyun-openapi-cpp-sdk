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

#ifndef ALIBABACLOUD_SASTI_MODEL_DESCRIBEFILEREPORTRESULT_H_
#define ALIBABACLOUD_SASTI_MODEL_DESCRIBEFILEREPORTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sasti/SastiExport.h>

namespace AlibabaCloud
{
	namespace Sasti
	{
		namespace Model
		{
			class ALIBABACLOUD_SASTI_EXPORT DescribeFileReportResult : public ServiceResult
			{
			public:


				DescribeFileReportResult();
				explicit DescribeFileReportResult(const std::string &payload);
				~DescribeFileReportResult();
				std::string getBasic()const;
				std::string getThreatLevel()const;
				std::string getFileHash()const;
				std::string getThreatTypes()const;
				std::string getIntelligences()const;
				std::string getSandbox()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string basic_;
				std::string threatLevel_;
				std::string fileHash_;
				std::string threatTypes_;
				std::string intelligences_;
				std::string sandbox_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SASTI_MODEL_DESCRIBEFILEREPORTRESULT_H_